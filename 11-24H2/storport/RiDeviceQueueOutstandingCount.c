/*
 * XREFs of RiDeviceQueueOutstandingCount @ 0x1400229FC
 * Callers:
 *     RaidStartNextIoPacket @ 0x140021350 (RaidStartNextIoPacket.c)
 *     StorpTelemetryGetUnitQueueCounters @ 0x1400220A0 (StorpTelemetryGetUnitQueueCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RiDeviceQueueOutstandingCount(__int64 a1)
{
  return (*(__int64 *)(a1 + 88) >> 2) & 0x3FFFFFFF;
}
