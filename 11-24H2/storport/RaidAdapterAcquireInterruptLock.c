/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x14001A910
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidBusEnumeratorGetLunList @ 0x140018080 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x140018740 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetUnit @ 0x140019940 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x14001A200 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     RaidAdapterRestartAdapter @ 0x14001BD1C (RaidAdapterRestartAdapter.c)
 *     StorportTimerDpc @ 0x140027020 (StorportTimerDpc.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x140027100 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterRemoveNormalChildren @ 0x140027258 (RaidAdapterRemoveNormalChildren.c)
 *     StorPortSetDeviceQueueDepth @ 0x140027440 (StorPortSetDeviceQueueDepth.c)
 *     RaidAdapterStopAdapter @ 0x1400275F8 (RaidAdapterStopAdapter.c)
 *     StorPortSynchronizeAccess @ 0x140027730 (StorPortSynchronizeAccess.c)
 *     RaidAdapterAcquireStartIoLock @ 0x140029420 (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     RaidAdapterReInitialize @ 0x140054250 (RaidAdapterReInitialize.c)
 *     RaidAdapterGetFirstUnit @ 0x14005A4C4 (RaidAdapterGetFirstUnit.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall RaidAdapterAcquireInterruptLock(__int64 a1)
{
  __int64 v2; // rdi
  KIRQL result; // al
  KIRQL v4; // si
  unsigned int v5; // ebx
  struct _KINTERRUPT *v6; // rcx

  if ( *(_BYTE *)(a1 + 4369) )
  {
    v2 = *(_QWORD *)(a1 + 4352);
    result = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v2 + 24));
    v4 = result;
    if ( *(_DWORD *)(a1 + 4336) == 2 )
    {
      v5 = 1;
      if ( *(_DWORD *)(v2 + 4) > 1u )
      {
        do
          KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v2 + 48LL * v5++ + 24));
        while ( v5 < *(_DWORD *)(v2 + 4) );
        return v4;
      }
    }
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 848);
    if ( v6 )
      return KeAcquireInterruptSpinLock(v6);
    else
      return 0;
  }
  return result;
}
