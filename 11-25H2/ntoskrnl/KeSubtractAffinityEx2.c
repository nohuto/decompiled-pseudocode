/*
 * XREFs of KeSubtractAffinityEx2 @ 0x140269E70
 * Callers:
 *     KiStopProfileTarget @ 0x140269F30 (KiStopProfileTarget.c)
 *     KiStartProfileTarget @ 0x14049A3B0 (KiStartProfileTarget.c)
 *     HalpRemoveProfileSourceFromList @ 0x140543798 (HalpRemoveProfileSourceFromList.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BB870 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1403ADE18 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x1404D37C8 (-KiSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
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
