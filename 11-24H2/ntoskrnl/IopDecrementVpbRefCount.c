/*
 * XREFs of IopDecrementVpbRefCount @ 0x1402D48F0
 * Callers:
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x140AB7170 (IoVerifyVolume.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // si
  void *ArbitraryUserPointer; // rax
  __int64 v5; // rcx
  volatile __int64 *v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // ebp
  volatile signed __int64 **v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // di
  __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  signed __int32 v21[10]; // [rsp+0h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    return (unsigned int)--*(_DWORD *)(a1 + 28);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v5 = (__int64)ArbitraryUserPointer + 144;
  v6 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 19);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v7 = _InterlockedExchange64(v6, v5);
    if ( v7 )
      KxWaitForLockOwnerShip(v5);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v5, v6);
  }
  v8 = --*(_DWORD *)(a1 + 28);
  v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v9);
    v11 = (__int64)*v9;
    if ( !*v9 )
    {
      if ( v9 == (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
        goto LABEL_10;
      v11 = KxWaitForLockChainValid(v9);
    }
    *v9 = 0LL;
    v12 = (__int64)v9[1];
    if ( (((unsigned __int8)v12 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), v12)) & 4) != 0 )
    {
      _InterlockedOr(v21, 0);
      v15 = KeDisableInterrupts(v12, v7, ((unsigned __int64)(v11 + 8) >> 5) & 0x7F);
      KiHaltOnAddressWakeEntireList(v16, _InterlockedExchange64((volatile __int64 *)(v14 + 8 * v13), 0LL));
      if ( v15 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v19 = *SchedulerAssist;
          do
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
          }
          while ( v20 != v19 );
          if ( (v19 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
    goto LABEL_10;
  }
  KiReleaseQueuedSpinLockInstrumented(v9, retaddr);
LABEL_10:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v8;
}
