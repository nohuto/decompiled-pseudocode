/*
 * XREFs of ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E8070
 * Callers:
 *     ?DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z @ 0x1401BB630 (-DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z.c)
 *     ?DxgkRequestDisplayRecoveryToBroker@@YAJXZ @ 0x1401BB804 (-DxgkRequestDisplayRecoveryToBroker@@YAJXZ.c)
 *     ?DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z @ 0x1401BB908 (-DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x140414B30 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E8190 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 */

__int64 __fastcall DxgkSendDisplayBrokerMessage(
        unsigned int a1,
        struct _PORT_MESSAGE *a2,
        struct _ALPC_MESSAGE_ATTRIBUTES *a3,
        struct _PORT_MESSAGE *a4,
        unsigned __int64 *a5,
        struct _ALPC_MESSAGE_ATTRIBUTES *a6,
        union _LARGE_INTEGER *a7)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // eax

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
    return DispBrokerClient::SendDisplayBrokerMessage(
             (struct DXGSESSIONDATA *)((char *)SessionData + 18984),
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  CurrentProcess = PsGetCurrentProcess(v13);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  WdLogSingleEntry1(1LL, ProcessSessionId);
  WdLogGlobalForLineNumber = 101;
  v18 = PsGetCurrentProcess(v17);
  v19 = PsGetProcessSessionId(v18);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    0xFFFFFFFFLL,
    L"Called DxgkSetKernelDisplayPolicy without session data in session 0x%I64x",
    v19,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221226581LL;
}
