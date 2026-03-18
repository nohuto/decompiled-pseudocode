/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x140419F10
 * Callers:
 *     IopFreeMiniCompletionPacket @ 0x1409A6C70 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     AlpcpQueueIoCompletion @ 0x140281CC0 (AlpcpQueueIoCompletion.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     IoFreeMiniCompletionPacket @ 0x1409A6C50 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v6; // ebp
  __int64 v7; // r12
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB **v9; // rdx
  int v10; // eax
  int v11; // eax
  volatile signed __int64 *v12; // rax
  unsigned __int8 v13; // cl
  bool v14; // di
  __int64 v15; // r8
  __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v19; // rdi
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  void *v22; // rdi
  signed __int32 v23[8]; // [rsp+0h] [rbp-78h] BYREF
  volatile signed __int64 *v24; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+40h] [rbp-38h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v2 = a2[2];
  v3 = 0;
  v26 = 0LL;
  v6 = 0;
  do
  {
    v25 = (volatile signed __int64 *)v2;
    v7 = 0LL;
    v24 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    LOBYTE(v26) = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v9 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)v2, (__int64)&v24);
      if ( v9 )
        KxWaitForLockOwnerShip((struct _KPRCB *)&v24, v9);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&v24, (volatile __int64 *)v2);
    }
    v10 = *(_DWORD *)(v2 + 16);
    if ( v10 )
    {
      *(_DWORD *)(v2 + 16) = v10 - 1;
    }
    else
    {
      v11 = *(_DWORD *)(v2 + 20);
      if ( v11 )
      {
        v7 = -1LL;
        *(_DWORD *)(v2 + 20) = v11 - 1;
      }
      else
      {
        --*(_DWORD *)(v2 + 12);
        a1 = 0LL;
        *a2 = *(_QWORD *)(v2 + 32);
        *(_QWORD *)(v2 + 32) = a2;
        if ( !*(_DWORD *)(v2 + 12) && *(_DWORD *)(v2 + 24) )
          v6 = 1;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&v24);
      v12 = v24;
      if ( !v24 )
      {
        if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v25, 0LL, (signed __int64)&v24) == &v24 )
          goto LABEL_20;
        v12 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v24);
      }
      v24 = 0LL;
      v13 = (unsigned __int8)v25;
      if ( ((v13 ^ (unsigned __int8)_InterlockedExchange64(v12 + 1, (__int64)v25)) & 4) != 0 )
      {
        _InterlockedOr(v23, 0);
        v14 = KeDisableInterrupts();
        KiHaltOnAddressWakeEntireList(v16, _InterlockedExchange64(&KiHaltOnAddressHashTable[v15], 0LL));
        if ( v14 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v20 = *SchedulerAssist;
            do
            {
              v21 = v20;
              v20 = _InterlockedCompareExchange(SchedulerAssist, v20 & 0xFFDFFFFF, v20);
            }
            while ( v21 != v20 );
            if ( (v20 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
        }
      }
    }
    else
    {
      KiReleaseQueuedSpinLockInstrumented(&v24, retaddr);
    }
LABEL_20:
    v19 = (unsigned __int8)v26;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v26);
    __writecr8(v19);
    if ( !a1 )
      goto LABEL_23;
  }
  while ( !ObReferenceObjectSafeWithTag(*(_QWORD *)(v2 + 40), 0x746C6644u) );
  v22 = *(void **)(v2 + 40);
  AlpcpQueueIoCompletion((__int64)v22, *(_QWORD *)(v2 + 48), v7, a1, 0, 0);
  ObfDereferenceObjectWithTag(v22, 0x746C6644u);
LABEL_23:
  if ( v6 )
  {
    if ( *(_DWORD *)(v2 + 8) )
    {
      do
        IoFreeMiniCompletionPacket(*(_QWORD *)(v2 + 24LL * v3++ + 64));
      while ( v3 < *(_DWORD *)(v2 + 8) );
    }
    ExFreePoolWithTag((PVOID)v2, 0);
  }
}
