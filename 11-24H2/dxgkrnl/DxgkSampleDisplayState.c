/*
 * XREFs of DxgkSampleDisplayState @ 0x14018B414
 * Callers:
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36__&DxgkSampleDisplayState_ @ 0x140064AA0 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36__-D.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_39dd1e7efdff86aa8f7625aa8d27b0c3__&DxgkSampleDisplayState_ @ 0x14006CBC0 (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_5___lambda_39dd1e7efdff86aa8f7625aa8d27b0c3__-.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__&DxgkSampleDisplayState_ @ 0x14006CC50 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__-D.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116__&DxgkSampleDisplayState_ @ 0x14006CCF8 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116__-D.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9__&DxgkSampleDisplayState_ @ 0x14006CD84 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9__-.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSampleDisplayState(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  int v4; // eax
  __int64 v5; // rdi
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v8; // rax
  unsigned int v9; // eax

  if ( !a1 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent();
  v4 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 11) + 408LL))(a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    WdLogSingleEntry2(2LL, ProcessSessionId, v5);
    WdLogGlobalForLineNumber = 606;
    v8 = PsGetCurrentProcess();
    v9 = PsGetProcessSessionId(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to sample display state in session 0x%I64x, (Status = 0x%I64x).",
      v9,
      v5,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v5;
}
