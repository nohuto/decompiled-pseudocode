/*
 * XREFs of KeComplementAffinityEx @ 0x1405B4280
 * Callers:
 *     <none>
 * Callees:
 *     ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402673B0 (-KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

void __fastcall KeComplementAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  KiComplementAffinityEx(a1, 0x14u, a2);
}
