/*
 * XREFs of ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1401849F4
 * Callers:
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B0B2C (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bSkipCHSFontSegUISymFallback(RFONTOBJ *this, __int64 a2, struct PFF *a3, struct PFF *a4)
{
  __int16 v6; // bx

  v6 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96) + 14172LL)
    || (unsigned __int16)(v6 + 0x2000) > 0x18FFu
    || (*((_DWORD *)a4 + 13) & 0x4000) == 0 )
  {
    return 0LL;
  }
  else
  {
    return (*((_DWORD *)a3 + 13) >> 15) & 1;
  }
}
