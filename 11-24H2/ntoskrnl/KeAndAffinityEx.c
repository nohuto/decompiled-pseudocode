/*
 * XREFs of KeAndAffinityEx @ 0x1404F7ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14032C800 (-KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14032DF20 (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

__int64 __fastcall KeAndAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return KiAndAffinityEx(a1, a2, a3, 0x14u);
  else
    return KiAndAffinityExNoResult(a1, a2);
}
