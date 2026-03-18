/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x1405BA9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(struct _KAFFINITY_EX *a1)
{
  a1->Reserved = 0;
  *(_DWORD *)&a1->Count = 1310721;
  memset_0(&a1->8, 0, 0xA0uLL);
  KiCopyAffinityEx(a1, a1->Size, &KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
