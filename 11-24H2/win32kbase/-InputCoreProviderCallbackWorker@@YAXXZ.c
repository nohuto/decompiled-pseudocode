/*
 * XREFs of ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B3FE0
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401B3A2C (W32AttachToProcessAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___.c)
 *     _lambda_651b33e2fe6a2bdcb95226f96e252a2c_::operator() @ 0x1401B3D6C (_lambda_651b33e2fe6a2bdcb95226f96e252a2c_--operator().c)
 * Callees:
 *     ?SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z @ 0x140048054 (-SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z.c)
 *     UserIsDisconnectConnection @ 0x14004DE60 (UserIsDisconnectConnection.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140093B30 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     RIMSyncWalkRimObjList @ 0x14011D9CC (RIMSyncWalkRimObjList.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14012C280 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x14019D6B0 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     ?Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z @ 0x1401B1408 (-Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z.c)
 *     ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1401B40FC (-SessionInfo@Win32k@InputTraceLogging@@SAXXZ.c)
 *     TraceRawMouseThrottlingThresholds @ 0x14021363C (TraceRawMouseThrottlingThresholds.c)
 *     ?ButtonState@Mouse@InputTraceLogging@@SAXK@Z @ 0x14021BEBC (-ButtonState@Mouse@InputTraceLogging@@SAXK@Z.c)
 */

void __fastcall InputCoreProviderCallbackWorker(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 MouseProcessor; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE v16[264]; // [rsp+20h] [rbp-108h] BYREF

  if ( *(_DWORD *)(W32GetUserSessionState(a1) + 70120) && !UserIsDisconnectConnection(v1) )
  {
    CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
    InputTraceLogging::Win32k::SessionInfo();
    InputConfig::TraceCurrentConfig(v2);
    if ( *(_QWORD *)(W32GetUserSessionState(v3) + 36296) )
    {
      UserSessionState = W32GetUserSessionState(v4);
      InputTraceLogging::Mouse::SetAppClip(
        (const struct tagRECT *)(*(_QWORD *)(UserSessionState + 36296) + 16LL),
        v6,
        v7,
        v8);
      v10 = *(_QWORD *)(W32GetUserSessionState(v9) + 36296);
      v11 = *(_DWORD *)(v10 + 264);
      v12 = W32GetUserSessionState(v10);
      InputTraceLogging::Mouse::SetShellClip(*(struct tagRECT **)(*(_QWORD *)(v12 + 36296) + 256LL), v11);
    }
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v4);
    if ( MouseProcessor )
      InputTraceLogging::Mouse::ButtonState(*(_DWORD *)(MouseProcessor + 3780));
    TraceRawMouseThrottlingThresholds();
    v15 = W32GetUserSessionState(v14);
    InputTraceLogging::PTP::Settings((const struct tagTOUCHPAD_PARAMETERS_V3 *)(v15 + 16768));
    if ( InputTraceLogging::Enabled(256, 0) )
      RIMSyncWalkRimObjList(
        1LL,
        0LL,
        (void (__fastcall *)(void *, __int64))lambda_c51e6e2186cc259f124bbf87b89b0c07_::_lambda_invoker_cdecl_);
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
  }
}
