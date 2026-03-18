/*
 * XREFs of KeSubtractAffinityEx2 @ 0x140354F10
 * Callers:
 *     KiStopProfileTarget @ 0x1403C8500 (KiStopProfileTarget.c)
 *     KiStartProfileTarget @ 0x14049A320 (KiStartProfileTarget.c)
 *     HalpRemoveProfileSourceFromList @ 0x140546088 (HalpRemoveProfileSourceFromList.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BF6B0 (KeCpuPartitionMoveCpus.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 * Callees:
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140354CF8 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x1403556E0 (-KiSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

unsigned int __fastcall KeSubtractAffinityEx2(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return KiSubtractAffinityEx(a1, a2, a3, a3->Size);
  else
    return KiSubtractAffinityExNoResult(a1, a2);
}
