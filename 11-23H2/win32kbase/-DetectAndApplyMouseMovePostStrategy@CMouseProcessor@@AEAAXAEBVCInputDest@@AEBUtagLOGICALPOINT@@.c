/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0056FE0
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0057458 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 * Callees:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0009088 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00092AC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0050440 (ApiSetEditionUpdateRawMouseMode.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0052FA0 (INPUTDEST_FROM_PWND.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0053338 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C005641C (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00572B4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0057318 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0057334 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     EtwTraceWakePump @ 0x1C00573C0 (EtwTraceWakePump.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0057400 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionWakeThreadForInput @ 0x1C00590B4 (ApiSetEditionWakeThreadForInput.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C00D4174 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00D6120 (GetAppCompatFlags2QuadWord.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C015009C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4,
        struct _mouseCursorEvent *a5)
{
  __int64 v9; // r14
  char v10; // cl
  char v11; // si
  __int64 *Queue; // r15
  __int64 v13; // rbx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v15; // rdx
  const struct tagLOGICALPOINT *v16; // r8
  int v17; // r8d
  int v18; // r9d
  struct tagWND *UserWindow; // rbx
  __int64 v20; // rcx
  __int64 PtiFromInputDest; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  _OWORD v31[7]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v32[40]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v33; // [rsp+158h] [rbp+58h] BYREF
  const struct CMouseProcessor::CMoveEvent *v34; // [rsp+168h] [rbp+68h] BYREF

  v34 = a4;
  if ( !*(_DWORD *)a2 )
  {
    LODWORD(v33) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5390LL);
  }
  v9 = *((_QWORD *)a4 + 1);
  v10 = 4;
  if ( *(_DWORD *)(v9 + 148) != 1 )
    v10 = 0;
  v11 = v10 | 1;
  if ( (*(_DWORD *)(v9 + 112) & 4) == 0 )
    v11 = v10;
  Queue = (__int64 *)CInputDest::GetQueue(a2, 2LL);
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v9 + 8) )
    {
      LODWORD(v34) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5412LL);
    }
    goto LABEL_24;
  }
  CoalesceInputSourceMouseMoves((struct tagQ *)Queue);
  if ( *((_DWORD *)a2 + 23) == 2 )
    v13 = *((_QWORD *)a2 + 10);
  else
    v13 = 0LL;
  if ( qword_1C0296590 && (int)qword_1C0296590() >= 0 && qword_1C0296598 )
    qword_1C0296598(v13);
  if ( CInputDest::GetQueue(a2, 2LL) )
  {
    ThreadInfo = CInputDest::GetThreadInfo(a2);
    *(_QWORD *)(v15 + 96) = ThreadInfo;
  }
  ApiSetEditionUpdateRawMouseMode((__int64)Queue);
  QHelper::SetMouseMovePoint(a2, a3, v16);
  if ( (unsigned int)dword_1C0289810 > 5 && tlgKeywordOn((__int64)&dword_1C0289810, 64LL) )
  {
    v33 = Queue;
    v34 = *(const struct CMouseProcessor::CMoveEvent **)(*((_QWORD *)v34 + 1) + 88LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C0289810,
      (unsigned int)&unk_1C025EFC7,
      v17,
      v18,
      (__int64)&v34,
      (__int64)&v33);
  }
  UserWindow = CInputDest::GetUserWindow(a2);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v20, 0);
  EtwTraceWakePump(PtiFromInputDest, UserWindow, 512LL);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v11 |= 2u;
LABEL_24:
    CMouseProcessor::PostMouseMoveToInputDest(
      (__int64 *)this,
      (__int64)a2,
      v9,
      (unsigned __int16 *)a3,
      v11,
      (__int64)a5);
    return;
  }
  if ( (v11 & 1) != 0 )
    goto LABEL_24;
  v22 = CInputDest::GetQueue(a2, 2LL);
  if ( v22 )
    *(_DWORD *)(v22 + 396) |= 0x20u;
  ApiSetEditionWakeThreadForInput(a2);
  v23 = Queue[18];
  if ( v23 && (GetAppCompatFlags2QuadWord(*(_QWORD *)(v23 + 16)) & 0x2000000000000LL) != 0 )
  {
    v24 = INPUTDEST_FROM_PWND(v32, Queue[18]);
    v25 = v24[1];
    v31[0] = *v24;
    v26 = v24[2];
    v31[1] = v25;
    v27 = v24[3];
    v31[2] = v26;
    v28 = v24[4];
    v31[3] = v27;
    v29 = v24[5];
    v31[4] = v28;
    v30 = v24[6];
    v31[5] = v29;
    v31[6] = v30;
    if ( !CInputDest::operator==((int *)a2, (__int64)v31) )
    {
      LODWORD(v34) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5490LL);
    }
    CMouseProcessor::PostMouseMoveToInputDest((__int64 *)this, (__int64)a2, v9, (unsigned __int16 *)a3, 0, (__int64)a5);
  }
}
