/*
 * XREFs of FONTOBJ_cGetAllGlyphHandles @ 0x140308A90
 * Callers:
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x14033A670 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z @ 0x1401F8C78 (-chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetAllGlyphHandles(FONTOBJ *pfo, HGLYPH *phg)
{
  ULONG AllHandles; // eax
  ULONG v3; // ebx
  FONTOBJ *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = pfo;
  AllHandles = RFONTOBJ::chglyGetAllHandles((RFONTOBJ *)&v5, phg);
  v5 = 0LL;
  v3 = AllHandles;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  return v3;
}
