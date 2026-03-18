/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1402096B8
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x140208FBC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@6@Z @ 0x140007F74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U4@.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1400483F4 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x140048CB0 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14005F94C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x14009322C (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1400944F0 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x140094508 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C38DC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKKPEAHPEAU_InputHitTestResult@@@Z @ 0x1400C3C98 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ @ 0x1400F0D54 (-GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1400F3D2C (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ApiSetEditionIsPointerInputRedirected @ 0x1401922E0 (ApiSetEditionIsPointerInputRedirected.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F33F8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F63B8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

struct CInputDest *__fastcall CTouchProcessor::UpdateInputCaptureAndGetTarget(
        PERESOURCE *a1,
        struct CInputDest *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _WORD *a7,
        _DWORD *a8,
        unsigned int a9)
{
  struct CInputDest *v9; // r14
  __int64 v11; // r13
  int v12; // edx
  int v13; // r8d
  char v14; // di
  unsigned int v15; // eax
  CInputDest *v16; // rcx
  struct tagWND *UserWindow; // rax
  __int64 v18; // r8
  __int64 WindowDetails; // rax
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  CTouchProcessor *v24; // rcx
  int v25; // ebx
  int v26; // r15d
  int v27; // ebx
  struct tagPROCESSINFO *InputProcessContext; // r14
  int v29; // ebx
  int v30; // ecx
  __int16 v31; // r12
  __int64 v32; // r13
  int v33; // r14d
  __int64 v34; // rax
  __int64 v35; // rax
  bool v36; // r14
  int v37; // r13d
  int v38; // eax
  __int64 v39; // rdx
  const WCHAR *v40; // rcx
  _DWORD *v41; // r14
  int NextInputStreamToken; // eax
  bool v43; // zf
  unsigned int v44; // eax
  int v45; // r14d
  _DWORD *v46; // rcx
  __int64 v47; // rdx
  int v48; // eax
  unsigned int v49; // r8d
  __int64 v50; // r13
  CInputDest *v51; // rax
  int v52; // r8d
  struct CInputDest *v53; // rdx
  char v54; // r9
  int v55; // edx
  __int64 v56; // r13
  CInputDest *v57; // rcx
  int v58; // edx
  CSpatialProcessor *v59; // r8
  int v60; // edx
  int v61; // ecx
  _WORD *v62; // r13
  int v63; // edx
  __int64 v64; // rcx
  __int16 v65; // r12
  bool v66; // cf
  __int16 v67; // cx
  void *v68; // r8
  int v70; // [rsp+50h] [rbp-B0h]
  int v71; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v72; // [rsp+58h] [rbp-A8h]
  __int64 v73; // [rsp+60h] [rbp-A0h] BYREF
  int v74; // [rsp+68h] [rbp-98h] BYREF
  struct CInputDest *v75; // [rsp+70h] [rbp-90h]
  int v76; // [rsp+78h] [rbp-88h]
  int v77; // [rsp+7Ch] [rbp-84h]
  void *v78; // [rsp+80h] [rbp-80h] BYREF
  __int64 v79; // [rsp+88h] [rbp-78h]
  __int64 v80; // [rsp+90h] [rbp-70h]
  const WCHAR *v81; // [rsp+98h] [rbp-68h] BYREF
  int v82; // [rsp+A0h] [rbp-60h]
  _DWORD *v83; // [rsp+A8h] [rbp-58h]
  CSpatialProcessor *v84; // [rsp+B0h] [rbp-50h]
  __int128 v85; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v86; // [rsp+C8h] [rbp-38h]
  __int64 v87; // [rsp+D8h] [rbp-28h]
  _WORD *v88; // [rsp+E0h] [rbp-20h]
  PERESOURCE *v89[7]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v90[28]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v91[16]; // [rsp+190h] [rbp+90h] BYREF

  v9 = a2;
  v11 = a4;
  v75 = a2;
  v80 = a3;
  v84 = (CSpatialProcessor *)a1;
  v88 = a7;
  v79 = a4;
  v83 = a8;
  v72 = a9;
  memset(a2, 0, 0x70uLL);
  *((_BYTE *)v9 + 112) = 0;
  v76 = a6 & 0x10000;
  v82 = a6 & 0x40000;
  v77 = a6 & 0x40004;
  if ( !tagDomLock::IsLockedShared(a1 + 4) )
  {
    LODWORD(v73) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1948);
  }
  v14 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v13) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v13) = 0;
  }
  if ( (_BYTE)v12 || (_BYTE)v13 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v13,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      66,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  *a8 = 0;
  if ( CInputDest::TestWindowFlag((CInputDest *)(a5 + 72), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a5 + 72), 896) )
  {
    CInputDest::~CInputDest((CInputDest *)(a5 + 72));
    v15 = *(_DWORD *)(a5 + 300) & 0xFFFFFF8F;
    *(_DWORD *)(a5 + 300) = v15;
    if ( (v15 & 0x8000) == 0 )
    {
      *(_DWORD *)(a5 + 300) = v15 | 0x8000;
      CInputDest::GetBaseWindow((CInputDest *)(a5 + 72));
      UserWindow = CInputDest::GetUserWindow(v16);
      WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v89, (__int64)UserWindow, v18);
      v20 = *(_OWORD *)(WindowDetails + 16);
      v85 = *(_OWORD *)WindowDetails;
      v87 = *(_QWORD *)(WindowDetails + 32);
      v86 = v20;
      if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
      {
        v71 = DWORD2(v86);
        v74 = DWORD2(v86);
        v81 = (const WCHAR *)v86;
        v78 = (void *)v85;
        v73 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v21,
          (__int64)&unk_14027C9F0,
          v22,
          v23,
          (__int64)&v73,
          &v78,
          &v81,
          (__int64)&v74,
          (__int64)&v71);
      }
    }
  }
  CInputDest::operator=((__int64)v9, a5 + 72);
  if ( *(_DWORD *)v9 )
  {
    v25 = *(_DWORD *)(a5 + 300);
    v70 = 1;
    v26 = -__CFSHR__(v25, 5);
    LODWORD(v73) = -__CFSHR__(v25, 6);
    v27 = -__CFSHR__(v25, 7);
  }
  else
  {
    v70 = 0;
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v24, *(void **)(v11 + 24));
    LODWORD(v73) = 0;
    v26 = 0;
    v27 = 0;
    if ( InputProcessContext )
    {
      memset(v90, 0, sizeof(v90));
      LODWORD(v73) = ApiSetEditionIsPointerInputRedirected(
                       (__int64)InputProcessContext,
                       *(unsigned int *)(a5 + 60),
                       (__int64)v90);
      v29 = v73;
      CInputDest::CInputDest((CInputDest *)v91, (const struct tagINPUTDEST *)v90);
      v9 = v75;
      CInputDest::operator=(v75, v91);
      CInputDest::~CInputDest((CInputDest *)v91);
      v30 = *(_DWORD *)v9;
      v26 = v29;
      if ( v29 )
      {
        v70 = 0;
        v27 = 0;
        if ( !v30 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2020);
          v70 = 0;
        }
      }
      else
      {
        if ( v30 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2019);
        v70 = 0;
        v27 = 0;
      }
    }
    else
    {
      v9 = v75;
    }
  }
  v31 = 32;
  if ( !*(_DWORD *)(a5 + 232) )
  {
    if ( !*(_DWORD *)v9 )
    {
      if ( v77 && !v76 )
        goto LABEL_83;
      if ( (*(_DWORD *)(v80 + 228) & 0x80u) != 0 )
      {
        v32 = *(_QWORD *)(*(_QWORD *)(v80 + 256) + 1064LL);
        v33 = *(_DWORD *)(v32 + 524) & 1;
        if ( ((v32 + 400) & -(__int64)(v33 != 0)) != 0 )
        {
          CInputDest::operator=((__int64)v75, (v32 + 400) & -(__int64)((*(_DWORD *)(v32 + 524) & 1) != 0));
          v34 = v32 + 520;
          if ( !v33 )
            v34 = 120LL;
          *v83 = *(_DWORD *)v34;
          v35 = v32 + 524;
          if ( !v33 )
            v35 = 124LL;
          v36 = (*(_DWORD *)v35 & 2) != 0;
          v26 = (*(_DWORD *)v35 >> 2) & 1;
          v27 = (*(_DWORD *)v35 & 8) != 0;
LABEL_75:
          v11 = v79;
          if ( v36 )
          {
            *(_DWORD *)(a5 + 300) |= 0x80u;
            v26 = 1;
          }
          goto LABEL_80;
        }
      }
      v37 = (a6 & 0x4002000) == 0 ? 0x200 : 0;
      if ( *(_DWORD *)(a5 + 60) == 3 && (*(_DWORD *)(v79 + 20) & 4) != 0 )
      {
        v38 = *(_DWORD *)(v79 + 104);
        if ( (v38 & 1) != 0 )
          v37 |= 0x40u;
        if ( (v38 & 4) != 0 )
          v37 |= 0x80u;
      }
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v89,
        (CSpatialProcessor *)((char *)v84 + 32),
        0LL);
      v39 = v80;
      v40 = *(const WCHAR **)(v80 + 256);
      v81 = v40;
      v41 = v40 + 12;
      if ( (v37 & 0x200) == 0 || *v41 == 7 )
      {
        if ( *((_DWORD *)v40 + 243) )
        {
          *(_QWORD *)&v86 = *((unsigned int *)v40 + 242);
          *(_QWORD *)&v85 = *(_QWORD *)(v79 + 24);
          DWORD2(v85) = *(_DWORD *)(v79 + 8);
          HIDWORD(v85) = *(_DWORD *)(v79 + 180);
          SendMessageTo(19LL, &v85, 24LL);
        }
        NextInputStreamToken = CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken((__int64)v40);
        v40 = v81;
        v39 = v80;
        *((_DWORD *)v81 + 242) = NextInputStreamToken;
        *((_DWORD *)v40 + 243) = 1;
      }
      v43 = *v41 == 7;
      v77 = *((_DWORD *)v40 + 242);
      if ( v43 )
      {
        v44 = *(_DWORD *)(v39 + 48);
        v45 = 0;
        if ( v44 )
        {
          v46 = (_DWORD *)(*(_QWORD *)(v39 + 240) + 180LL);
          v47 = v44;
          do
          {
            v43 = (*v46 & 0x10000) == 0;
            v48 = v45 + 1;
            v46 += 120;
            if ( v43 )
              v48 = v45;
            v45 = v48;
            --v47;
          }
          while ( v47 );
        }
      }
      else
      {
        v45 = 1;
      }
      v74 = 0;
      LODWORD(v78) = v70;
      memset(v90, 0, sizeof(v90));
      v49 = v37;
      v50 = v79;
      v51 = CTouchProcessor::TouchHitTest((CInputDest *)v91, v79, v49, v72, v77, v45, (__int64)&v74, (__int64)v90);
      CInputDest::operator=(v75, v51);
      CInputDest::~CInputDest((CInputDest *)v91);
      v52 = v90[20];
      v53 = v75;
      v54 = v74 != 0;
      *v83 = v90[20];
      InputTraceLogging::Pointer::SpeedHitTest((const union POINTERINFOUNION *)(v50 + 8), v53, v52, v54);
      v36 = (unsigned int)(*((_DWORD *)v75 + 1) - 2) <= 1;
      if ( v90[26] )
      {
        LOWORD(v70) = (_WORD)v78;
        v55 = *((_DWORD *)v81 + 92);
        if ( (v55 & 8) == 0 || (v55 & 0x10) != 0 || (*(_DWORD *)(*((_QWORD *)v81 + 2) + 168LL) & 0x4000) != 0 )
        {
          v57 = v75;
          *(_DWORD *)(a5 + 232) = v90[26];
          CInputDest::~CInputDest(v57);
          v36 = 0;
          *v83 = 0;
LABEL_66:
          v72 = v90[20];
          if ( v90[20] )
          {
            if ( !v36 )
            {
              v71 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2153);
              v72 = v90[20];
            }
            v27 = 1;
          }
          if ( (*(_DWORD *)(v80 + 228) & 0x80u) != 0 )
          {
            LODWORD(v78) = v36 ? 6 : 0;
            v56 = *(_QWORD *)(*(_QWORD *)(v80 + 256) + 1064LL);
            if ( (*(_DWORD *)(v56 + 524) & 1) != 0 )
            {
              v71 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 63);
            }
            CInputDest::operator=(v56 + 400, (__int64)v75);
            *(_DWORD *)(v56 + 520) = v72;
            *(_DWORD *)(v56 + 524) = (unsigned int)v78 | (v27 != 0 ? 9 : 1);
          }
          CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v89);
          goto LABEL_75;
        }
        LOWORD(v70) = (_WORD)v78;
      }
      if ( v76 )
      {
        *(_QWORD *)&v85 = *((_QWORD *)v75 + 12);
        *((_QWORD *)&v85 + 1) = *(_QWORD *)(v50 + 24);
        LODWORD(v86) = *(_DWORD *)(v50 + 8);
        *(_QWORD *)((char *)&v86 + 4) = *(_QWORD *)(v50 + 40);
        HIDWORD(v86) = 0;
        SendMessageTo(5LL, &v85, 32LL);
      }
      goto LABEL_66;
    }
    v58 = *(_DWORD *)(v11 + 8);
    if ( (unsigned int)(v58 - 2) <= 1 )
      CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        v84,
        v58,
        *(struct tagPOINT *)(v11 + 40),
        *(_QWORD *)(v11 + 88),
        *(unsigned __int16 *)(a5 + 32),
        v72);
  }
