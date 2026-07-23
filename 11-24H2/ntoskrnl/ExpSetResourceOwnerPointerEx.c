/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x1403FE770
 * Callers:
 *     ExSetResourceOwnerPointer @ 0x1403FE6F0 (ExSetResourceOwnerPointer.c)
 *     ExSetResourceOwnerPointerEx @ 0x1403FE730 (ExSetResourceOwnerPointerEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14027E9B0 (PsBoostThreadIoQoS.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1403FECB0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x14064E910 (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

void __fastcall ExpSetResourceOwnerPointerEx(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter4, char a3)
{
  bool v6; // r14
  ULONG_PTR CurrentThread; // rbp
  volatile __int64 *v8; // rdi
  unsigned int v9; // r13d
  unsigned __int8 CurrentIrql; // si
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r8
  int v26; // r15d
  unsigned int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

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
    v11 = (_QWORD *)_InterlockedExchange64(v8, (__int64)&LockHandle);
    if ( v11 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v11);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v8);
  }
  if ( *(char *)(BugCheckParameter1 + 26) < 0 )
  {
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(BugCheckParameter1)
      && *(_QWORD *)(BugCheckParameter1 + 48) != CurrentThread )
    {
      KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
    }
    if ( (a3 & 1) != 0 )
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
      v33 = *(_DWORD *)(BugCheckParameter1 + 56);
      if ( (v33 & 1) != 0 )
      {
        PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), 1, 0, 0LL);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
        v33 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v33 & 4) != 0 )
      {
        PsBoostThreadIoQoS(*(_QWORD *)(BugCheckParameter1 + 48), 1);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
    __incgsdword(0x90D4u);
    v9 = 32 * (v6 + 2056);
  }
  else
  {
    v12 = *(_QWORD *)(BugCheckParameter1 + 48);
    v13 = BugCheckParameter1 + 48;
    if ( v12 != BugCheckParameter4 )
    {
      v14 = *(_QWORD *)(BugCheckParameter1 + 16);
      v15 = v12 != 0;
      v16 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( v14 && (v24 = v14 + 16LL * *(unsigned int *)(v14 + 8), v13 = v14 + 16, v15 < v16) )
      {
        while ( *(_QWORD *)v13 != BugCheckParameter4 )
        {
          if ( !*(_QWORD *)v13 || (++v15, v15 != v16) )
          {
            v13 += 16LL;
            if ( v13 != v24 )
              continue;
          }
          goto LABEL_9;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v13 - *(_DWORD *)(BugCheckParameter1 + 16)) >> 4;
      }
      else
      {
LABEL_9:
        v13 = 0LL;
      }
    }
    if ( (CurrentThread & 3) != 0 )
      v17 = 0;
    else
      v17 = *(unsigned __int8 *)(CurrentThread + 1120);
    v18 = *(_QWORD *)(BugCheckParameter1 + 48);
    v19 = BugCheckParameter1 + 48;
    if ( v18 != CurrentThread )
    {
      v20 = v18 != 0;
      if ( !v17
        || (v23 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
        || v17 >= *(_DWORD *)(v23 + 8)
        || (v19 = v23 + 16LL * v17, *(_QWORD *)v19 != CurrentThread) )
      {
        v21 = *(_QWORD *)(BugCheckParameter1 + 16);
        v22 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
        if ( !v21 || (v25 = v21 + 16LL * *(unsigned int *)(v21 + 8), v19 = v21 + 16, v20 >= v22) )
LABEL_15:
          KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 4uLL);
        while ( *(_QWORD *)v19 != CurrentThread )
        {
          if ( !*(_QWORD *)v19 || (++v20, v20 != v22) )
          {
            v19 += 16LL;
            if ( v19 != v25 )
              continue;
          }
          goto LABEL_15;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v19 - *(_DWORD *)(BugCheckParameter1 + 16)) >> 4;
      }
    }
    v26 = a3 & 1;
    if ( v13 )
    {
      if ( v26 )
      {
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        v29 = *(_DWORD *)(v19 + 8);
        if ( (v29 & 1) != 0 )
        {
          v34 = *(_DWORD *)(v13 + 8);
          if ( (v34 & 1) != 0 )
            PsBoostThreadIoEx(*(_QWORD *)v19, 1, 0, 0LL);
          else
            *(_DWORD *)(v13 + 8) = v34 | 1;
          *(_DWORD *)(v19 + 8) &= ~1u;
          v29 = *(_DWORD *)(v19 + 8);
        }
        if ( (v29 & 4) != 0 )
        {
          v35 = *(_DWORD *)(v13 + 8);
          if ( (v35 & 4) != 0 )
            PsBoostThreadIoQoS(*(_QWORD *)v19, 1);
          else
            *(_DWORD *)(v13 + 8) = v35 | 4;
          *(_DWORD *)(v19 + 8) &= ~4u;
        }
        if ( (*(_DWORD *)(v13 + 8) & 2) == 0 )
        {
          ObfReferenceObjectWithTag(*(PVOID *)v19, 0x746C6644u);
          *(_DWORD *)(v13 + 8) |= 2u;
        }
      }
      else
      {
        v32 = *(_DWORD *)(v19 + 8);
        if ( (v32 & 1) != 0 )
        {
          PsBoostThreadIoEx(*(_QWORD *)v19, 1, 0, 0LL);
          *(_DWORD *)(v19 + 8) &= ~1u;
          v32 = *(_DWORD *)(v19 + 8);
        }
        if ( (v32 & 4) != 0 )
        {
          PsBoostThreadIoQoS(*(_QWORD *)v19, 1);
          *(_DWORD *)(v19 + 8) &= ~4u;
        }
      }
      v30 = *(_DWORD *)(v19 + 8) + (*(_DWORD *)(v13 + 8) & 0xFFFFFFF8);
      v31 = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)*(_DWORD *)(v13 + 8)) & 7;
      v27 = 37084;
      *(_DWORD *)(v13 + 8) = v31;
      *(_DWORD *)(v19 + 8) &= 7u;
      *(_QWORD *)v19 = 0LL;
      --*(_DWORD *)(BugCheckParameter1 + 64);
    }
    else
    {
      if ( v26 )
      {
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
        *(_DWORD *)(v19 + 8) |= 2u;
      }
      else
      {
        v28 = *(_DWORD *)(v19 + 8);
        if ( (v28 & 1) != 0 )
        {
          PsBoostThreadIoEx(*(_QWORD *)v19, 1, 0, 0LL);
          *(_DWORD *)(v19 + 8) &= ~1u;
          v28 = *(_DWORD *)(v19 + 8);
        }
        if ( (v28 & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v19 + 1508LL));
          *(_DWORD *)(v19 + 8) &= ~4u;
        }
      }
      *(_QWORD *)v19 = BugCheckParameter4;
      v27 = 37080;
    }
    __incgsdword(v27);
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
