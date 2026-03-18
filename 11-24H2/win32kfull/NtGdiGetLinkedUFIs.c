/*
 * XREFs of NtGdiGetLinkedUFIs @ 0x14025CFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DB50 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1401865C0 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiGetLinkedUFIs(HDC a1, void *a2, int a3)
{
  __int64 v3; // r14
  int v6; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // rsi
  bool v8; // zf
  __int64 v9; // rdx
  int v10; // ecx
  __int64 SessionState; // rax
  int v12; // ecx
  _DWORD v14[2]; // [rsp+30h] [rbp-B8h] BYREF
  struct _UNIVERSAL_FONT_ID *v15; // [rsp+38h] [rbp-B0h]
  _QWORD v16[10]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v17[64]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v18; // [rsp+108h] [rbp+20h] BYREF

  v3 = a3;
  v6 = 0;
  v7 = 0LL;
  v15 = 0LL;
  v8 = a3 == 0;
  if ( a3 > 0 )
  {
    if ( a2 )
    {
      if ( (unsigned int)a3 <= 0x4E2000 )
      {
        v7 = (struct _UNIVERSAL_FONT_ID *)PALLOCNOZ(8 * a3, 1684629063LL);
        v15 = v7;
      }
      v6 = (v7 != 0LL) - 1;
      goto LABEL_6;
    }
    v8 = a3 == 0;
  }
  if ( !v8 && !a2 )
  {
    v6 = -1;
    goto LABEL_29;
  }
  if ( a3 < 0 && a2 )
    v6 = -1;
LABEL_6:
  if ( v6 != -1 )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v16, a1);
    if ( v16[0] )
    {
      SessionState = W32GetSessionState(v10, v9);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v17,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
      if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v17) )
      {
        v12 = *(unsigned __int16 *)(v16[0] + 12LL);
        v14[0] = 3;
        v14[1] = v12;
        v18 = 0LL;
        RFONTOBJ::vInit((RFONTOBJ *)&v18, (struct UDCOBJ *)v16, 0, 2u, (const struct RFONTOBJ::Tag *)v14);
        v6 = v18 ? RFONTOBJ::GetLinkedFontUFIs((RFONTOBJ *)&v18, (struct UDCOBJ *)v16, v7, v3) : -1;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
      }
      else
      {
        v6 = -1;
      }
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v17);
    }
    else
    {
      v6 = -1;
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v16);
    if ( v6 > 0 )
    {
      if ( a2 )
      {
        ProbeForWrite(a2, 8 * v3, 4u);
        if ( v6 < (int)v3 )
          LODWORD(v3) = v6;
        memmove(a2, v7, 8LL * (int)v3);
      }
    }
  }
LABEL_29:
  if ( v7 )
    Win32FreePool(v7);
  if ( v6 == -1 )
    EngSetLastError(8u);
  return (unsigned int)v6;
}
