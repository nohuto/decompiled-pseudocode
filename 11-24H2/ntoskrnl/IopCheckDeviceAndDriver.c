/*
 * XREFs of IopCheckDeviceAndDriver @ 0x1402D4BF0
 * Callers:
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // di
  void *ArbitraryUserPointer; // rax
  __int64 v6; // rcx
  volatile __int64 *v7; // rdx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebp
  volatile signed __int64 **v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // si
  __int64 v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  __int64 v23; // rcx
  signed __int32 v24[8]; // [rsp+0h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v6 = (__int64)ArbitraryUserPointer + 160;
  v7 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 21);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(v7, v6) )
      KxWaitForLockOwnerShip(v6);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v6, v7);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v8 = *(_DWORD *)(a2 + 48), (v8 & 0x80u) != 0) )
  {
    v10 = -1073741810;
  }
  else if ( (v8 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    v9 = *(_DWORD *)(a2 + 4) + 1;
    *(_DWORD *)(a2 + 4) = v9;
    if ( v9 <= 0 )
    {
      v23 = *(_QWORD *)(a2 + 8);
      if ( v23 )
      {
        IoAddTriageDumpDataBlock(v23, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, *(int *)(a2 + 4));
    }
    v10 = 0;
  }
  else
  {
    v10 = -1073741790;
  }
  v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
    goto LABEL_14;
  }
  _m_prefetchw(v11);
  v13 = (__int64)*v11;
  if ( !*v11 )
  {
    if ( v11 == (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
      goto LABEL_14;
    v13 = KxWaitForLockChainValid(v11);
  }
  *v11 = 0LL;
  v14 = (__int64)v11[1];
  if ( (((unsigned __int8)v14 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v13 + 8), v14)) & 4) != 0 )
  {
    _InterlockedOr(v24, 0);
    v17 = KeDisableInterrupts(v14, v7, ((unsigned __int64)(v13 + 8) >> 5) & 0x7F);
    KiHaltOnAddressWakeEntireList(v18, _InterlockedExchange64((volatile __int64 *)(v16 + 8 * v15), 0LL));
    if ( v17 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v21 = *SchedulerAssist;
        do
        {
          v22 = v21;
          v21 = _InterlockedCompareExchange(SchedulerAssist, v21 & 0xFFDFFFFF, v21);
        }
        while ( v22 != v21 );
        if ( (v21 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
LABEL_14:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v10;
}
