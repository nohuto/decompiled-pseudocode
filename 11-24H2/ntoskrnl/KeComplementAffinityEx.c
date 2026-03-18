/*
 * XREFs of KeComplementAffinityEx @ 0x1405B8170
 * Callers:
 *     <none>
 * Callees:
 *     ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140205180 (-KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

void __fastcall KeComplementAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  KiComplementAffinityEx(a1, 0x14u, a2);
}
