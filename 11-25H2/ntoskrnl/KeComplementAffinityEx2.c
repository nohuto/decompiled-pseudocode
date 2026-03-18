/*
 * XREFs of KeComplementAffinityEx2 @ 0x140267390
 * Callers:
 *     <none>
 * Callees:
 *     ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402673B0 (-KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

void __fastcall KeComplementAffinityEx2(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  KiComplementAffinityEx(a1, a1->Size, a2);
}
