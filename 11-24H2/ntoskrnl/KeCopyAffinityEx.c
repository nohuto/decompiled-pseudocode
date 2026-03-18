/*
 * XREFs of KeCopyAffinityEx @ 0x1405B8190
 * Callers:
 *     <none>
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

void __fastcall KeCopyAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  KiCopyAffinityEx(a1, 0x14u, a2);
}
