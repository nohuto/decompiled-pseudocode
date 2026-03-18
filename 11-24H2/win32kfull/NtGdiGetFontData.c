/*
 * XREFs of NtGdiGetFontData @ 0x14025FC90
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ?GrepGetFontData@@YAKAEAVUDCOBJ@@KKPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B2754 (-GrepGetFontData@@YAKAEAVUDCOBJ@@KKPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiGetFontData(HDC a1, __int64 a2, unsigned int a3, void *a4, unsigned int a5)
{
  unsigned int v7; // r13d
  void *v9; // rdi
  unsigned int FontData; // ebx
  __int64 SessionState; // rax
  EUDCCountRegion *v12; // rcx
  __int64 v13; // rax
  ULONG64 v14; // rax
  _QWORD v16[10]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v17[10]; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v18[64]; // [rsp+E0h] [rbp-58h] BYREF

  v7 = a2;
  v9 = 0LL;
  FontData = -1;
  if ( !a5 )
  {
    SessionState = W32GetSessionState((_DWORD)a1, a2);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v18,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v18) )
    {
      UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v16, a1);
      if ( v16[0] )
      {
        FontData = GrepGetFontData((struct UDCOBJ *)v16, v7, a3, 0LL, 0);
      }
      else
      {
        EngSetLastError(6u);
        FontData = -1;
      }
      UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v16);
    }
    else
    {
      EngSetLastError(0x15u);
      FontData = -1;
    }
    v12 = (EUDCCountRegion *)v18;
LABEL_27:
    EUDCCountRegion::~EUDCCountRegion(v12);
    return FontData;
  }
  if ( a5 <= 0x2710000 )
    v9 = (void *)AllocFreeTmpBuffer(a5);
  if ( v9 )
  {
    v13 = W32GetSessionState((_DWORD)a1, a2);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v16,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(v13 + 96) + 4872LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v16) )
    {
      UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v17, a1);
      if ( v17[0] )
      {
        FontData = GrepGetFontData((struct UDCOBJ *)v17, v7, a3, v9, a5);
      }
      else
      {
        EngSetLastError(6u);
        FontData = -1;
      }
      UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v17);
    }
    else
    {
      EngSetLastError(0x15u);
      FontData = -1;
    }
    if ( FontData != -1 )
    {
      if ( FontData > a5 )
        FontData = -1;
      if ( FontData != -1 )
      {
        v14 = (ULONG64)a4 + FontData;
        if ( v14 > MmUserProbeAddress || v14 <= (unsigned __int64)a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a4, v9, FontData);
      }
    }
    FreeTmpBuffer(v9);
    v12 = (EUDCCountRegion *)v16;
    goto LABEL_27;
  }
  return FontData;
}
