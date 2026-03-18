/*
 * XREFs of CalculateTimeDurationIn100ns @ 0x14000C8D0
 * Callers:
 *     IoQueuesCreation @ 0x140007860 (IoQueuesCreation.c)
 *     NVMeMapError @ 0x1400097F0 (NVMeMapError.c)
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     RecordCommandTimingHistory @ 0x140016DB0 (RecordCommandTimingHistory.c)
 *     IoQueuesCreationAsync @ 0x14001A314 (IoQueuesCreationAsync.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CalculateTimeDurationIn100ns(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a2 )
    return 10000 * (1000 * (a1 % a2) / a2 + 1000 * (a1 / a2)) + 10000 * (1000 * (a1 % a2) % a2) / a2;
  else
    return 0LL;
}
