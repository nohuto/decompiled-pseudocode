/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x140292040
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x140291FC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x1403E4E20 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1401E6A54 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402915D8 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402929F8 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140293650 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140298418 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1402D7EA4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 */

__int64 __fastcall DxgkSetPointerShape(
        DXGADAPTER *this,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8)
{
  int v12; // r12d
  int v13; // edi
  __int64 VidPnSourceId; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // zf
  __int64 v20; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // r13
  int v23; // eax
  bool v24; // di
  _QWORD *i; // rcx
  _QWORD *v26; // rax
  int v27; // edi
  _QWORD *v28; // rdx
  _QWORD *j; // rcx
  _QWORD *v30; // rax
  struct SESSION_VIEW *v31; // r15
  _QWORD *v32; // rdi
  struct DISPLAY_SOURCE *v33; // rdi
  _QWORD *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // eax
  unsigned int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r15
  _QWORD *v42; // r13
  __int64 v43; // r12
  ADAPTER_DISPLAY **v44; // rdi
  int v45; // eax
  __int64 v46; // r8
  _QWORD *v47; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v48; // eax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v50; // eax
  __int64 v51; // rdi
  _QWORD *v52; // rcx
  __int64 Value; // [rsp+20h] [rbp-E0h]
  bool v54[8]; // [rsp+50h] [rbp-B0h] BYREF
  int v55; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A0h]
  char v57; // [rsp+68h] [rbp-98h]
  int v58; // [rsp+70h] [rbp-90h]
  unsigned int v59; // [rsp+74h] [rbp-8Ch]
  BOOL v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h]
  struct _DXGKARG_SETPOINTERPOSITION *v62[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v63; // [rsp+98h] [rbp-68h]
  struct _DXGKARG_SETPOINTERPOSITION v64; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v65[144]; // [rsp+B0h] [rbp-50h] BYREF

  v55 = -1;
  v59 = a4;
  v62[0] = a2;
  v56 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v57 = 1;
    v55 = 3012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 3012);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v55, 3012);
  v12 = 0;
  v13 = -1073741811;
  v64 = 0LL;
  if ( !a3 || !a2 )
    goto LABEL_12;
  v64 = *a2;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(a2, a3, a4, a5);
LABEL_45:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
    if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v55);
    return (unsigned int)v12;
  }
  if ( a3->Flags.Value >= 8 )
  {
    WdLogSingleEntry2(2LL, a3->Flags.Value, this);
    Value = a3->Flags.Value;
    WdLogGlobalForLineNumber = 1444;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"invalid Flags specified: 0x%I64x DXGADAPTER=0x%I64x",
      Value,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    goto LABEL_12;
  }
  VidPnSourceId = a3->VidPnSourceId;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8872;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_pAdapter != NULL", 8872LL, 0LL, 0LL, 0LL, 0LL);
  }
  v15 = *((_QWORD *)this + 390);
  if ( !v15 )
  {
    v13 = -1073741637;
    WdLogSingleEntry2(4LL, this, -1073741637LL);
    WdLogGlobalForLineNumber = 8898;
LABEL_11:
    WdLogSingleEntry3(4LL, this, a3->VidPnSourceId, v13);
    WdLogGlobalForLineNumber = 1463;
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
    v18 = v57 == 0;
LABEL_13:
    if ( !v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v55);
    return (unsigned int)v13;
  }
  if ( (unsigned int)VidPnSourceId >= *(_DWORD *)(v15 + 96) )
  {
    WdLogSingleEntry2(2LL, VidPnSourceId, -1073741811LL);
    WdLogGlobalForLineNumber = 8885;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      VidPnSourceId,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v15 = *((_QWORD *)this + 390);
  }
  if ( !v15 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1469;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      1469LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v20 = *(_QWORD *)((char *)this + 412);
  v61 = v20;
  DXGADAPTER::ReleaseReference(this);
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 1483;
    v50 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v50,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
    v18 = v57 == 0;
    goto LABEL_13;
  }
  v23 = DxgkAcquireSessionModeChangeLock(0LL);
  v12 = v23;
  v24 = v23 >= 0;
  v60 = v23 >= 0;
  v54[0] = v23 >= 0;
  if ( v23 < 0 )
  {
    WdLogSingleEntry1(4LL, v23);
    WdLogGlobalForLineNumber = 1494;
    if ( v24 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_45;
  }
  for ( i = (_QWORD *)*((_QWORD *)SessionData + 2323); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)((char *)SessionData + 18584) )
    {
      v27 = HIDWORD(v61);
LABEL_55:
      WdLogSingleEntry4(3LL, a3->VidPnSourceId, v27, (unsigned int)v20, SessionData);
      WdLogGlobalForLineNumber = 4376;
      goto LABEL_56;
    }
    v26 = i - 4;
    if ( *((_DWORD *)i - 6) == (_DWORD)v20 )
    {
      v27 = HIDWORD(v61);
      if ( *((_DWORD *)v26 + 3) == HIDWORD(v61) )
        break;
    }
  }
  if ( i == (_QWORD *)32 )
    goto LABEL_55;
  v28 = v26 + 14;
  for ( j = (_QWORD *)v26[14]; j != v28; j = (_QWORD *)*j )
  {
    v30 = j - 4;
    if ( *((_DWORD *)j - 4) == a3->VidPnSourceId )
      goto LABEL_30;
  }
  v30 = 0LL;
