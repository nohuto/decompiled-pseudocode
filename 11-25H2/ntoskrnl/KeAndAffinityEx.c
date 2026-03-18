/*
 * XREFs of KeAndAffinityEx @ 0x1404F8120
 * Callers:
 *     <none>
 * Callees:
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14026704C (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140267478 (-KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 */

__int64 __fastcall KeAndAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return KiAndAffinityEx(a1, a2, a3, 0x14u);
  else
    return KiAndAffinityExNoResult(a1, a2);
}
