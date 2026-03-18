/*
 * XREFs of UserKSTInitialize @ 0x140215930
 * Callers:
 *     NtKSTInitialize @ 0x1401B7BB0 (NtKSTInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsRemoteConnection @ 0x1400C88B4 (IsRemoteConnection.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1400CE8D4 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z @ 0x14014AF90 (-RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z.c)
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x14014C75C (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 *     ?ActivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ @ 0x140157FEC (-ActivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ.c)
 *     ?RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z @ 0x140158BE0 (-RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DeclareThreadAsKST@KST@InputTraceLogging@@SAXXZ @ 0x14019C78C (-DeclareThreadAsKST@KST@InputTraceLogging@@SAXXZ.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x14019C7D0 (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x14019D19C (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     PerfomInitialReadInputExplicitly @ 0x14019DF5C (PerfomInitialReadInputExplicitly.c)
 *     ?UserKSTInitialize@KST@InputTraceLogging@@SAXXZ @ 0x14019F440 (-UserKSTInitialize@KST@InputTraceLogging@@SAXXZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x14020C970 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     KSTIOCPDispatcher_Destroy @ 0x14020DB50 (KSTIOCPDispatcher_Destroy.c)
 *     ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x1402155D4 (-ShouldKSTInitializeHidSensor@@YA_NXZ.c)
 *     ActivateKSTInputProcessingHelper @ 0x1402155F0 (ActivateKSTInputProcessingHelper.c)
 *     ?InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z @ 0x14021FE48 (-InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z.c)
 */

__int64 __fastcall UserKSTInitialize(void *a1, void *a2)
{
  void *v2; // rbx
  char v4; // di
  char v5; // r8
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  int v8; // edx
  __int64 v9; // rcx
  char v10; // bl
  bool v11; // si
  __int64 v12; // rax
  int v13; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int8 v19; // bl
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // si
  bool v24; // bp
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  void *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  void *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  void *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  void *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  void *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      10,
      (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  InputTraceLogging::KST::UserKSTInitialize();
  InputTraceLogging::KST::DeclareThreadAsKST();
  UserSessionState = W32GetUserSessionState(v6);
  if ( CInputThreadBase::DeclareThreadAsInput(*(CInputThreadBase **)(UserSessionState + 3112)) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v9) + 19280) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 52);
    v16 = W32GetUserSessionState(v15);
    if ( (int)CKernelSensorThread::InitializeEventHandles(*(CKernelSensorThread **)(v16 + 3112), a1, v2) >= 0
      && (v18 = W32GetUserSessionState(v17),
          (int)IOCPDispatcher::CreateInstance((struct IOCPDispatcher **)(v18 + 19280)) >= 0)
      && ActivateKSTInputProcessingHelper() )
    {
      InputTraceLogging::KST::ActivateKSTInputProcessing();
      v28 = W32GetUserSessionState(v27);
      CInputThreadBase::ActivateInputProcessing(*(CInputThreadBase **)(v28 + 3112));
      v30 = *(_QWORD *)(W32GetUserSessionState(v29) + 3112);
      v31 = *(void **)(v30 + 48);
      v32 = W32GetUserSessionState(v30);
      IOCPDispatcher::RegisterThreadDispatcherObject(*(IOCPDispatcher **)(v32 + 19280), v31);
      v34 = *(_QWORD *)(W32GetUserSessionState(v33) + 3112);
      v35 = *(void **)(v34 + 56);
      v36 = W32GetUserSessionState(v34);
      IOCPDispatcher::RegisterThreadDispatcherObject(*(IOCPDispatcher **)(v36 + 19280), v35);
      v38 = *(_QWORD *)(W32GetUserSessionState(v37) + 3112);
      v39 = *(void **)(v38 + 64);
      v40 = W32GetUserSessionState(v38);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        *(IOCPDispatcher **)(v40 + 19280),
        v39,
        (void (*)(void *))lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_,
        0LL);
      v42 = *(_QWORD *)(W32GetUserSessionState(v41) + 3112);
      v43 = *(void **)(v42 + 72);
      v44 = W32GetUserSessionState(v42);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        *(IOCPDispatcher **)(v44 + 19280),
        v43,
        (void (*)(void *))lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_,
        0LL);
      v46 = *(_QWORD *)(W32GetUserSessionState(v45) + 3112);
      v47 = *(void **)(v46 + 80);
      v48 = W32GetUserSessionState(v46);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        *(IOCPDispatcher **)(v48 + 19280),
        v47,
        (void (*)(void *))lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_,
        0LL);
      if ( (unsigned int)IsRemoteConnection(v50, v49) )
      {
        v52 = W32GetUserSessionState(v51);
        CBaseInput::HandleTSRequest(*(CBaseInput **)(v52 + 3104), 0);
      }
      PerfomInitialReadInputExplicitly(0LL);
      if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
        && ShouldKSTInitializeHidSensor(v53, v22, v54, v55) )
      {
        PerfomInitialReadInputExplicitly(2LL);
      }
      v19 = 1;
    }
    else
    {
      v19 = 0;
      KSTIOCPDispatcher_Destroy(v17);
      v21 = W32GetUserSessionState(v20);
      CKernelSensorThread::DestroyEventHandles(*(CKernelSensorThread **)(v21 + 3112));
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v23 = 0;
      }
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v26) = v23;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v24,
          *(_QWORD *)(v25 + 69400),
          2,
          2,
          13,
          (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
      }
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (LOBYTE(v22) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v22) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v4 = 0;
    if ( (_BYTE)v22 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v4,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        2,
        14,
        (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
    return v19;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v13) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v11,
        *(_QWORD *)(v12 + 69400),
        2,
        2,
        11,
        (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (LOBYTE(v8) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v4 = 0;
    if ( (_BYTE)v8 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v4,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        2,
        12,
        (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
    return 0LL;
  }
}
