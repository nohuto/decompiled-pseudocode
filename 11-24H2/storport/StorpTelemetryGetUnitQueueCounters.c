/*
 * XREFs of StorpTelemetryGetUnitQueueCounters @ 0x1400220A0
 * Callers:
 *     <none>
 * Callees:
 *     RiDeviceQueueQueuedCount @ 0x140022848 (RiDeviceQueueQueuedCount.c)
 *     RiDeviceQueueOutstandingCount @ 0x1400229FC (RiDeviceQueueOutstandingCount.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void __fastcall StorpTelemetryGetUnitQueueCounters(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( a3 >= 8 )
  {
    memset_0(a2, 0, a3);
    *a2 = RiDeviceQueueOutstandingCount(a1 + 720, v5, v6);
    a2[1] = RiDeviceQueueQueuedCount(v8, v7, v9, v10);
  }
}
