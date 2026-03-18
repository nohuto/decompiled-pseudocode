/*
 * XREFs of MiAweControlArea @ 0x140440EC0
 * Callers:
 *     MiReferenceAweHandle @ 0x1404D6AD4 (MiReferenceAweHandle.c)
 *     MmGetSectionInformation @ 0x1408B6660 (MmGetSectionInformation.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiDeletePageFileSectionNodes @ 0x140A09798 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x140A7EC78 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAweControlArea(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 64) || (*(_DWORD *)(a1 + 56) & 0x400) != 0 )
    return 0LL;
  else
    return (*(_DWORD *)(a1 + 92) >> 17) & 1;
}
