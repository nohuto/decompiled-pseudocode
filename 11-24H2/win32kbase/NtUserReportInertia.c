/*
 * XREFs of NtUserReportInertia @ 0x14016FA40
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14005F94C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400948FC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400952AC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA038 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1400DA524 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1400F3D2C (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x14011E9F0 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x140122AF8 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_iDqqqq @ 0x140127138 (WPP_RECORDER_AND_TRACE_SF_iDqqqq.c)
 *     UserGetLastError @ 0x140155E98 (UserGetLastError.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401A67CC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x14020E9BC (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtUserReportInertia(unsigned __int64 a1, int a2, __int64 a3, void *a4, void *a5, void *a6)
{
  _QWORD *UserSessionState; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // r14
  char v13; // di
  char v14; // r15
  __int64 v15; // rax
  int v16; // r15d
  bool v17; // bl
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  char v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // di
  int v25; // ebx
  bool v26; // bl
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // r15
  int v33; // r9d
  void *v34; // rax
  bool v35; // bl
  __int64 v36; // rax
  int v37; // edx
  int v38; // r8d
  int v39; // ecx
  void *v40; // rdi
  __m128i *v41; // rax
  int v42; // r10d
  bool IsCompositionInput; // al
  bool v44; // al
  struct tagTHREADINFO *v45; // r13
  char v46; // r15
  unsigned __int64 v47; // rdi
  int v48; // ebx
  __int64 v49; // rax
  bool v50; // bl
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  int v54; // ebx
  CInertiaManager *v55; // rcx
  bool v56; // bl
  bool v57; // r15
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  int v61; // ecx
  struct CInputDest *v62; // r9
  bool v63; // al
  char v64; // bl
  bool v65; // r15
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  char v69; // r12
  int LastError; // ebx
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned __int8 v73; // al
  bool v74; // bl
  __int64 v75; // rax
  int v76; // r8d
  int v77; // edx
  char v78; // r15
  __int64 v79; // rax
  int v81; // [rsp+20h] [rbp-298h]
  int v82; // [rsp+28h] [rbp-290h]
  int v83; // [rsp+30h] [rbp-288h]
  __int16 v84; // [rsp+30h] [rbp-288h]
  __int16 v85; // [rsp+30h] [rbp-288h]
  int v86; // [rsp+38h] [rbp-280h]
  struct INERTIA_INFO *v87; // [rsp+40h] [rbp-278h]
  struct tagTHREADINFO *v88; // [rsp+70h] [rbp-248h] BYREF
  void *Src; // [rsp+78h] [rbp-240h] BYREF
  int v90; // [rsp+80h] [rbp-238h]
  int v91; // [rsp+88h] [rbp-230h]
  int v92; // [rsp+8Ch] [rbp-22Ch]
  void *v93; // [rsp+90h] [rbp-228h]
  unsigned __int64 v94; // [rsp+98h] [rbp-220h]
  void *v95; // [rsp+A8h] [rbp-210h] BYREF
  int v96; // [rsp+B0h] [rbp-208h]
  __int128 v97; // [rsp+C0h] [rbp-1F8h] BYREF
  __int128 v98; // [rsp+D0h] [rbp-1E8h]
  __int64 v99; // [rsp+E0h] [rbp-1D8h]
  __int128 v100; // [rsp+E8h] [rbp-1D0h] BYREF
  __int128 v101; // [rsp+F8h] [rbp-1C0h]
  __int128 v102; // [rsp+108h] [rbp-1B0h]
  _QWORD v103[14]; // [rsp+120h] [rbp-198h] BYREF
  char v104; // [rsp+190h] [rbp-128h]
  __int128 v105; // [rsp+1A0h] [rbp-118h] BYREF
  __int128 v106; // [rsp+1B0h] [rbp-108h]
  __int64 v107; // [rsp+1C0h] [rbp-F8h]
  __int128 v108; // [rsp+1C8h] [rbp-F0h] BYREF
  __int128 v109; // [rsp+1D8h] [rbp-E0h]
  __int128 v110; // [rsp+1E8h] [rbp-D0h]
  _D3DMATRIX v111; // [rsp+200h] [rbp-B8h] BYREF

  v93 = a4;
  v94 = a1;
  Src = a5;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v9;
  if ( v9 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v88 = PtiCurrent(v10);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (v11 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v11 & 2) == 0)
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v13 = 0;
    v12 = 1;
  }
  else
  {
    v12 = 1;
    v13 = 1;
  }
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = W32GetUserSessionState(v11);
    HIDWORD(v87) = HIDWORD(v94);
    WPP_RECORDER_AND_TRACE_SF_iDqqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v14,
      *(_QWORD *)(v15 + 69400),
      v81,
      v82,
      v83,
      v86);
  }
  v16 = 0;
  if ( !v94 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v12 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_179;
    v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
    v84 = 105;
    goto LABEL_19;
  }
  if ( (a2 & 0xFFFFFFF0) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v12 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LODWORD(v87) = a2;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v21,
        *(_QWORD *)(v22 + 69400),
        2u,
        2u,
        0x6Au,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v87);
    }
LABEL_178:
    v16 = 0;
    goto LABEL_179;
  }
  v23 = a2 & 8;
  v91 = a2 & 8;
  LOBYTE(v11) = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_171;
    goto LABEL_32;
  }
  if ( (a2 & 2) != 0 )
  {
LABEL_32:
    if ( !(_BYTE)v11 )
    {
      v24 = 0;
      goto LABEL_34;
    }
LABEL_171:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v12 = 0;
    }
    v78 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v79 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LODWORD(v87) = a2;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v78,
        *(_QWORD *)(v79 + 69400),
        2u,
        2u,
        0x6Bu,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v87);
    }
    goto LABEL_178;
  }
  v24 = 1;
LABEL_34:
  v25 = a2 & 4;
  if ( v25 )
  {
    if ( a3 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v12 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_179;
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v84 = 108;
LABEL_19:
      LOBYTE(v20) = v17;
      LOBYTE(v19) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v20,
        *(_QWORD *)(v18 + 69400),
        2,
        2,
        v84,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
LABEL_179:
      v30 = 87;
      goto LABEL_180;
    }
    if ( !(unsigned int)IsCurrentProcessDwm(v11, v23, (__int64)&WPP_GLOBAL_Control, (__int64)&WPP_RECORDER_INITIALIZED) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v12 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(v27 + 69400),
          2,
          2,
          109,
          (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
      }
LABEL_51:
      v30 = 5;
LABEL_180:
      UserSetLastError(v30);
      goto LABEL_181;
    }
  }
  v31 = W32GetUserSessionState(v11);
  v32 = v31;
  if ( !v24 )
  {
    v73 = CInertiaManager::InvalidateInertiaInfo((CInertiaManager *)(v31 + 16920), *((_QWORD *)v88 + 58), v94);
    v16 = v73;
    if ( !v73 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v12 = 0;
      }
      v74 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v75 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
        LOBYTE(v76) = v74;
        LOBYTE(v77) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v77,
          v76,
          *(_QWORD *)(v75 + 69400),
          2,
          2,
          121,
          (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
      }
      v16 = 0;
      goto LABEL_51;
    }
    goto LABEL_154;
  }
  memset(v103, 0, sizeof(v103));
  v33 = 0;
  v104 = 0;
  v34 = Src;
  if ( !Src )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v12 = 0;
    }
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_62;
    v36 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
    v85 = 110;
LABEL_61:
    LOBYTE(v38) = v35;
    LOBYTE(v37) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v38,
      *(_QWORD *)(v36 + 69400),
      2,
      2,
      v85,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    v33 = 0;
LABEL_62:
    v39 = 87;
LABEL_63:
    v16 = v33;
LABEL_64:
    UserSetLastError(v39);
    CInputDest::~CInputDest((CInputDest *)v103);
    goto LABEL_181;
  }
  if ( v25 )
  {
    v92 = 1;
    if ( !a6 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v12 = 0;
      }
      v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v36 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      v85 = 116;
      goto LABEL_61;
    }
    v45 = v88;
    v40 = v93;
  }
  else
  {
    v92 = 0;
    v40 = v93;
    v41 = CInputDest::CInputDest((__m128i *)&v111, a3, 2 - (unsigned int)(v93 != 0LL), 2);
    CInputDest::operator=(v103, v41);
    CInputDest::~CInputDest((CInputDest *)&v111);
    v42 = 0;
    if ( !LODWORD(v103[0])
      || CInputDest::TestWindowFlag((CInputDest *)v103, 1152)
      || CInputDest::TestWindowFlag((CInputDest *)v103, 896) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v12 = v42;
      }
      v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v51 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
        LOBYTE(v52) = v50;
        LOBYTE(v53) = v12;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v53,
          v52,
          *(_QWORD *)(v51 + 69400),
          2,
          2,
          111,
          (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
          a3);
        v42 = 0;
      }
      v16 = v42;
      v39 = 1400;
      goto LABEL_64;
    }
    if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v91 && HIDWORD(v103[11]) == 2 )
      {
        IsCompositionInput = CInputDest::IsCompositionInput((CInputDest *)v103);
        v33 = 0;
        if ( IsCompositionInput && !a6 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            v12 = 0;
          }
          v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_62;
          v36 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
          v85 = 112;
          goto LABEL_61;
        }
      }
    }
    else if ( HIDWORD(v103[11]) == 2 )
    {
      v44 = CInputDest::IsCompositionInput((CInputDest *)v103);
      v33 = 0;
      if ( v44 && !a6 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v12 = 0;
        }
        v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_62;
        v36 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
        v85 = 113;
        goto LABEL_61;
      }
    }
    v45 = v88;
    if ( v88 != CInputDest::GetThreadInfo((CInputDest *)v103)
      && v88 != CInputDest::GetDelegateThreadInfo((CInputDest *)v103) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v12 = v33;
      }
      v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v36 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      v85 = 114;
      goto LABEL_61;
    }
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - *((_DWORD *)v88 + 380) > 0x7D0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v12 = v33;
      }
      v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v47 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v48 = *((_DWORD *)v88 + 380);
        v49 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
        LODWORD(v87) = v48;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v12,
          v46,
          *(_QWORD *)(v49 + 69400),
          2u,
          2u,
          0x73u,
          (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
          v87,
          v47);
        v33 = 0;
      }
      v39 = 5;
      goto LABEL_63;
    }
    v34 = Src;
  }
  v54 = (*((_DWORD *)v45 + 340) >> 17) & 1;
  v105 = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  v110 = 0LL;
  v95 = 0LL;
  v96 = 0;
  RtlCopyFromUser(&v95, v34, 0xCuLL);
  Src = v95;
  v90 = v96;
  if ( a6 )
  {
    v97 = 0LL;
    v98 = 0LL;
    v99 = 0LL;
    RtlCopyFromUser(&v97, a6, 0x28uLL);
    v105 = v97;
    v106 = v98;
    v107 = v99;
  }
  if ( v40 )
  {
    v100 = 0LL;
    v101 = 0LL;
    v102 = 0LL;
    RtlCopyFromUser(&v100, v40, 0x30uLL);
    v108 = v100;
    v109 = v101;
    v110 = v102;
  }
  memset(&v111, 0, sizeof(v111));
  v88 = 0LL;
  if ( !CInertiaManager::ValidateInertiaInfo(
          v55,
          (struct INERTIA_INFO *)&Src,
          (D3DVALUE *)((unsigned __int64)&v105 & -(__int64)(a6 != 0LL)),
          &v111,
          (double *)&v88) )
  {
    v56 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v58 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v59) = v57;
      LOBYTE(v60) = v56;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v60,
        v59,
        *(_QWORD *)(v58 + 69400),
        2,
        2,
        118,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v61 = 87;
LABEL_141:
    v16 = 0;
    UserSetLastError(v61);
    CInputDest::~CInputDest((CInputDest *)v103);
    goto LABEL_154;
  }
  v62 = (struct CInputDest *)v103;
  if ( v92 )
    v62 = 0LL;
  v63 = CInertiaManager::AddInertiaInfo(
          (CInertiaManager *)(v32 + 16920),
          v45,
          v94,
          v62,
          (struct tagInputRoutingInfo *)((unsigned __int64)&v108 & -(__int64)(v93 != 0LL)),
          v54,
          v92,
          v91 != 0,
          (const struct INERTIA_INFO *)&Src,
          *(double *)&v88,
          (const struct tagRECT *)((unsigned __int64)&v105 & -(__int64)(a6 != 0LL)),
          (const struct _D3DMATRIX *)((unsigned __int64)&v111 & -(__int64)(a6 != 0LL)));
  v16 = v63;
  if ( !v63 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v64 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v64 = 0;
    }
    v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v64 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v66 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v67) = v65;
      LOBYTE(v68) = v64;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v68,
        v67,
        *(_QWORD *)(v66 + 69400),
        2,
        2,
        119,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v61 = 5;
    goto LABEL_141;
  }
  CInputDest::~CInputDest((CInputDest *)v103);
LABEL_154:
  if ( !v16 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v12 = 0;
    }
    v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v72 = W32GetUserSessionState(v71);
      LODWORD(v87) = LastError;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v69,
        *(_QWORD *)(v72 + 69400),
        2u,
        2u,
        0x7Au,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v87);
    }
  }
LABEL_181:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v16;
}
