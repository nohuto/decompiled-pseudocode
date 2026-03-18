/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x1402CEC30
 * Callers:
 *     ExSetResourceOwnerPointerEx @ 0x1402CEBF0 (ExSetResourceOwnerPointerEx.c)
 *     ExSetResourceOwnerPointer @ 0x1402CF1E0 (ExSetResourceOwnerPointer.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14024E3A0 (PsBoostThreadIoQoS.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1402CEBD0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1406502D0 (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

void __fastcall ExpSetResourceOwnerPointerEx(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter4, __int64 a3)
{
  char v3; // r15
  bool v6; // r14
  ULONG_PTR CurrentThread; // rbp
  volatile __int64 *v8; // rdi
  unsigned int v9; // r13d
  unsigned __int8 CurrentIrql; // si
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r15d
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  int v28; // ecx
  __int64 v29; // r8
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v3 = a3;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v8 = (volatile __int64 *)(BugCheckParameter1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter1 + 96);
  v9 = 65792;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(v8, (__int64)&LockHandle) )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v8);
  }
  if ( *(char *)(BugCheckParameter1 + 26) < 0 )
  {
    if ( ExpResourceEnforcesOwnershipTransfer(BugCheckParameter1)
      && *(_QWORD *)(BugCheckParameter1 + 48) != CurrentThread )
    {
      KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
    }
    if ( (v3 & 1) != 0 )
    {
      if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          CurrentThread,
          BugCheckParameter4);
      ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
      *(_DWORD *)(BugCheckParameter1 + 56) |= 2u;
    }
    else
    {
      v31 = *(_DWORD *)(BugCheckParameter1 + 56);
      if ( (v31 & 1) != 0 )
      {
        PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), 1, 0LL, 0LL);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
        v31 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v31 & 4) != 0 )
      {
        PsBoostThreadIoQoS(*(_QWORD *)(BugCheckParameter1 + 48), 1, v29);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
    __incgsdword(0x90D4u);
    v9 = 32 * (v6 + 2056);
  }
  else
  {
    v11 = *(_QWORD *)(BugCheckParameter1 + 48);
    v12 = BugCheckParameter1 + 48;
    if ( v11 != BugCheckParameter4 )
    {
      v13 = *(_QWORD *)(BugCheckParameter1 + 16);
      v14 = v11 != 0;
      v15 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( v13 && (a3 = v13 + 16LL * *(unsigned int *)(v13 + 8), v12 = v13 + 16, v14 < v15) )
      {
        while ( *(_QWORD *)v12 != BugCheckParameter4 )
        {
          if ( !*(_QWORD *)v12 || (++v14, v14 != v15) )
          {
            v12 += 16LL;
            if ( v12 != a3 )
              continue;
          }
          goto LABEL_9;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v12 - *(_DWORD *)(BugCheckParameter1 + 16)) >> 4;
      }
      else
      {
LABEL_9:
        v12 = 0LL;
      }
    }
    if ( (CurrentThread & 3) != 0 )
      v16 = 0;
    else
      v16 = *(unsigned __int8 *)(CurrentThread + 1120);
    v17 = *(_QWORD *)(BugCheckParameter1 + 48);
    v18 = BugCheckParameter1 + 48;
    if ( v17 != CurrentThread )
    {
      v19 = v17 != 0;
      if ( !v16
        || (v22 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
        || v16 >= *(_DWORD *)(v22 + 8)
        || (v18 = v22 + 16LL * v16, *(_QWORD *)v18 != CurrentThread) )
      {
        v20 = *(_QWORD *)(BugCheckParameter1 + 16);
        v21 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
        if ( !v20 || (a3 = v20 + 16LL * *(unsigned int *)(v20 + 8), v18 = v20 + 16, v19 >= v21) )
LABEL_15:
          KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 4uLL);
        while ( *(_QWORD *)v18 != CurrentThread )
        {
          if ( !*(_QWORD *)v18 || (++v19, v19 != v21) )
          {
            v18 += 16LL;
            if ( v18 != a3 )
              continue;
          }
          goto LABEL_15;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v18 - *(_DWORD *)(BugCheckParameter1 + 16)) >> 4;
      }
    }
    v23 = v3 & 1;
    if ( v12 )
    {
      if ( v23 )
      {
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        v26 = *(_DWORD *)(v18 + 8);
        if ( (v26 & 1) != 0 )
        {
          v32 = *(_DWORD *)(v12 + 8);
          if ( (v32 & 1) != 0 )
            PsBoostThreadIoEx(*(_QWORD *)v18, 1, 0LL, 0LL);
          else
            *(_DWORD *)(v12 + 8) = v32 | 1;
          *(_DWORD *)(v18 + 8) &= ~1u;
          v26 = *(_DWORD *)(v18 + 8);
        }
        if ( (v26 & 4) != 0 )
        {
          v33 = *(_DWORD *)(v12 + 8);
          if ( (v33 & 4) != 0 )
            PsBoostThreadIoQoS(*(_QWORD *)v18, 1, a3);
          else
            *(_DWORD *)(v12 + 8) = v33 | 4;
          *(_DWORD *)(v18 + 8) &= ~4u;
        }
        if ( (*(_DWORD *)(v12 + 8) & 2) == 0 )
        {
          ObfReferenceObjectWithTag(*(PVOID *)v18, 0x746C6644u);
          *(_DWORD *)(v12 + 8) |= 2u;
        }
      }
      else
      {
        v30 = *(_DWORD *)(v18 + 8);
        if ( (v30 & 1) != 0 )
        {
          PsBoostThreadIoEx(*(_QWORD *)v18, 1, 0LL, 0LL);
          *(_DWORD *)(v18 + 8) &= ~1u;
          v30 = *(_DWORD *)(v18 + 8);
        }
        if ( (v30 & 4) != 0 )
        {
          PsBoostThreadIoQoS(*(_QWORD *)v18, 1, a3);
          *(_DWORD *)(v18 + 8) &= ~4u;
        }
      }
      v27 = *(_DWORD *)(v18 + 8) + (*(_DWORD *)(v12 + 8) & 0xFFFFFFF8);
      v28 = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)*(_DWORD *)(v12 + 8)) & 7;
      v24 = 37084;
      *(_DWORD *)(v12 + 8) = v28;
      *(_DWORD *)(v18 + 8) &= 7u;
      *(_QWORD *)v18 = 0LL;
      --*(_DWORD *)(BugCheckParameter1 + 64);
    }
    else
    {
      if ( v23 )
      {
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
        *(_DWORD *)(v18 + 8) |= 2u;
      }
      else
      {
        v25 = *(_DWORD *)(v18 + 8);
        if ( (v25 & 1) != 0 )
        {
          PsBoostThreadIoEx(*(_QWORD *)v18, 1, 0LL, 0LL);
          *(_DWORD *)(v18 + 8) &= ~1u;
          v25 = *(_DWORD *)(v18 + 8);
        }
        if ( (v25 & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v18 + 1508LL));
          *(_DWORD *)(v18 + 8) &= ~4u;
        }
      }
      *(_QWORD *)v18 = BugCheckParameter4;
      v24 = 37080;
    }
    __incgsdword(v24);
    if ( v6 )
    {
      v9 = 65856;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_79;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 )
LABEL_79:
    PerfLogExecutiveResourceSetOwnerPointer(v9, BugCheckParameter1);
}
