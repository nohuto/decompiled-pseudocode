/*
 * XREFs of ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ?GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x14005CC5C (-GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DB50 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetTextExtentExW@@YAHAEAVUDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1400ACFE4 (-GrepGetTextExtentExW@@YAHAEAVUDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B04DC (-GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B0B2C (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 *     ?ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1400B2790 (-ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BEDA0 (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ?GrepGetRealizationInfo@@YA?AV?$ReturnValueTracer@H@@AEAVUDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140165A6C (-GrepGetRealizationInfo@@YA-AV-$ReturnValueTracer@H@@AEAVUDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@.c)
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14005C3CC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14005D0AC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??$GrepReleaseLockValidate@$0BB@@@YAXXZ @ 0x14005D23C (--$GrepReleaseLockValidate@$0BB@@@YAXXZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x14005D2E8 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14005D30C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x14005D5B0 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?vDelayedReclaim@RFONTOBJ@@QEAAXXZ @ 0x14005EB7C (-vDelayedReclaim@RFONTOBJ@@QEAAXXZ.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14005EDEC (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x14005EF9C (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z @ 0x140060290 (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400606A0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     EngUnmapFontFileFD @ 0x1400B3DE0 (EngUnmapFontFileFD.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1400BC0A0 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@QEAU_POINTL@@@Z @ 0x1400BCE0C (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1400BD5E4 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z @ 0x1400D90D0 (-GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400EABCC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401136F0 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140113BD8 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GrepReleasePublicPFTSemaphoreEx @ 0x14015CA30 (GrepReleasePublicPFTSemaphoreEx.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x14020EEF8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ @ 0x14021E520 (-TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x140228D98 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14025A468 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1402680F0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall RFONTOBJ::bInit(
        RFONTOBJ *this,
        struct UDCOBJ *a2,
        __int64 a3,
        unsigned int a4,
        const struct RFONTOBJ::Tag *a5)
{
  __int64 v8; // rbx
  struct _KEVENT *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  HDEV HDEV; // r15
  __int64 v17; // rax
  char *v18; // rbx
  bool v19; // zf
  struct LFONT *v20; // rdi
  int v21; // r12d
  BOOL v22; // r9d
  _DWORD *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rcx
  unsigned int v28; // r15d
  struct _KTHREAD *v29; // rdi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  char v33; // cl
  struct LFONT *v34; // r13
  unsigned int v35; // edi
  void **v36; // rax
  struct PFE *v37; // r12
  void *v38; // rcx
  int v39; // eax
  char *v40; // rdi
  __int64 v41; // rcx
  struct tagLOGFONTW *v42; // rbx
  __int64 eYX_low; // r8
  __int64 eYY_low; // rcx
  __int64 v46; // r15
  HSEMAPHORE v47; // rbx
  int v48; // ebx
  unsigned int v49; // ebx
  __int64 v50; // rdx
  __int64 v51; // r8
  struct LFONT *v52; // rcx
  unsigned int v54; // ebx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r13
  int v58; // r15d
  int v59; // eax
  int v60; // eax
  __int64 v61; // r8
  __int64 v62; // rbx
  LONG StateEvent; // r15d
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  _BOOL8 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 SessionState; // rax
  size_t v71; // rbx
  unsigned int v72; // eax
  struct tagLOGFONTW *v73; // rax
  struct tagLOGFONTW *v74; // rdi
  __int64 v75; // rbx
  int NtoD_Win31; // eax
  int v77; // r8d
  int v78; // edx
  __int64 v79; // rdi
  __int64 v80; // r15
  __int64 v81; // rbx
  struct _GRETHREAD *CurrentThread; // rax
  _BOOL8 v83; // r8
  unsigned int v84; // eax
  int v85; // r12d
  __int64 v86; // rdx
  int v87; // r12d
  int v88; // r12d
  __int64 v89; // rcx
  unsigned int v90; // eax
  unsigned int v91; // ebx
  unsigned int v92; // r13d
  unsigned int j; // eax
  __int64 v94; // rbx
  __int64 v95; // rdx
  int v96; // r8d
  unsigned __int64 i; // rcx
  int v98; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  bool v102; // al
  unsigned int v103; // r10d
  __int64 v104; // r9
  __int64 v105; // r8
  bool v106; // [rsp+60h] [rbp-A0h]
  unsigned int v107; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v108; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v109; // [rsp+6Ch] [rbp-94h]
  unsigned int v110; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v111; // [rsp+74h] [rbp-8Ch]
  struct _POINTL v112; // [rsp+78h] [rbp-88h] BYREF
  HDEV v113; // [rsp+80h] [rbp-80h] BYREF
  int v114; // [rsp+88h] [rbp-78h] BYREF
  int v115; // [rsp+90h] [rbp-70h] BYREF
  char *v116; // [rsp+98h] [rbp-68h] BYREF
  struct LFONT *v117; // [rsp+A0h] [rbp-60h]
  __int64 v118; // [rsp+A8h] [rbp-58h] BYREF
  HSEMAPHORE v119; // [rsp+B0h] [rbp-50h] BYREF
  void *Src; // [rsp+B8h] [rbp-48h]
  __int64 v121; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v122; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v123[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v124[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v125; // [rsp+F0h] [rbp-10h] BYREF
  int v126; // [rsp+100h] [rbp+0h]
  char v127[8]; // [rsp+108h] [rbp+8h] BYREF
  void *v128; // [rsp+110h] [rbp+10h] BYREF
  __int128 v129; // [rsp+120h] [rbp+20h] BYREF
  int v130; // [rsp+130h] [rbp+30h]
  _FD_XFORM v131; // [rsp+138h] [rbp+38h] BYREF
  _OWORD v132[6]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v133[96]; // [rsp+1B0h] [rbp+B0h] BYREF

  v111 = a4;
  v114 = a3;
  v8 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  v9 = *(struct _KEVENT **)(v8 + 24224);
  if ( !v9 || !*(_QWORD *)(v8 + 24232) )
  {
    v13 = -1073741595;
LABEL_7:
    if ( v13 >= 0 )
      goto LABEL_8;
    return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v107, 0);
  }
  if ( KeReadStateEvent(v9) )
  {
    v11 = *(_QWORD *)(W32GetSessionState(v11, v10, v12) + 96);
    if ( *(_BYTE *)(v11 + 24290) )
    {
      if ( KeReadStateEvent(*(PRKEVENT *)(v8 + 24232)) )
      {
        v13 = 0;
        goto LABEL_7;
      }
    }
  }
  v62 = *(_QWORD *)(W32GetSessionState(v11, v10, v12) + 96);
  StateEvent = KeReadStateEvent(*(PRKEVENT *)(v62 + 24232));
  if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
    && !UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread() )
  {
    if ( (StateEvent || !(unsigned int)UserIsUserCritSecIn())
      && KeWaitForSingleObject(*(PVOID *)(v62 + 24224), Executive, 0, 0, 0LL) >= 0
      && *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v65, v64, v66) + 96) + 24290LL) )
    {
      KeWaitForSingleObject(*(PVOID *)(v62 + 24232), Executive, 0, 0, 0LL);
      goto LABEL_8;
    }
    return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v107, 0);
  }
LABEL_8:
  UmfdHostLifeTimeManager::EnsureUmfdHost();
  *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 1760LL);
  if ( *(_DWORD *)a5 && *((_DWORD *)a5 + 1) > 1u )
  {
    v79 = *((unsigned int *)a5 + 1);
    v80 = *(int *)a5;
    v81 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    CurrentThread = GreGetCurrentThread();
    v83 = UMPDOBJ::GetThreadCurrentUMPDObj(CurrentThread) != 0LL;
    if ( v81 )
      v84 = *(_DWORD *)(v81 + 40);
    else
      v84 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(4LL, v84, v83, v80, v79);
  }
  RFONTOBJ::vDelayedReclaim(this);
  v14 = *(_QWORD *)a2;
  LOBYTE(v15) = 10;
  HDEV = *(HDEV *)(*(_QWORD *)a2 + 48LL);
  v113 = HDEV;
  v17 = HmgShareLock(*(_QWORD *)(*(_QWORD *)(v14 + 976) + 296LL), v15);
  v18 = (char *)(v17 + 24);
  if ( !v17 )
    v18 = 0LL;
  v116 = v18;
  if ( v18 )
  {
    v19 = (v18[4] & 1) == 0;
    v20 = (struct LFONT *)(v18 - 24);
    v117 = (struct LFONT *)(v18 - 24);
    if ( !v19 )
    {
      v85 = *(_DWORD *)v18;
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)(v18 - 24));
      v117 = 0LL;
      v20 = 0LL;
      if ( HDEV || (HDEV = (HDEV)UserGetHDEV()) != 0LL )
      {
        v87 = v85 - 4;
        if ( v87 )
        {
          v88 = v87 - 1;
          if ( v88 )
          {
            if ( v88 != 1 )
            {
LABEL_127:
              v18 = (char *)v20 + 24;
              if ( !v20 )
                v18 = 0LL;
              v116 = v18;
              goto LABEL_14;
            }
            v89 = *((_QWORD *)HDEV + 181);
          }
          else
          {
            v89 = *((_QWORD *)HDEV + 180);
          }
        }
        else
        {
          v89 = *((_QWORD *)HDEV + 179);
        }
        if ( v89 )
        {
          LOBYTE(v86) = 10;
          v20 = (struct LFONT *)HmgShareLock(v89, v86);
          v117 = v20;
        }
        goto LABEL_127;
      }
    }
  }
  else
  {
    v20 = 0LL;
    v117 = 0LL;
  }
LABEL_14:
  if ( v18 )
  {
    v21 = lNormAngle((unsigned int)-*((_DWORD *)v18 + 65));
    DC::QuickInitXform(*(_QWORD *)a2, &v118, 516LL);
    v22 = !v21 && (*(_BYTE *)(v118 + 32) & 1) != 0 && *(float *)(v118 + 12) >= 0.0 && *(float *)v118 >= 0.0;
    v23 = *(_DWORD **)this;
    v115 = v22;
    if ( !v23
      || (v55 = *(_QWORD *)a2,
          v56 = *(_QWORD *)(*(_QWORD *)a2 + 976LL),
          *(_QWORD *)(v56 + 296) != *(_QWORD *)(*(_QWORD *)a2 + 1744LL))
      || !v22 && v23[162] )
    {
      *(_QWORD *)(*(_QWORD *)a2 + 1744LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 296LL);
      goto LABEL_21;
    }
    if ( v23[52] == *(_DWORD *)(v56 + 208) && v114 == v23[166] && a4 == (v23[21] & 6) )
    {
      if ( (*(_DWORD *)(v55 + 36) & 1) != 0 || *(_DWORD *)(v55 + 32) == 1 )
      {
        v57 = *(_QWORD *)(v55 + 1760);
        if ( (*(_DWORD *)(v57 + 12) & 0x200004) != 0 )
        {
          v58 = 0;
          v59 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v55, v23, v56) + 96) + 20372LL);
          if ( (v59 & 2) != 0 )
          {
            v58 = 0x10000;
            if ( (v59 & 0x10) != 0 )
              v58 = 268500992;
          }
          v60 = *(_DWORD *)(v57 + 12);
          if ( (v60 & 4) != 0 )
          {
            if ( v58 != (v60 & 0x10010000) )
              goto LABEL_21;
          }
          else if ( ((v60 ^ v58) & 0x10000) != 0 )
          {
            goto LABEL_21;
          }
        }
      }
      v61 = *(_QWORD *)a2;
      if ( *(float *)(*(_QWORD *)a2 + 452LL) == 0.0 || (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v61 + 456)) )
      {
        if ( (*(_DWORD *)(v61 + 252) & 1) == 0 )
        {
LABEL_78:
          v49 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v107, 1);
          if ( !v20 )
            return v49;
          v52 = v20;
LABEL_55:
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v52);
          return v49;
        }
        if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v118, (const struct MATRIX *)(*(_QWORD *)this + 172LL)) )
        {
          *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
          goto LABEL_78;
        }
      }
    }
LABEL_21:
    if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v113) )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v113);
    RFONTOBJ::vMakeInactive(this);
    v25 = v18[273] != 0 ? 0x20 : 0;
    v26 = (v18[273] != 0 ? 0x20 : 0) | 0x80;
    if ( !v18[274] )
      v26 = v18[273] != 0 ? 0x20 : 0;
    *(_DWORD *)(*(_QWORD *)a2 + 1752LL) = v26;
    *(_DWORD *)(*(_QWORD *)a2 + 1756LL) = v21;
    v131 = 0LL;
    v108 = 0;
    v112 = 0LL;
    v110 = 0;
    v27 = *((unsigned int *)v113 + 10);
    *(_QWORD *)&v125 = 0LL;
    if ( (v27 & 1) != 0 || (*((_DWORD *)v18 + 1) & 2) == 0 )
    {
      v28 = 0;
      v107 = 0;
    }
    else
    {
      v28 = 2;
      v107 = 2;
    }
    v119 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(v27, v25, v24) + 96) + 20344LL);
    GreAcquireSemaphoreInternal(v119);
    v29 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentProcess = PsGetCurrentProcess(),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(v29);
      if ( ThreadWin32Thread )
      {
        if ( *ThreadWin32Thread )
        {
          v31 = *ThreadWin32Thread + 8LL;
          if ( *ThreadWin32Thread != -8LL )
          {
            v32 = *(_QWORD *)v31;
            if ( (*(_QWORD *)v31 & 0xFFFFFFFFFFFE0000uLL) != 0 && (*(_QWORD *)v31 & 0x20000LL) == 0 )
            {
              v96 = 37;
              for ( i = 0LL; i < 0x40; ++i )
              {
                v98 = i;
                if ( !_bittest64(&v32, i) )
                  v98 = v96;
                v96 = v98;
              }
              if ( v98 > 17 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(i, v32, (unsigned int)v98);
            }
            v33 = *(_BYTE *)(v31 + 25);
            *(_BYTE *)(v31 + 25) = v33 + 1;
            if ( !v33 )
              *(_QWORD *)v31 |= 0x20000uLL;
          }
        }
      }
    }
    v34 = v117;
    memset(v132, 0, sizeof(v132));
    v35 = v111 & 4;
    BuildMapperParameters((struct MAPPER::PARAMETERS *)v132, a2, (*((_DWORD *)v117 + 7) & 2) != 0, v35 != 0);
    v36 = (void **)LFONTCOREOBJ::ppfeMapFont(
                     (LFONTCOREOBJ *)&v116,
                     (struct MAPPER::PARAMETERS *)v132,
                     &v108,
                     &v112,
                     &v110);
    v37 = (struct PFE *)v36;
    if ( !v36 )
      goto LABEL_80;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 4LL) = v110 >> 8;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 152LL) &= ~0x10u;
    v38 = *v36;
    Src = v38;
    v128 = v38;
    v39 = *((_DWORD *)v38 + 13);
    if ( (v39 & 0x2000) != 0 )
    {
LABEL_148:
      if ( !(unsigned int)PFFOBJ::bAttemptReload((PFFOBJ *)&v128) )
        goto LABEL_80;
      memset_0(v133, 0, sizeof(v133));
      BuildMapperParameters((struct MAPPER::PARAMETERS *)v133, a2, (*((_DWORD *)v34 + 7) & 2) != 0, v35 != 0);
      v37 = LFONTCOREOBJ::ppfeMapFont((LFONTCOREOBJ *)&v116, (struct MAPPER::PARAMETERS *)v133, &v108, &v112, &v110);
      if ( v37 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 4LL) = v110 >> 8;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 152LL) &= ~0x10u;
      }
    }
    else if ( (v39 & 0x1000) != 0 )
    {
      for ( j = 0; ; j = v109 + 1 )
      {
        v109 = j;
        if ( j >= *((_DWORD *)v38 + 9) )
          break;
        v122 = 0LL;
        v121 = 0LL;
        v94 = j;
        Win32FileInfo(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v38 + 26) + 8LL * j) + 80LL), &v121, &v122);
        v38 = Src;
        v95 = *(_QWORD *)(*((_QWORD *)Src + 26) + 8 * v94);
        if ( *(_QWORD *)v95 != v121 || *(_DWORD *)(v95 + 24) != (_DWORD)v122 )
        {
          *((_DWORD *)Src + 13) |= 0x2000u;
          goto LABEL_148;
        }
      }
      *((_DWORD *)v38 + 13) &= ~0x1000u;
    }
    if ( v37 )
    {
      v40 = v116;
      v41 = *(_QWORD *)a2;
      v123[0] = *((_QWORD *)v37 + 4);
      v42 = (struct tagLOGFONTW *)(v116 + 252);
      Src = v116 + 252;
      DC::QuickInitXform(v41, v127, 516LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1
         ? bGetNtoD_Win31(&v131, v42, (struct IFIOBJ *)v123, a2, v28, &v112, 0)
         : bGetNtoD(&v131, v42, (struct IFIOBJ *)v123, a2, &v112) )
      {
        eYX_low = LODWORD(v131.eYX);
        if ( LODWORD(v131.eYX) )
        {
          eYX_low = LODWORD(v131.eYX) ^ 0x80000000;
          LODWORD(v131.eYX) ^= 0x80000000;
        }
        eYY_low = LODWORD(v131.eYY);
        if ( LODWORD(v131.eYY) )
        {
          eYY_low = LODWORD(v131.eYY) ^ 0x80000000;
          LODWORD(v131.eYY) ^= 0x80000000;
        }
        if ( (*(_DWORD *)(v123[0] + 48LL) & 0x1000000) != 0 )
        {
          LODWORD(v131.eXX) = eYY_low;
          LODWORD(v131.eXY) = eYX_low;
          if ( (_DWORD)eYX_low )
          {
            eYX_low = (unsigned int)eYX_low ^ 0x80000000;
            LODWORD(v131.eXY) = eYX_low;
          }
        }
        if ( (*(_DWORD *)(v123[0] + 48LL) & 1) != 0 && *((int *)v40 + 63) <= 0 )
          v108 |= 0x8000u;
        *(_QWORD *)&v125 = *(_QWORD *)v37;
        v46 = v125;
        W32GetSessionState(eYY_low, v123[0], eYX_low);
        ++*(_DWORD *)(v46 + 68);
        v47 = v119;
        v126 = 0;
        if ( v119 == (HSEMAPHORE)-2LL )
        {
          GrepReleasePublicPFTSemaphoreEx();
        }
        else if ( v119 )
        {
          EtwTraceGreLockReleaseSemaphore(L"PublicPFT", v119);
          GrepReleaseLockValidate<17>();
          GreReleaseSemaphoreExclusiveInternal(v47);
        }
        v48 = v115;
        if ( (unsigned int)RFONTOBJ::bFindRFONT(
                             this,
                             &v131,
                             v108,
                             0,
                             v113,
                             (struct EXFORMOBJ *)&v118,
                             v37,
                             v114,
                             *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL),
                             v115,
                             v111) )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = *(_QWORD *)this;
          *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
          v49 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v107, 1);
          PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v125, v50, v51);
        }
        else
        {
          if ( !(unsigned int)RFONTOBJ::bRealizeFont(
                                this,
                                a2,
                                v113,
                                (struct tagENUMLOGFONTEXDVW *)(v40 + 252),
                                v37,
                                &v131,
                                &v112,
                                v108,
                                0,
                                v114,
                                v48,
                                v111) )
          {
            v68 = *(unsigned int *)(v46 + 36);
            v69 = 0LL;
            LOBYTE(v67) = 0;
            v90 = 0;
            v109 = 0;
            v130 = 0;
            v106 = 0;
            v129 = v125;
            if ( (_DWORD)v68 )
            {
              v102 = 1;
              v103 = 0;
              v104 = 0LL;
              while ( v102 )
              {
                v105 = *(_QWORD *)(v104 + *(_QWORD *)(v46 + 208));
                v102 = *(_BYTE *)(v105 + 45) && !*(_QWORD *)(v105 + 48);
                ++v103;
                v104 += 8LL;
                if ( v103 >= (unsigned int)v68 )
                {
                  if ( v102 )
                  {
                    v90 = UmfdClientSideFileViewMapper::TryMapAllFileViews((UmfdClientSideFileViewMapper *)&v129);
                    v109 = v90;
                    LOBYTE(v67) = 0;
                    goto LABEL_181;
                  }
                  break;
                }
              }
              v90 = v109;
LABEL_181:
              v69 = 0LL;
            }
            if ( v90 == *(_DWORD *)(v46 + 36) )
            {
              v19 = (unsigned int)RFONTOBJ::bRealizeFont(
                                    this,
                                    a2,
                                    v113,
                                    (struct tagENUMLOGFONTEXDVW *)(v40 + 252),
                                    v37,
                                    &v131,
                                    &v112,
                                    v108,
                                    0,
                                    v114,
                                    v48,
                                    v111) == 0;
              v90 = v109;
              LOBYTE(v67) = !v19;
              v69 = 0LL;
              v106 = !v19;
            }
            v91 = 0;
            if ( v90 )
            {
              v92 = v109;
              do
              {
                if ( v91 >= *(_DWORD *)(v46 + 36) )
                  break;
                EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v46 + 208) + 8LL * v91++));
              }
              while ( v91 < v92 );
              v34 = v117;
              v69 = 0LL;
              v67 = v106;
            }
            if ( !v67 )
            {
              *(_QWORD *)this = 0LL;
              *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = 0LL;
              v49 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v107, 0);
              PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)&v125);
              LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v116);
              return v49;
            }
          }
          if ( *((_DWORD *)v40 + 64) )
          {
            SessionState = W32GetSessionState(v68, v67, v69);
            SEMOBJ<17>::SEMOBJ<17>(&v115, *(_QWORD *)(SessionState + 96) + 4872LL);
            v71 = 420LL;
            v124[0] = *((_QWORD *)v37 + 4);
            v72 = *((_DWORD *)v40 + 62);
            if ( v72 < 0x1A4 )
              v71 = v72;
            v73 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v71);
            v74 = v73;
            if ( v73 )
            {
              memmove(v73, Src, v71);
              v74->lfWidth = 0;
              v75 = *(_QWORD *)this + 152LL;
              DC::QuickInitXform(*(_QWORD *)a2, &v114, 516LL);
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1 )
                NtoD_Win31 = bGetNtoD_Win31((struct _FD_XFORM *)v75, v74, (struct IFIOBJ *)v124, a2, v107, &v112, 0);
              else
                NtoD_Win31 = bGetNtoD((struct _FD_XFORM *)v75, v74, (struct IFIOBJ *)v124, a2, &v112);
              if ( NtoD_Win31 )
              {
                v77 = *(_DWORD *)(v75 + 8);
                if ( v77 )
                {
                  v77 ^= 0x80000000;
                  *(_DWORD *)(v75 + 8) = v77;
                }
                v78 = *(_DWORD *)(v75 + 12);
                if ( v78 )
                {
                  v78 ^= 0x80000000;
                  *(_DWORD *)(v75 + 12) = v78;
                }
                if ( (*(_DWORD *)(v124[0] + 48LL) & 0x1000000) != 0 )
                {
                  *(_DWORD *)v75 = v78;
                  *(_DWORD *)(v75 + 4) = v77;
                  if ( v77 )
                    *(_DWORD *)(v75 + 4) = v77 ^ 0x80000000;
                }
              }
              else
              {
                *(_FD_XFORM *)(*(_QWORD *)this + 152LL) = v131;
              }
              FreeTmpBuffer(v74);
            }
            else
            {
              *(_FD_XFORM *)(*(_QWORD *)this + 152LL) = v131;
            }
            SEMOBJ<17>::vUnlock(&v115);
          }
          *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = *(_QWORD *)this;
          *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
          v49 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v107, 1);
        }
        goto LABEL_54;
      }
    }
LABEL_80:
    *(_QWORD *)this = 0LL;
    *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = 0LL;
    v49 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v107, 0);
    SEMOBJ<17>::vUnlock(&v119);
LABEL_54:
    v52 = v34;
    goto LABEL_55;
  }
  RFONTOBJ::vMakeInactive(this);
  *(_QWORD *)this = 0LL;
  *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = 0LL;
  v54 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v107, 0);
  if ( v20 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v20);
  return v54;
}
