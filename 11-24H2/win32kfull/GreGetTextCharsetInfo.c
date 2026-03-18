/*
 * XREFs of GreGetTextCharsetInfo @ 0x140303DBC
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x14007DB7C (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BB41C (-GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall GreGetTextCharsetInfo(HDC a1, __int64 a2)
{
  __int64 SessionState; // rax
  __int64 v5; // r8
  unsigned int TextCharsetInfo; // ebx
  _BYTE v7[64]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v8[11]; // [rsp+60h] [rbp-58h] BYREF

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v7,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v7) )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v8, a1);
    if ( v8[0] )
    {
      TextCharsetInfo = GrepGetTextCharsetInfo((struct UDCOBJ *)v8, 0LL, v5, 1026);
    }
    else
    {
      EngSetLastError(6u);
      TextCharsetInfo = 1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v8);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v7);
    return TextCharsetInfo;
  }
  else
  {
    EngSetLastError(0x15u);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v7);
    return 1LL;
  }
}
