/*
 * XREFs of NtGdiFontIsLinked @ 0x14025F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401D9C14 (-GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiFontIsLinked(HDC a1, __int64 a2)
{
  __int64 SessionState; // rax
  unsigned int IsLinked; // ebx
  _BYTE v6[64]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v7[11]; // [rsp+60h] [rbp-58h] BYREF

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v6,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  IsLinked = 0;
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v6) )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v7, a1);
    if ( v7[0] )
      IsLinked = GrepFontIsLinked((struct UDCOBJ *)v7);
    DCOBJ::~DCOBJ((DCOBJ *)v7);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v6);
    return IsLinked;
  }
  else
  {
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v6);
    return 0LL;
  }
}
