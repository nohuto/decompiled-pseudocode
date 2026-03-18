/*
 * XREFs of MiDeletePageFileMemoryExtents @ 0x1407FE1C8
 * Callers:
 *     MiDeletePagefile @ 0x1407EEEF8 (MiDeletePagefile.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FDE8C (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x1403A95E8 (MiFreeContiguousPages.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePageFileMemoryExtents(_QWORD *P)
{
  MiFreeContiguousPages(P[4], (unsigned int)(*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1), 0);
  ExFreePoolWithTag(P, 0);
}
