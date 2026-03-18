/*
 * XREFs of NtGdiGetCharWidthInfo @ 0x14025F910
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetCharWidthInfo@@YAHAEAVUDCOBJ@@PEAU_CHWIDTHINFO@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401DEEC8 (-GrepGetCharWidthInfo@@YAHAEAVUDCOBJ@@PEAU_CHWIDTHINFO@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiGetCharWidthInfo(HDC a1, unsigned __int64 a2)
{
  int v4; // esi
  __int64 SessionState; // rax
  unsigned int CharWidthInfo; // ebx
  __int64 v8; // [rsp+20h] [rbp-A8h] BYREF
  int v9; // [rsp+28h] [rbp-A0h]
  _QWORD v10[10]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v11[64]; // [rsp+80h] [rbp-48h] BYREF

  v4 = 0;
  v8 = 0LL;
  v9 = 0;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v11,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v11) )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v10, a1);
    if ( v10[0] )
    {
      CharWidthInfo = GrepGetCharWidthInfo((struct UDCOBJ *)v10, (int *)&v8);
      v4 = v9;
    }
    else
    {
      CharWidthInfo = 0;
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v10);
  }
  else
  {
    CharWidthInfo = 0;
  }
  if ( CharWidthInfo )
  {
    if ( a2 + 12 > MmUserProbeAddress || a2 + 12 <= a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_QWORD *)a2 = v8;
    *(_DWORD *)(a2 + 8) = v4;
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v11);
  return CharWidthInfo;
}
