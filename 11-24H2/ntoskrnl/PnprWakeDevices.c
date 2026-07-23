/*
 * XREFs of PnprWakeDevices @ 0x140B57224
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140B570F0 (PnprQuiesceWorker.c)
 * Callees:
 *     PoEndPowerStateTasks @ 0x1406F6E70 (PoEndPowerStateTasks.c)
 *     PoEndPartitionReplace @ 0x140751734 (PoEndPartitionReplace.c)
 *     PoUnblockConsoleSwitch @ 0x14099E6E8 (PoUnblockConsoleSwitch.c)
 *     PoClearBroadcast @ 0x140A881F0 (PoClearBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x140B55BE4 (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 */

__int64 __fastcall PnprWakeDevices(__int64 a1)
{
  *(_DWORD *)(PnprContext + 33336) = PnprGetMillisecondCounter(0);
  *(_BYTE *)(a1 + 29) = 1;
  PoBroadcastSystemState(a1 + 4);
  PoClearBroadcast();
  PoEndPartitionReplace(a1 + 40, *(_DWORD *)(a1 + 32));
  PoEndPowerStateTasks(a1 + 40);
  PoUnblockConsoleSwitch(a1 + 40, *(_DWORD *)(a1 + 32));
  *(_DWORD *)(PnprContext + 33340) = PnprGetMillisecondCounter(0);
  return 0LL;
}