LABEL_30:
  if ( !v30 )
    goto LABEL_55;
  v31 = (struct SESSION_VIEW *)v30[6];
  if ( v31 )
  {
    if ( *(struct DXGSESSIONDATA **)v31 != SessionData )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4386;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pSessionView == NULL) || (&pSessionView->GetOwnedSession() == this)",
        4386LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v32 = (_QWORD *)*((_QWORD *)v31 + 6);
    v63 = (_QWORD *)((char *)v31 + 48);
    if ( v32 == (_QWORD *)((char *)v31 + 48) )
      v33 = 0LL;
    else
      v33 = (struct DISPLAY_SOURCE *)(v32 - 7);
    if ( a8 )
    {
      v12 = -1073741823;
      v58 = -1073741823;
      while ( v33 )
      {
        if ( *((_DWORD *)v33 + 4) == a3->VidPnSourceId && this == *(DXGADAPTER **)(*((_QWORD *)v33 + 1) + 16LL) )
        {
          v12 = SetPointerShapeForDisplaySource(v33, v62[0], a3, v31, this, v59, a5, 0, a7 != 0, 1);
          v58 = v12;
LABEL_42:
          if ( v12 < 0 )
            break;
          goto LABEL_43;
        }
        v52 = (_QWORD *)*((_QWORD *)v33 + 7);
        v33 = 0LL;
        if ( v52 != (_QWORD *)((char *)v31 + 48) )
          v33 = (struct DISPLAY_SOURCE *)(v52 - 7);
      }
LABEL_67:
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v31);
      if ( PrimaryDisplaySource )
      {
        v42 = v63;
        v43 = SHIDWORD(v61);
        do
        {
          v44 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          if ( !v44 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1552;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pDisplayAdapter != NULL",
              1552LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( !v44[390] )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1553;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pDisplayAdapter->IsDisplayAdapter()",
              1553LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, (struct DXGADAPTER *const)v44, 0LL);
          v45 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65, 0LL);
          if ( v45 < 0 )
          {
            v51 = v45;
            WdLogSingleEntry3(2LL, v43, (unsigned int)v20, v45);
            WdLogGlobalForLineNumber = 1586;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to aquire adapter access on adapter = 0x%I64x%08I64x , Status = 0x%I64x.",
              v43,
              (unsigned int)v20,
              v51,
              0LL,
              0LL);
          }
          else
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v62, (ADAPTER_DISPLAY *)((char *)v44[390] + 480), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v62);
            if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v44[390], *((_DWORD *)PrimaryDisplaySource + 4)) )
            {
              v48 = *((_DWORD *)PrimaryDisplaySource + 4);
              *(_QWORD *)&v64.X = 0LL;
              v64.Flags.Value &= ~1u;
              v64.VidPnSourceId = v48;
              ADAPTER_DISPLAY::DdiSetPointerPosition(v44[390], &v64, v46);
            }
            *((_BYTE *)PrimaryDisplaySource + 766) = 0;
            *((_DWORD *)PrimaryDisplaySource + 949) = -1;
            *((_DWORD *)PrimaryDisplaySource + 950) = -1;
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v62);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
          v47 = (_QWORD *)*((_QWORD *)PrimaryDisplaySource + 7);
          PrimaryDisplaySource = 0LL;
          if ( v47 != v42 )
            PrimaryDisplaySource = (struct DISPLAY_SOURCE *)(v47 - 7);
        }
        while ( PrimaryDisplaySource );
        v12 = v58;
      }
    }
    else if ( v33 )
    {
      while ( 1 )
      {
        v58 = SetPointerShapeForDisplaySource(v33, v62[0], a3, v31, this, v59, a5, 0, a7 != 0, 0);
        v12 = v58;
        if ( v58 < 0 )
          goto LABEL_67;
        v34 = (_QWORD *)*((_QWORD *)v33 + 7);
        v33 = 0LL;
        if ( v34 != (_QWORD *)((char *)v31 + 48) )
          v33 = (struct DISPLAY_SOURCE *)(v34 - 7);
        if ( !v33 )
          goto LABEL_42;
      }
    }
LABEL_43:
    if ( v60 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_45;
  }
LABEL_56:
  v37 = PsGetCurrentProcessSessionId();
  WdLogSingleEntry5(2LL, a3->VidPnSourceId, v27, (unsigned int)v20, v37, -1071774937LL);
  WdLogGlobalForLineNumber = 1509;
  v38 = PsGetCurrentProcessSessionId();
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, returning 0x%I64x.",
    a3->VidPnSourceId,
    v27,
    (unsigned int)v20,
    v38,
    -1071774937LL);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v54);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v39, (__int64)&EventProfilerExit, v40, v55);
  return 3223192359LL;
}
