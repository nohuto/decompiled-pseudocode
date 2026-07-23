/*
 * XREFs of KiDetectKvaLeakage @ 0x1405C0D00
 * Callers:
 *     KiSetFeatureBits @ 0x140B5BC74 (KiSetFeatureBits.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1405BAE44 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1405BB49C (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1405BB4DC (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsTsaMitigationDesired @ 0x1405BB6E0 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x1405BB6FC (KiIsTsaMitigationSupported.c)
 *     SpcDetectKvaLeakage @ 0x140B659A8 (SpcDetectKvaLeakage.c)
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
