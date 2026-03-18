/*
 * XREFs of NtGdiGetTextCharsetInfo @ 0x140260790
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BB41C (-GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiGetTextCharsetInfo(HDC a1, void *a2)
{
  void *v2; // rdi
  __int64 SessionState; // rax
  __int64 v5; // r8
  unsigned int TextCharsetInfo; // ebx
  _QWORD v8[10]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v9[56]; // [rsp+70h] [rbp-68h] BYREF
  __int128 Src; // [rsp+A8h] [rbp-30h] BYREF
  __int64 v11; // [rsp+B8h] [rbp-20h]

  v2 = a2;
  v11 = 0LL;
  Src = 0LL;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v9,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v9) )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v8, a1);
    if ( v8[0] )
    {
      TextCharsetInfo = GrepGetTextCharsetInfo(
                          (struct UDCOBJ *)v8,
                          (unsigned __int64)&Src & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64),
                          v5,
                          14);
    }
    else
    {
      EngSetLastError(6u);
      TextCharsetInfo = 1;
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v8);
  }
  else
  {
    EngSetLastError(0x15u);
    TextCharsetInfo = 1;
  }
  if ( TextCharsetInfo != -1 && v2 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v2, &Src, 0x18uLL);
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v9);
  return TextCharsetInfo;
}
