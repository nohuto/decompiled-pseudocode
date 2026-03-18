/*
 * XREFs of KeComplementAffinityEx2 @ 0x140205160
 * Callers:
 *     <none>
 * Callees:
 *     ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140205180 (-KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

void __fastcall KeComplementAffinityEx2(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  KiComplementAffinityEx(a1, a1->Size, a2);
}
