/*
 * XREFs of KiDetectKvaLeakage @ 0x1405BF650
 * Callers:
 *     KiSetFeatureBits @ 0x140B49BD0 (KiSetFeatureBits.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1405B99C8 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1405BA020 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1405BA060 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsTsaMitigationDesired @ 0x1405BA264 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x1405BA280 (KiIsTsaMitigationSupported.c)
 *     SpcDetectKvaLeakage @ 0x140B53788 (SpcDetectKvaLeakage.c)
 */

__int64 __fastcall KiDetectKvaLeakage(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  KiDetectHardwareSpecControlFeatures(a1, 0LL, (__int64)&v4, 0LL);
  if ( (v4 & 0x8000) != 0 && (unsigned int)KiIsBranchConfusionMitigationDesired(a1, &v4) )
    KiIsBranchConfusionMitigationSupported(v2, &v4);
  v5 = 0LL;
  v4 = 0LL;
  KiDetectHardwareSpecControlFeatures(a1, 0LL, (__int64)&v4, 0LL);
  if ( (v4 & 0x8000000) != 0 && (unsigned int)KiIsTsaMitigationDesired() )
    KiIsTsaMitigationSupported(a1);
  return SpcDetectKvaLeakage(*(unsigned int *)(a1 + 36));
}
