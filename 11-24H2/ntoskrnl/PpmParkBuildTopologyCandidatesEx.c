/*
 * XREFs of PpmParkBuildTopologyCandidatesEx @ 0x1405E1B44
 * Callers:
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 * Callees:
 *     KeAndAffinityEx2 @ 0x1402052E0 (KeAndAffinityEx2.c)
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140206940 (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

unsigned int __fastcall PpmParkBuildTopologyCandidatesEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3)
{
  if ( !(unsigned int)KiAndAffinityExNoResult(a1, a2) )
    KiCopyAffinityEx(a1, a1->Size, a3);
  return KeAndAffinityEx2(a1, a2, (__int64)a1);
}
