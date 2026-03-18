/*
 * XREFs of ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BEDA0
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x140260450 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x14005CB24 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x14005D9E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x14005EF9C (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z @ 0x140060290 (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400606A0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     cjIFIMetricsToOTMW @ 0x1400BD614 (cjIFIMetricsToOTMW.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BEA9C (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1400BF0E4 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x14020EEF8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GrepGetOutlineTextMetrics(struct UDCOBJ *a1, unsigned int a2, char *a3, _BYTE *a4)
{
  unsigned int v4; // edi
  size_t v5; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v12; // rbx
  struct _IFIMETRICS *v13; // rcx
  unsigned int v14; // eax
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 SessionState; // rax
  struct LFONT *v23; // rbx
  unsigned int v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-C0h] BYREF
  HDEV v27; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  struct LFONT *v30; // [rsp+60h] [rbp-A0h]
  struct _POINTL v31; // [rsp+68h] [rbp-98h] BYREF
  HSEMAPHORE v32[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v33[96]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int Src[60]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0;
  v5 = a2;
  v9 = 0;
  if ( !a2 && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v10 = *(_QWORD *)a1;
  v28[0] = 5;
  v28[1] = *(unsigned __int16 *)(v10 + 12);
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 976) + 152LL) & 0x10) != 0 )
  {
    v26 = 0;
    v31 = 0LL;
    v24 = 0;
    v27 = *(HDEV *)(v10 + 48);
    if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v27) )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v27);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v29, *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL), v27);
    if ( !v29 || UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v17, v16, v18) < 0 )
    {
      if ( v30 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v30);
      return 0LL;
    }
    SessionState = W32GetSessionState(v20, v19, v21);
    SEMOBJ<17>::SEMOBJ<17>(v32, *(_QWORD *)(SessionState + 96) + 4872LL);
    memset_0(v33, 0, sizeof(v33));
    v23 = v30;
    BuildMapperParameters((struct MAPPER::PARAMETERS *)v33, a1, (*((_DWORD *)v30 + 7) & 2) != 0, 0);
    if ( LFONTCOREOBJ::ppfeMapFont((LFONTCOREOBJ *)&v29, (struct MAPPER::PARAMETERS *)v33, &v26, &v31, &v24) )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL) = v24 >> 8;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x10u;
    }
    SEMOBJ<17>::vUnlock(v32);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v23);
  }
  v25 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v25, a1, 0LL, 2u, (const struct RFONTOBJ::Tag *)v28) )
    GreAcquireSemaphore<5,RFONT *>(v25);
  if ( !v25 || (v12 = *(_QWORD *)(v25 + 120)) == 0 )
  {
    EngSetLastError(6u);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
    return 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v25 + 96) + 3072LL) )
  {
    v13 = *(struct _IFIMETRICS **)(v12 + 32);
    v24 = 0;
    *(_DWORD *)a4 = cjOTMAWSize(v13, &v24);
    if ( a3 )
    {
      if ( (unsigned int)v5 <= 0xE8 )
      {
        memset_0(Src, 0, 0xE8uLL);
        if ( (unsigned int)cjIFIMetricsToOTMW(
                             a4,
                             Src,
                             (struct RFONTOBJ *)&v25,
                             a1,
                             *(struct _IFIMETRICS **)(v12 + 32),
                             0) )
        {
          memmove(a3, Src, v5);
          v4 = v5;
        }
        goto LABEL_18;
      }
      if ( (unsigned int)v5 >= v24 )
      {
        v14 = cjIFIMetricsToOTMW(
                a4,
                (unsigned int *)a3,
                (struct RFONTOBJ *)&v25,
                a1,
                *(struct _IFIMETRICS **)(v12 + 32),
                1);
        v15 = v5 - v14;
        v9 = v14;
        if ( v15 > 0 )
          memset_0(&a3[v14], 0, v15);
      }
    }
    else
    {
      v9 = v24;
    }
  }
  v4 = v9;
LABEL_18:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
  return v4;
}
