/*
 * XREFs of NtGdiGetTextMetricsW @ 0x140260F20
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x14005CC5C (-GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtGdiGetTextMetricsW(HDC a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int TextMetricsW; // edi
  __int64 v6; // rdx
  int v7; // ecx
  __int64 SessionState; // rax
  _OWORD v10[4]; // [rsp+20h] [rbp-E8h] BYREF
  int v11; // [rsp+60h] [rbp-A8h]
  _QWORD v12[10]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v13[64]; // [rsp+C0h] [rbp-48h] BYREF

  TextMetricsW = 0;
  if ( a3 >= 0x44 )
  {
    memset_0(v10, 0, 0x44uLL);
    SessionState = W32GetSessionState(v7, v6);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v13,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v13) )
    {
      UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v12, a1);
      if ( v12[0] )
        TextMetricsW = GrepGetTextMetricsW((struct UDCOBJ *)v12, (__int64)v10, 20);
      UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v12);
    }
    if ( TextMetricsW )
    {
      if ( a2 + 68 > MmUserProbeAddress || a2 + 68 <= a2 || (a2 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a2 = v10[0];
      *(_OWORD *)(a2 + 16) = v10[1];
      *(_OWORD *)(a2 + 32) = v10[2];
      *(_OWORD *)(a2 + 48) = v10[3];
      *(_DWORD *)(a2 + 64) = v11;
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v13);
  }
  return TextMetricsW;
}
