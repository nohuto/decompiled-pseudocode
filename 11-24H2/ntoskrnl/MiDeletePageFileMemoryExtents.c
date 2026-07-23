/*
 * XREFs of MiDeletePageFileMemoryExtents @ 0x1407FE938
 * Callers:
 *     MiDeletePagefile @ 0x1407EF4C8 (MiDeletePagefile.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FE5FC (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140398278 (MiFreeContiguousPages.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePageFileMemoryExtents(_QWORD *P)
{
  MiFreeContiguousPages(P[4], (unsigned int)(*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1), 0LL);
  ExFreePoolWithTag(P, 0);
}
