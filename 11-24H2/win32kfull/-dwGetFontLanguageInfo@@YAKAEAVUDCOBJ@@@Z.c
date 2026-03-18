/*
 * XREFs of ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BFB58
 * Callers:
 *     NtGdiGetDCDword @ 0x14001A2D0 (NtGdiGetDCDword.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x14005D9E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x14005EF9C (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z @ 0x140060290 (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400606A0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BEA9C (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x14020EEF8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall dwGetFontLanguageInfo(struct UDCOBJ *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 SessionState; // rax
  struct PFE *v11; // rax
  __int64 v12; // rcx
  unsigned int v14; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-45h] BYREF
  HDEV v16; // [rsp+40h] [rbp-41h] BYREF
  struct _POINTL v17; // [rsp+48h] [rbp-39h] BYREF
  HSEMAPHORE v18; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v19[2]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v20[96]; // [rsp+68h] [rbp-19h] BYREF

  v2 = 0x8000;
  v16 = *(HDEV *)(*(_QWORD *)a1 + 48LL);
  if ( v16 )
  {
    if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v16) )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v16);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)v19, *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL), v16);
    v6 = v19[1];
    if ( v19[0] && UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v4, v3, v5) >= 0 )
    {
      SessionState = W32GetSessionState(v8, v7, v9);
      SEMOBJ<17>::SEMOBJ<17>(&v18, *(_QWORD *)(SessionState + 96) + 4872LL);
      v15 = 0;
      v14 = 0;
      v17 = 0LL;
      memset_0(v20, 0, sizeof(v20));
      BuildMapperParameters((struct MAPPER::PARAMETERS *)v20, a1, (*(_DWORD *)(v6 + 28) & 2) != 0, 0);
      v11 = LFONTCOREOBJ::ppfeMapFont((LFONTCOREOBJ *)v19, (struct MAPPER::PARAMETERS *)v20, &v15, &v17, &v14);
      if ( v11 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL) = v14 >> 8;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x10u;
        v12 = *((_QWORD *)v11 + 4);
        v2 = *(_DWORD *)(v12 + 164) != 0 ? 8 : 0;
        if ( (*(_DWORD *)(v12 + 48) & 0x80000001) != 0 )
          v2 |= 0x40000u;
      }
      SEMOBJ<17>::vUnlock(&v18);
    }
    if ( v6 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v6);
  }
  return v2;
}
