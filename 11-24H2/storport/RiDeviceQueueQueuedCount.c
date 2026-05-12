/*
 * XREFs of RiDeviceQueueQueuedCount @ 0x140022848
 * Callers:
 *     RaidStartNextIoPacket @ 0x140021350 (RaidStartNextIoPacket.c)
 *     StorpTelemetryGetUnitQueueCounters @ 0x1400220A0 (StorpTelemetryGetUnitQueueCounters.c)
 *     StorpTelemetryConstructErrorEntry @ 0x140022400 (StorpTelemetryConstructErrorEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RiDeviceQueueQueuedCount(__int64 a1)
{
  return *(_QWORD *)(a1 + 88) / 0x100000000LL;
}
