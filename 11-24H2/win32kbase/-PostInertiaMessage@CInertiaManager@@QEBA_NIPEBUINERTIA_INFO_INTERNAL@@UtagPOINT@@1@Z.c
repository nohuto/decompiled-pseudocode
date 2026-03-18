/*
 * XREFs of ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14014D108
 * Callers:
 *     ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x14014D0A4 (-HandleInertiaTimer@CPTPProcessor@@QEAAXXZ.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14020DD9C (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x14020DE58 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x14020ED30 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x14020EE28 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x14020F17C (-StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1400AADA0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA038 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1400F3CE4 (-ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1401110FC (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x140122AF8 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x14015971C (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 *     ApiSetEditionPostInertiaMessage @ 0x140192DB0 (ApiSetEditionPostInertiaMessage.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401A67CC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     ?PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z @ 0x14020EF84 (-PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

bool __fastcall CInertiaManager::PostInertiaMessage(
        CInertiaManager *this,
        unsigned int a2,
        const struct INERTIA_INFO_INTERNAL *a3,
        struct tagPOINT a4,
        struct tagPOINT a5)
{
  char v5; // di
  char v10; // si
  char v11; // r12
  __int64 v12; // r9
  const char *v13; // rax
  CInertiaManager *v14; // rcx
  int v15; // eax
  CInertiaManager *v16; // rcx
  bool v17; // bl
  __int64 UserSessionState; // rax
  int v19; // edx
  int v20; // r8d
  int v21; // r10d
  int v22; // r9d
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int128 v25; // xmm4
  unsigned __int64 v26; // rsi
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  __int64 v28; // rcx
  int v29; // esi
  bool v30; // bl
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  bool v34; // bl
  bool v35; // si
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  __int16 v39; // [rsp+30h] [rbp-D0h]
  unsigned __int16 y; // [rsp+54h] [rbp-ACh]
  __m128i v41; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v42; // [rsp+70h] [rbp-90h]
  __int128 v43; // [rsp+80h] [rbp-80h]
  __int128 v44; // [rsp+90h] [rbp-70h]
  __int128 v45; // [rsp+A0h] [rbp-60h]
  __int128 v46; // [rsp+B0h] [rbp-50h]
  __int128 v47; // [rsp+C0h] [rbp-40h]
  _OWORD v48[7]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = 1;
  y = a4.y;
  if ( a2 - 571 > 1 )
    return 0;
  v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v13 = "STOP";
    if ( a2 != 571 )
      v13 = "END";
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v11,
      v12,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_1a704c5397d93bdb29cfc7c075d58e74_Traceguids,
      v13);
  }
  InputTraceLogging::Inertia::PostInertiaMessage(a2, a3, a4);
  v15 = *((_DWORD *)a3 + 46);
  if ( (v15 & 0x10) != 0 )
  {
    CInertiaManager::RouteSyntheticTouchpadToMT(v14, a2, a4, a5, *((_QWORD *)a3 + 1));
    return 1;
  }
  CInputDest::CInputDest(&v41, *((_QWORD *)a3 + 15), 2 - ((v15 & 0x40) != 0), 1);
  if ( !CInertiaManager::ValidateInertiaDest(v16, (const struct CInputDest *)&v41) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    v39 = 11;
LABEL_32:
    LOBYTE(v20) = v17;
    LOBYTE(v19) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v20,
      *(_QWORD *)(UserSessionState + 69400),
      2,
      2,
      v39,
      (__int64)&WPP_1a704c5397d93bdb29cfc7c075d58e74_Traceguids);
LABEL_33:
    CInputDest::~CInputDest((CInputDest *)&v41);
    return 0;
  }
  v21 = *((_DWORD *)a3 + 46);
  v22 = -__CFSHR__(v21, 2);
  if ( __CFSHR__(v21, 2) && !CInputDest::HasDelegationThread((CInputDest *)&v41) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    v39 = 12;
    goto LABEL_32;
  }
  if ( (v21 & 0x40) != 0 )
  {
    v23 = *((_OWORD *)a3 + 8);
    *((_QWORD *)&v42 + 1) = 0LL;
    v24 = *((_OWORD *)a3 + 9);
    v41.m128i_i32[0] |= 2u;
    v25 = *((_OWORD *)a3 + 10);
    v43 = v23;
    v44 = v24;
    v45 = v25;
  }
  else
  {
    v25 = v45;
    v24 = v44;
    v23 = v43;
  }
  LODWORD(v26) = LOWORD(a4.x) | (y << 16);
  v48[0] = v41;
  v48[1] = v42;
  v48[2] = v23;
  v48[3] = v24;
  v48[4] = v25;
  v48[5] = v46;
  v48[6] = v47;
  if ( !v22 )
  {
    if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline() )
      v26 = (unsigned __int64)(~(unsigned __int8)*((_DWORD *)a3 + 46) & 0x20) >> 5;
    if ( !(unsigned int)ApiSetEditionPostInertiaMessage((unsigned int)v48, a2, *((_QWORD *)a3 + 1), v26, 0LL) )
    {
      v34 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v36 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v37) = v35;
        LOBYTE(v38) = v34;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v38,
          v37,
          *(_QWORD *)(v36 + 69400),
          2,
          2,
          14,
          (__int64)&WPP_1a704c5397d93bdb29cfc7c075d58e74_Traceguids);
      }
    }
    CInputDest::~CInputDest((CInputDest *)&v41);
    return 1;
  }
  DelegateThreadInfo = CInputDest::GetDelegateThreadInfo((CInputDest *)&v41);
  v29 = ApiSetEditionPostInertiaMessage((unsigned int)v48, a2, *((_QWORD *)a3 + 1), v26, (__int64)DelegateThreadInfo);
  if ( !v29 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v28 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v28 & 2) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState(v28);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 69400),
        2,
        2,
        13,
        (__int64)&WPP_1a704c5397d93bdb29cfc7c075d58e74_Traceguids);
    }
  }
  CInputDest::~CInputDest((CInputDest *)&v41);
  return v29 != 0;
}
