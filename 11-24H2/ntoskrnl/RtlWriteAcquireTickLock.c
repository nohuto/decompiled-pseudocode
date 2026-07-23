/*
 * XREFs of RtlWriteAcquireTickLock @ 0x1402ABFD4
 * Callers:
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x1402AD69C (KiUpdateTimeAssist.c)
 *     KiUpdateProcessAvailableCpuState @ 0x14032B848 (KiUpdateProcessAvailableCpuState.c)
 *     KiUpdateSystemTime @ 0x1404A2140 (KiUpdateSystemTime.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405B5C94 (KiUpdateSystemAvailableCpuState.c)
 *     KeSetTagCpuSets @ 0x1405BD41C (KeSetTagCpuSets.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140B59D00 (KiAddCpuToSystemCpuPartition.c)
 *     KiCreateCpuSetForProcessor @ 0x140B59DB0 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x140B6BCD0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWriteAcquireTickLock(signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 1) != 0 )
  {
    result = *a1;
LABEL_6:
    _mm_pause();
  }
  v2 = result;
  result = _InterlockedCompareExchange64(a1, result + 1, result);
  if ( v2 != result )
    goto LABEL_6;
  return result;
}
