/*
 * XREFs of RtlWriteReleaseTickLock @ 0x1404555D0
 * Callers:
 *     KiAddCpuToSystemCpuPartition @ 0x140B47CE0 (KiAddCpuToSystemCpuPartition.c)
 *     KiCreateCpuSetForProcessor @ 0x140B47D90 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x140B5BAB0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWriteReleaseTickLock(__int64 *a1)
{
  __int64 result; // rax

  result = *a1 + 1;
  *a1 = result;
  return result;
}
