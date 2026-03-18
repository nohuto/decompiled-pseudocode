/*
 * XREFs of IopCheckDeviceAndDriver @ 0x1402FF290
 * Callers:
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  void *ArbitraryUserPointer; // rax
  __int64 v8; // rcx
  volatile __int64 *v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebp
  volatile signed __int64 **v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // di
  __int64 v20; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  __int64 v26; // rcx
  signed __int32 v27[8]; // [rsp+0h] [rbp-38h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v8 = (__int64)ArbitraryUserPointer + 160;
  v9 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 21);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v10 = _InterlockedExchange64(v9, v8);
    if ( v10 )
      KxWaitForLockOwnerShip(v8, v10, v9, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v8, v9);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v11 = *(_DWORD *)(a2 + 48), (v11 & 0x80u) != 0) )
  {
    v13 = -1073741810;
  }
  else if ( (v11 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    v12 = *(_DWORD *)(a2 + 4) + 1;
    *(_DWORD *)(a2 + 4) = v12;
    if ( v12 <= 0 )
    {
      v26 = *(_QWORD *)(a2 + 8);
      if ( v26 )
      {
        IoAddTriageDumpDataBlock(v26, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, *(int *)(a2 + 4));
    }
    v13 = 0;
  }
  else
  {
    v13 = -1073741790;
  }
  v14 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v14);
    v15 = (__int64)*v14;
    if ( !*v14 )
    {
      if ( v14 == (volatile signed __int64 **)_InterlockedCompareExchange64(v14[1], 0LL, (signed __int64)v14) )
        goto LABEL_19;
      v15 = KxWaitForLockChainValid((__int64 *)v14);
    }
    *v14 = 0LL;
    v16 = (__int64)v14[1];
    if ( (((unsigned __int8)v16 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v15 + 8), v16)) & 4) != 0 )
    {
      _InterlockedOr(v27, 0);
      v19 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v20, _InterlockedExchange64((volatile __int64 *)(v18 + 8 * v17), 0LL));
      if ( v19 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v24 = *SchedulerAssist;
          do
          {
            v25 = v24;
            v24 = _InterlockedCompareExchange(SchedulerAssist, v24 & 0xFFDFFFFF, v24);
          }
          while ( v25 != v24 );
          if ( (v24 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented(v14, retaddr);
  }
LABEL_19:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v13;
}
