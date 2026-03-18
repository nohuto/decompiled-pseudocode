/*
 * XREFs of KeAndAffinityEx2 @ 0x140267450
 * Callers:
 *     KiUpdateProcessAvailableCpuState @ 0x140267998 (KiUpdateProcessAvailableCpuState.c)
 *     NtStartProfile @ 0x1407B2640 (NtStartProfile.c)
 * Callees:
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14026704C (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140267478 (-KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 */

unsigned int __fastcall KeAndAffinityEx2(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return KiAndAffinityEx(a1, a2, a3, a3->Size);
  else
    return KiAndAffinityExNoResult(a1, a2);
}
