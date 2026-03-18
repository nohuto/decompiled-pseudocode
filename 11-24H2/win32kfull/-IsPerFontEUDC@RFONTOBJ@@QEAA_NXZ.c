/*
 * XREFs of ?IsPerFontEUDC@RFONTOBJ@@QEAA_NXZ @ 0x1401A49CC
 * Callers:
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B0B2C (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 * Callees:
 *     <none>
 */

bool __fastcall RFONTOBJ::IsPerFontEUDC(RFONTOBJ *this)
{
  int v1; // eax

  v1 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 52LL);
  return (v1 & 8) != 0 && (v1 & 2) == 0;
}
