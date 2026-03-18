/*
 * XREFs of MiAweControlArea @ 0x140440AA0
 * Callers:
 *     MiReferenceAweHandle @ 0x1404D61C4 (MiReferenceAweHandle.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MmGetSectionInformation @ 0x14093C550 (MmGetSectionInformation.c)
 *     MiDeletePageFileSectionNodes @ 0x140A13384 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x140A822F8 (MiDereferenceFailedControlArea.c)
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
