/*
 * XREFs of KeOrAffinityEx @ 0x1405B5790
 * Callers:
 *     <none>
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x1404C65EC (-KiOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

__int64 __fastcall KeOrAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return KiOrAffinityEx(a1, a2, a3, 0x14u);
  else
    return KiOrAffinityExNoResult(a1, a2);
}
