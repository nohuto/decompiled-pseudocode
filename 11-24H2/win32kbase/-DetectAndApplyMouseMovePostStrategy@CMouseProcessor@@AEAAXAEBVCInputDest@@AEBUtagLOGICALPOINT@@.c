/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018C758
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14005F804 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400610DC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x14009483C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400948FC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400952AC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     EtwTraceWakePump @ 0x1400A4BC0 (EtwTraceWakePump.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E39B0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?MarkMoveOnQueue@Mouse@InputTraceLogging@@SAXPEBUtagQ@@_K@Z @ 0x1400F1FD8 (-MarkMoveOnQueue@Mouse@InputTraceLogging@@SAXPEBUtagQ@@_K@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x140107EA4 (INPUTDEST_FROM_PWND.c)
 *     GetAppCompatFlags2QuadWord @ 0x140110BA4 (GetAppCompatFlags2QuadWord.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x14018F9DC (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x14019286C (ApiSetEditionMouseMoveShellResilience.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x140193728 (ApiSetEditionUpdateRawMouseMode.c)
 *     ApiSetEditionWakeThreadForInput @ 0x1401937F0 (ApiSetEditionWakeThreadForInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x1401B666C (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14021C07C (-CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x14021E008 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?SetMouseDeviceHandle@QHelper@@YAXAEBVCInputDest@@PEBU_InputDeviceHandle@@@Z @ 0x14021E8E8 (-SetMouseDeviceHandle@QHelper@@YAXAEBVCInputDest@@PEBU_InputDeviceHandle@@@Z.c)
 *     ?SetMouseMoveTimes@QHelper@@YAXAEBVCInputDest@@_K1@Z @ 0x14021E960 (-SetMouseMoveTimes@QHelper@@YAXAEBVCInputDest@@_K1@Z.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4,
        struct _mouseCursorEvent *a5)
{
  __int64 v9; // rbp
  int v10; // ecx
  int v11; // esi
  CMouseProcessor *v12; // rcx
  __int64 *Queue; // r13
  struct tagWND *UserWindow; // rax
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v16; // rdx
  const struct tagLOGICALPOINT *v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  const struct _InputDeviceHandle *v21; // r8
  int v22; // r9d
  __int64 *v23; // rbx
  CInputDest *v24; // rcx
  char PtiFromInputDest; // al
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  _OWORD v36[7]; // [rsp+40h] [rbp-108h] BYREF
  _DWORD v37[28]; // [rsp+B0h] [rbp-98h] BYREF

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5717LL);
  v9 = *((_QWORD *)a4 + 1);
  v10 = 4;
  if ( *(_DWORD *)(v9 + 164) != 1 )
    v10 = 0;
  v11 = v10 | 1;
  if ( (*(_BYTE *)(v9 + 120) & 4) == 0 )
    v11 = v10;
  Queue = (__int64 *)CInputDest::GetQueue(a2, 2);
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v9 + 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5739LL);
    goto LABEL_10;
  }
  CMouseProcessor::CoalesceInputSourceMouseMoves(
    v12,
    (struct tagQ *)Queue,
    (const struct tagINPUT_MESSAGE_SOURCE *)(v9 + 112));
  UserWindow = CInputDest::GetUserWindow(a2);
  ApiSetEditionMouseMoveShellResilience(UserWindow);
  if ( CInputDest::GetQueue(a2, 2) )
  {
    ThreadInfo = CInputDest::GetThreadInfo(a2);
    *(_QWORD *)(v16 + 96) = ThreadInfo;
  }
  ApiSetEditionUpdateRawMouseMode(Queue);
  QHelper::SetMouseMovePoint(a2, a3, v17);
  QHelper::SetMouseMoveTimes(
    a2,
    *(const struct CInputDest **)(*((_QWORD *)a4 + 1) + 88LL),
    *(_QWORD *)(*((_QWORD *)a4 + 1) + 96LL),
    v18);
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline(v20, v19) )
    QHelper::SetMouseDeviceHandle(a2, (const struct CInputDest *)v9, v21);
  InputTraceLogging::Mouse::MarkMoveOnQueue(
    (const struct tagQ *)Queue,
    *(_QWORD *)(*((_QWORD *)a4 + 1) + 96LL),
    (int)v21,
    v22);
  v23 = (__int64 *)CInputDest::GetUserWindow(a2);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v24, 0);
  EtwTraceWakePump(PtiFromInputDest, v23, 0);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v11 |= 2u;
LABEL_10:
    CMouseProcessor::PostMouseMoveToInputDest(
      this,
      a2,
      v9,
      a3,
      *(_QWORD *)(*((_QWORD *)a4 + 1) + 88LL),
      *(_QWORD *)(*((_QWORD *)a4 + 1) + 96LL),
      v11,
      a5);
    return;
  }
  if ( (v11 & 1) != 0 )
    goto LABEL_10;
  v26 = CInputDest::GetQueue(a2, 2);
  if ( v26 )
    *(_DWORD *)(v26 + 436) |= 0x20u;
  ApiSetEditionWakeThreadForInput(a2);
  v28 = Queue[18];
  if ( v28 && ((unsigned __int64)GetAppCompatFlags2QuadWord(*(_QWORD *)(v28 + 16), v27) & 0x2000000000000LL) != 0 )
  {
    v29 = INPUTDEST_FROM_PWND(v37, Queue[18]);
    v30 = v29[1];
    v36[0] = *v29;
    v31 = v29[2];
    v36[1] = v30;
    v32 = v29[3];
    v36[2] = v31;
    v33 = v29[4];
    v36[3] = v32;
    v34 = v29[5];
    v36[4] = v33;
    v35 = v29[6];
    v36[5] = v34;
    v36[6] = v35;
    if ( !CInputDest::operator==((int *)a2, (__int64)v36) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5824LL);
    CMouseProcessor::PostMouseMoveToInputDest(
      this,
      a2,
      v9,
      a3,
      *(_QWORD *)(*((_QWORD *)a4 + 1) + 88LL),
      *(_QWORD *)(*((_QWORD *)a4 + 1) + 96LL),
      0,
      a5);
  }
}
