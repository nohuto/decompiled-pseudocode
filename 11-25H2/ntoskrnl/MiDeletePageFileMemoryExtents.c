/*
 * XREFs of MiDeletePageFileMemoryExtents @ 0x1407EE338
 * Callers:
 *     MiDeletePagefile @ 0x1407DF058 (MiDeletePagefile.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407EDFFC (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x14038B910 (MiFreeContiguousPages.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePageFileMemoryExtents(_QWORD *P)
{
  MiFreeContiguousPages(P[4], (unsigned int)(*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1), 0);
  ExFreePoolWithTag(P, 0);
}
