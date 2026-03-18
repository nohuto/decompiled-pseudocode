/*
 * XREFs of GreGetTextMetricsW @ 0x14007CF54
 * Callers:
 *     _GetTextMetricsW @ 0x14007CEE4 (_GetTextMetricsW.c)
 * Callees:
 *     ?GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x14005CC5C (-GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall GreGetTextMetricsW(HDC a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  unsigned int TextMetricsW; // ebx
  _BYTE v8[64]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v9[10]; // [rsp+60h] [rbp-58h] BYREF

  SessionState = W32GetSessionState(a1, a2, a3);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v8,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  TextMetricsW = 0;
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v8) )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v9, a1);
    if ( v9[0] )
      TextMetricsW = GrepGetTextMetricsW((struct UDCOBJ *)v9, a2, 1027);
    DCOBJ::~DCOBJ((DCOBJ *)v9);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v8);
    return TextMetricsW;
  }
  else
  {
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v8);
    return 0LL;
  }
}
