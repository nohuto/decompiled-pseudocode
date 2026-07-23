/*
 * XREFs of KeSubtractAffinityEx2 @ 0x1402B2C40
 * Callers:
 *     KiStopProfileTarget @ 0x1403A55C0 (KiStopProfileTarget.c)
 *     KiStartProfileTarget @ 0x140494D80 (KiStartProfileTarget.c)
 *     HalpRemoveProfileSourceFromList @ 0x140543948 (HalpRemoveProfileSourceFromList.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 * Callees:
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x1404C91EC (-KiSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
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
