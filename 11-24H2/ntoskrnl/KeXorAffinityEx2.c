/*
 * XREFs of KeXorAffinityEx2 @ 0x140354F38
 * Callers:
 *     PpmParkComputeDiff @ 0x1404EE290 (PpmParkComputeDiff.c)
 *     PpmHeteroDistributeUtilityEx @ 0x1405E07D4 (PpmHeteroDistributeUtilityEx.c)
 *     PpmParkDistributeUtilityEx @ 0x1405E337C (PpmParkDistributeUtilityEx.c)
 * Callees:
 *     ?KiXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140354DE0 (-KiXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiXorAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14035564C (-KiXorAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

unsigned int __fastcall KeXorAffinityEx2(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return KiXorAffinityEx(a1, a2, a3, a3->Size);
  else
    return KiXorAffinityExNoResult(a1, a2);
}
