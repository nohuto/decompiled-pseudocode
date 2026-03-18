/*
 * XREFs of ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x14018D208
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018C3F8 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x14009464C (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x14009471C (-HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x14009483C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104354 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x14021E008 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMoveToInputDest(CMouseProcessor *this, const struct CInputDest *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 Queue; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 PendingMouseMovePoint; // rax
  __int64 v10; // xmm0_8
  const struct CInputDest *v11; // rdx
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  _BYTE v14[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( QHelper::HasPendingMouseMove(a2, a2) )
  {
    if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v4) != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5980LL);
    v5 = 0LL;
    Queue = CInputDest::GetQueue(a2, 2);
    if ( Queue )
      v5 = *(_QWORD *)(Queue + 216);
    v7 = 0LL;
    v8 = CInputDest::GetQueue(a2, 2);
    if ( v8 )
      v7 = *(_QWORD *)(v8 + 208);
    PendingMouseMovePoint = QHelper::GetPendingMouseMovePoint((__int64)v14, (__int64)a2);
    v10 = *(_QWORD *)PendingMouseMovePoint;
    LODWORD(PendingMouseMovePoint) = *(_DWORD *)(PendingMouseMovePoint + 8);
    v12 = v10;
    v13 = PendingMouseMovePoint;
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, 0LL, &v12, v7, v5, 1, 0LL);
    if ( QHelper::HasPendingMouseMove(a2, v11) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5988LL);
  }
}
