/*
 * XREFs of PnprWakeDevices @ 0x140B551D4
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140B550A0 (PnprQuiesceWorker.c)
 * Callees:
 *     PoEndPowerStateTasks @ 0x1406F9230 (PoEndPowerStateTasks.c)
 *     PoEndPartitionReplace @ 0x140753414 (PoEndPartitionReplace.c)
 *     PoUnblockConsoleSwitch @ 0x1409B8098 (PoUnblockConsoleSwitch.c)
 *     PoClearBroadcast @ 0x140A8BD00 (PoClearBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x140B53B94 (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
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
