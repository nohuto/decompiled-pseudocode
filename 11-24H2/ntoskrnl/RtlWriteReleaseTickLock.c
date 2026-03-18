/*
 * XREFs of RtlWriteReleaseTickLock @ 0x140455770
 * Callers:
 *     KiAddCpuToSystemCpuPartition @ 0x140B57C80 (KiAddCpuToSystemCpuPartition.c)
 *     KiCreateCpuSetForProcessor @ 0x140B57D30 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x140B6B5B0 (KiCalibrateTimeAdjustment.c)
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
