/*
 * XREFs of PnprWakeDevices @ 0x140B451D4
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140B450A0 (PnprQuiesceWorker.c)
 * Callees:
 *     PoEndPowerStateTasks @ 0x1406ED5F0 (PoEndPowerStateTasks.c)
 *     PoEndPartitionReplace @ 0x140747324 (PoEndPartitionReplace.c)
 *     PoUnblockConsoleSwitch @ 0x140A2C648 (PoUnblockConsoleSwitch.c)
 *     PoClearBroadcast @ 0x140A86FE8 (PoClearBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x140B43B94 (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
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
