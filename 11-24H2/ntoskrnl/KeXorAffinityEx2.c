/*
 * XREFs of KeXorAffinityEx2 @ 0x1402B2C68
 * Callers:
 *     PpmParkComputeDiff @ 0x1404E5A28 (PpmParkComputeDiff.c)
 *     PpmHeteroDistributeUtilityEx @ 0x1405DDDF4 (PpmHeteroDistributeUtilityEx.c)
 *     PpmParkDistributeUtilityEx @ 0x1405E0904 (PpmParkDistributeUtilityEx.c)
 * Callees:
 *     ?KiXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2B10 (-KiXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiXorAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x1404C9668 (-KiXorAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

unsigned int __fastcall KeXorAffinityEx2(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return KiXorAffinityEx(a1, a2, a3, a3->Size);
  else
    return KiXorAffinityExNoResult(a1, a2);
}