LABEL_80:
  v9 = v75;
  if ( v76 && *(_DWORD *)v75 )
  {
    CInputDest::operator=(a5 + 72, (__int64)v75);
    v59 = v84;
    *(_DWORD *)(a5 + 300) = (v27 << 6) ^ ((v27 << 6) ^ (32 * v73) ^ ((16 * v26) ^ (*(_DWORD *)(a5 + 300) ^ (16 * v26)) & 0xFFFFFFEF ^ (32 * v73)) & 0xFFFFFFDF) & 0xFFFFFFBF;
    v60 = *(unsigned __int16 *)(a5 + 32);
    v61 = *(_DWORD *)(v11 + 8);
    *((_QWORD *)v59 + 2) = *(_QWORD *)(v11 + 88);
    *((_DWORD *)v59 + 7) = v60;
    *((_DWORD *)v59 + 6) = v61;
    goto LABEL_86;
  }
LABEL_83:
  if ( v82 && *(_DWORD *)(a5 + 72) )
  {
    CInputDest::~CInputDest((CInputDest *)(a5 + 72));
    *(_DWORD *)(a5 + 300) &= 0xFFFF7F8F;
  }
LABEL_86:
  v62 = v88;
  *v88 |= 16 * (_WORD)v70;
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    && !*(_QWORD *)(W32GetUserSessionState(v64) + 18880)
    || !v26 && (*(_DWORD *)(a5 + 300) & 0x80u) == 0 )
  {
    v31 = 0;
  }
  v65 = *v62 | v31;
  v66 = (_DWORD)v73 != 0;
  LODWORD(v73) = -(int)v73;
  v67 = v65 | (v66 ? 0x40 : 0) | (v27 != 0 ? 0x100 : 0);
  *v62 = v67;
  *v62 = v67 | *(_DWORD *)(a5 + 300) & 0x80;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v63) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v63) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v14 = 0;
  if ( (_BYTE)v63 || v14 )
  {
    v68 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
    LOBYTE(v68) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v63,
      (_DWORD)v68,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      67,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
  return v9;
}
