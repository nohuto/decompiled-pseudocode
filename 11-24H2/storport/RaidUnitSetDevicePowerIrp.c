/*
 * XREFs of RaidUnitSetDevicePowerIrp @ 0x1400079E8
 * Callers:
 *     RaidUnitSetPowerIrp @ 0x1400063C0 (RaidUnitSetPowerIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x140007B60 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidUnitSetDevicePowerIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 51LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids, a1, a2);
  }
  if ( *(_DWORD *)(a1 + 548) != 4 || a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    return RaidUnitProcessSetDevicePowerIrp((PVOID)a1, a2);
  if ( (*(_BYTE *)(v2 + 108) & 8) == 0
    && *(_QWORD *)(v2 + 4960)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3608), 1, 0) )
  {
    RaidAdapterPoFxActivateComponent(v2, 0LL, 0LL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 80), &LockHandle);
  if ( *(int *)(v2 + 348) <= 1 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return RaidUnitProcessSetDevicePowerIrp((PVOID)a1, a2);
  }
  *(_BYTE *)(a1 + 2041) = 1;
  *(_QWORD *)(a1 + 2048) = a2;
  RaUnitAcquireRemoveLock(a1, (__int64)a2, 1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 4944), (PSLIST_ENTRY)(a1 + 2064));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 259LL;
}
