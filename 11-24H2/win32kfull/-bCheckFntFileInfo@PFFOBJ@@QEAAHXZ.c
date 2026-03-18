/*
 * XREFs of ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1400B2C5C
 * Callers:
 *     ?ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1400B2790 (-ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1400B29FC (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1400C2054 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1400FFA30 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFFOBJ::bCheckFntFileInfo(PFFOBJ *this)
{
  __int64 v1; // rdx
  int v3; // eax
  __int64 i; // rdi
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 52LL);
  if ( (v3 & 0x2000) != 0 )
    return 0LL;
  if ( (v3 & 0x1000) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v1 + 36); i = (unsigned int)(i + 1) )
    {
      v8 = 0LL;
      v7 = 0LL;
      Win32FileInfo(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 208) + 8 * i) + 80LL), &v7, &v8);
      v1 = *(_QWORD *)this;
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 208LL) + 8 * i);
      if ( *(_QWORD *)v6 != v7 || *(_DWORD *)(v6 + 24) != (_DWORD)v8 )
      {
        *(_DWORD *)(v1 + 52) |= 0x2000u;
        return 0LL;
      }
    }
    *(_DWORD *)(v1 + 52) &= ~0x1000u;
  }
  return 1LL;
}
