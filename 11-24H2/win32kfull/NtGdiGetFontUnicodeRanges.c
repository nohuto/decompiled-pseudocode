/*
 * XREFs of NtGdiGetFontUnicodeRanges @ 0x14025FEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401BD138 (-GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiGetFontUnicodeRanges(HDC a1, char *a2)
{
  __int64 SessionState; // rax
  unsigned int FontUnicodeRanges; // ebx
  int *v6; // rax
  int *v7; // rdi
  int v8; // eax
  char *v9; // rax
  _QWORD v11[10]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v12[64]; // [rsp+70h] [rbp-48h] BYREF

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v12,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v12) )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v11, a1);
    if ( v11[0] )
      FontUnicodeRanges = GrepGetFontUnicodeRanges((struct UDCOBJ *)v11, 0LL);
    else
      FontUnicodeRanges = 0;
    if ( FontUnicodeRanges && a2 )
    {
      v6 = (int *)AllocFreeTmpBuffer(FontUnicodeRanges);
      v7 = v6;
      if ( v6 )
      {
        *v6 = FontUnicodeRanges;
        v8 = GrepGetFontUnicodeRanges((struct UDCOBJ *)v11, v6);
        if ( v8 && FontUnicodeRanges == v8 )
        {
          v9 = &a2[FontUnicodeRanges];
          if ( (unsigned __int64)v9 > MmUserProbeAddress || v9 <= a2 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(a2, v7, FontUnicodeRanges);
        }
        else
        {
          FontUnicodeRanges = 0;
        }
        FreeTmpBuffer(v7);
      }
      else
      {
        FontUnicodeRanges = 0;
      }
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v11);
  }
  else
  {
    FontUnicodeRanges = 0;
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v12);
  return FontUnicodeRanges;
}
