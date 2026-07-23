/*
 * XREFs of KeSubtractAffinityEx @ 0x1405B57C0
 * Callers:
 *     <none>
 * Callees:
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x1404C91EC (-KiSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

__int64 __fastcall KeSubtractAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return KiSubtractAffinityEx(a1, a2, a3, 0x14u);
  else
    return KiSubtractAffinityExNoResult(a1, a2);
}
