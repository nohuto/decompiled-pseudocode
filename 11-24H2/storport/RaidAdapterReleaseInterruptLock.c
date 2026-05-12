/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1400277E0
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidBusEnumeratorGetUnit @ 0x140019940 (RaidBusEnumeratorGetUnit.c)
 *     RaidAdapterRestartAdapter @ 0x14001BD1C (RaidAdapterRestartAdapter.c)
 *     StorportTimerDpc @ 0x140027020 (StorportTimerDpc.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x140027100 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterRemoveNormalChildren @ 0x140027258 (RaidAdapterRemoveNormalChildren.c)
 *     StorPortSetDeviceQueueDepth @ 0x140027440 (StorPortSetDeviceQueueDepth.c)
 *     RaidAdapterStopAdapter @ 0x1400275F8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1400276F0 (RaidAdapterReleaseStartIoLock.c)
 *     StorPortSynchronizeAccess @ 0x140027730 (StorPortSynchronizeAccess.c)
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     RaidAdapterReInitialize @ 0x140054250 (RaidAdapterReInitialize.c)
 *     RaidAdapterGetFirstUnit @ 0x14005A4C4 (RaidAdapterGetFirstUnit.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterReleaseInterruptLock(__int64 a1, KIRQL a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  PKINTERRUPT *v5; // r14
  struct _KINTERRUPT *v6; // rcx

  if ( *(_BYTE *)(a1 + 4369) )
  {
    v3 = *(_QWORD *)(a1 + 4352);
    if ( *(_DWORD *)(a1 + 4336) == 2 )
    {
      v4 = *(_DWORD *)(v3 + 4) - 1;
      if ( *(_DWORD *)(v3 + 4) != 1 )
      {
        v5 = (PKINTERRUPT *)(v3 + 48LL * v4 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v5, *(_BYTE *)v3);
          v5 -= 6;
          --v4;
        }
        while ( v4 );
      }
    }
    KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v3 + 24), a2);
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 848);
    if ( v6 )
      KeReleaseInterruptSpinLock(v6, a2);
  }
}
