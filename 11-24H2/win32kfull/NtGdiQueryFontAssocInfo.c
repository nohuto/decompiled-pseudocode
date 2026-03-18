/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x14025B490
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DB50 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1400BD5E4 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BEA9C (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v6; // rdx
  int v7; // ecx
  __int64 SessionState; // rax
  char v9; // cl
  _QWORD v10[2]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v11[10]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v12[80]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v13; // [rsp+F0h] [rbp+67h] BYREF
  int v14; // [rsp+F8h] [rbp+6Fh] BYREF
  int v15; // [rsp+FCh] [rbp+73h]

  v3 = 0;
  v4 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  if ( !a1 )
    return *(unsigned int *)(v4 + 18944);
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v11, a1);
  if ( !v11[0] )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v11);
    return 0LL;
  }
  SessionState = W32GetSessionState(v7, v6);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v12,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v12) )
  {
    v14 = 4;
    v15 = *(unsigned __int16 *)(v11[0] + 12LL);
    v13 = 0LL;
    RFONTOBJ::vInit((RFONTOBJ *)&v13, (struct UDCOBJ *)v11, 0, 2u, (const struct RFONTOBJ::Tag *)&v14);
    if ( !v13 )
      goto LABEL_22;
    v9 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 120) + 32LL) + 44LL);
    if ( ((v9 + 0x80) & 0xF6) == 0 && v9 != -119 || v9 == -122 )
    {
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
      v3 = 2;
      goto LABEL_23;
    }
    if ( v9 )
    {
      if ( v9 == -1 )
      {
        if ( (*(_DWORD *)(v4 + 18944) & 1) == 0 )
          goto LABEL_22;
        goto LABEL_15;
      }
    }
    else if ( (*(_DWORD *)(v4 + 18944) & 2) != 0 )
    {
LABEL_15:
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)v10, *(struct HLFONT__ **)(v11[0] + 1744LL), 0LL);
      if ( v10[0] && (*(_BYTE *)(v10[0] + 277LL) & 0x40) == 0 )
      {
        LFONTOBJ::~LFONTOBJ((LFONTOBJ *)v10);
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
        v3 = 1;
        goto LABEL_23;
      }
      LFONTOBJ::~LFONTOBJ((LFONTOBJ *)v10);
LABEL_22:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
      goto LABEL_23;
    }
    if ( v9 != 2 || (*(_DWORD *)(v4 + 18944) & 4) == 0 )
      goto LABEL_22;
    goto LABEL_15;
  }
LABEL_23:
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v12);
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v3;
}
