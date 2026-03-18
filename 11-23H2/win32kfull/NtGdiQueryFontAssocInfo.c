/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x1C008A5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00D1AD8 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C00F9818 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00FB710 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  char v7; // cl
  _DWORD *v8; // rdx
  _QWORD v9[2]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v11[64]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+67h] BYREF
  struct LFONT *v13; // [rsp+B8h] [rbp+6Fh] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( !a1 )
    return *(unsigned int *)(v3 + 18736);
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v6 = SGDGetSessionState(v5);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v11, *(struct Gre::Full::SESSION_GLOBALS **)(v6 + 32));
    LODWORD(v13) = 4;
    HIDWORD(v13) = *(unsigned __int16 *)(v9[0] + 12LL);
    v12 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v12, (struct XDCOBJ *)v9, 0, 2u, (const struct RFONTOBJ::Tag *)&v13) )
      GreAcquireSemaphore(*(_QWORD *)(v12 + 504));
    if ( !v12 )
      goto LABEL_19;
    v7 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 120) + 32LL) + 44LL);
    if ( ((v7 + 0x80) & 0xF6) == 0 && v7 != -119 || v7 == -122 )
    {
      v2 = 2;
LABEL_19:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v11);
      DCOBJ::~DCOBJ((DCOBJ *)v9);
      return v2;
    }
    if ( v7 )
    {
      v8 = (_DWORD *)(v3 + 18736);
      if ( v7 != -1 )
        goto LABEL_14;
      if ( (*(_DWORD *)(v3 + 18736) & 1) == 0 )
        goto LABEL_25;
    }
    else
    {
      v8 = (_DWORD *)(v3 + 18736);
      if ( (*(_DWORD *)(v3 + 18736) & 2) == 0 )
      {
LABEL_14:
        if ( v7 != 2 || (*v8 & 4) == 0 )
          goto LABEL_25;
      }
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v13, *(struct HLFONT__ **)(v9[0] + 1744LL), 0LL);
    if ( v13 )
    {
      if ( (*((_BYTE *)v13 + 301) & 0x40) == 0 )
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v13);
        v2 = 1;
        goto LABEL_19;
      }
      if ( v13 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v13);
    }
LABEL_25:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v11);
    if ( v9[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
    return 0LL;
  }
  EngSetLastError(6u);
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return 0LL;
}
