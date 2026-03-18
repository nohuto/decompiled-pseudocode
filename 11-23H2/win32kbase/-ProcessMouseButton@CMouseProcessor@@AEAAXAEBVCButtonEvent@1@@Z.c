/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9444
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01F58E0 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C000921C (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00092AC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0052DB0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C0055BE0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C005649C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1C00569FC (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0057318 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0058B74 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     SendMessageTo @ 0x1C006A100 (SendMessageTo.c)
 *     UpdateAsyncKeyState @ 0x1C0089620 (UpdateAsyncKeyState.c)
 *     IsPTPIVEnabled @ 0x1C00A8700 (IsPTPIVEnabled.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsTouchpadDevice @ 0x1C00E5A5C (IsTouchpadDevice.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C00E5C9E (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01B52A4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01B537C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01B53CC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C01B5988 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 *     _anonymous_namespace_::CancelCoolSwitchWithForegroundCheck @ 0x1C01F55C8 (_anonymous_namespace_--CancelCoolSwitchWithForegroundCheck.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F62EC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01F691C (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C01F7008 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C01F706C (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C01F7288 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01F78C4 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x1C01F797C (-GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C01F7A08 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C01F7BC8 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C01F7FA8 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C01F81DC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C01F9068 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?ProcessButton@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IPEAUHWND__@@@Z @ 0x1C01F9340 (-ProcessButton@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IPEAUHWND__@@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C01FB4B8 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z @ 0x1C01FB5D4 (-UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C01FB7C0 (_anonymous_namespace_--ValidateUIPI.c)
 *     IsPointerPromotedMouseMessage @ 0x1C01FB994 (IsPointerPromotedMouseMessage.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C020600C (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C0206294 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x1C0206BE4 (ApiSetEditionLLMouseButtonHook.c)
 */

void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2)
{
  const struct CMouseProcessor::CButtonEvent *v2; // r14
  char v4; // r13
  char v5; // si
  __int64 v6; // rcx
  __int64 v7; // xmm0_8
  int v8; // eax
  int v9; // edx
  unsigned int ButtonMessage; // r12d
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  char v15; // al
  struct tagPOINT v16; // rbx
  int v17; // edx
  HWND WindowHandle; // rax
  int MessageWParamInfo; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // edi
  int v23; // ebx
  int v24; // eax
  int v25; // edx
  int v26; // edx
  __int128 *RawMouseInputDestination; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  int v34; // ebx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r9
  int v39; // edx
  __int64 v40; // r9
  __int64 v41; // rdi
  int v42; // edx
  CInputDest *v43; // rax
  HWND v44; // rax
  int v45; // ebx
  struct tagTHREADINFO *v46; // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // r9
  __int64 v51; // rax
  bool ShouldSkipForegroundActivation; // al
  CMouseProcessor *v53; // rcx
  __int64 v54; // r9
  int v55; // edx
  unsigned __int8 v56; // bl
  bool updated; // al
  PDEVICE_OBJECT v58; // rcx
  bool v59; // r8
  __int16 v60; // ax
  __int64 PtiFromInputDest; // rax
  int v62; // edx
  __int64 v63; // rax
  __int64 v64; // [rsp+40h] [rbp-C0h] BYREF
  int v65; // [rsp+48h] [rbp-B8h]
  struct tagPOINT v66; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v67; // [rsp+58h] [rbp-A8h] BYREF
  CMouseProcessor *v68[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v69; // [rsp+70h] [rbp-90h]
  int v70; // [rsp+74h] [rbp-8Ch]
  __int64 v71; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v72[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v73[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v74; // [rsp+B0h] [rbp-50h]
  int v75; // [rsp+B4h] [rbp-4Ch]
  int v76; // [rsp+B8h] [rbp-48h]
  int v77; // [rsp+BCh] [rbp-44h]
  _OWORD v78[7]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v79[6]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v80; // [rsp+1B0h] [rbp+B0h]
  __int64 v81; // [rsp+1D0h] [rbp+D0h] BYREF
  int v82; // [rsp+1D8h] [rbp+D8h]
  struct tagPOINT v83; // [rsp+1E0h] [rbp+E0h] BYREF
  int v84; // [rsp+1E8h] [rbp+E8h]
  int v85; // [rsp+1ECh] [rbp+ECh]
  int v86; // [rsp+1F0h] [rbp+F0h]
  int v87; // [rsp+1F4h] [rbp+F4h]
  __int64 ExtraInfoForHook; // [rsp+1F8h] [rbp+F8h]
  __int128 v89; // [rsp+200h] [rbp+100h] BYREF
  __int128 v90; // [rsp+210h] [rbp+110h]
  __int128 v91; // [rsp+220h] [rbp+120h]
  __int128 v92; // [rsp+230h] [rbp+130h]
  __int128 v93; // [rsp+240h] [rbp+140h]
  __int128 v94; // [rsp+250h] [rbp+150h]
  __int128 v95; // [rsp+260h] [rbp+160h]
  _DWORD v96[32]; // [rsp+270h] [rbp+170h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      23,
      (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
  v6 = *((_QWORD *)v2 + 1);
  v68[0] = this;
  v68[1] = v2;
  v69 = 0;
  v7 = *(_QWORD *)(v6 + 132);
  v8 = *(_DWORD *)(v6 + 140);
  LOBYTE(a2) = *(_DWORD *)(v6 + 108) == 1;
  v70 = 0;
  v81 = v7;
  v82 = v8;
  if ( !anonymous_namespace_::CancelCoolSwitchWithForegroundCheck(v6, (__int64)a2, &v81) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        24,
        (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
    }
LABEL_68:
    InputTraceLogging::Mouse::DropButton();
    goto LABEL_171;
  }
  if ( !*((_QWORD *)v2 + 5) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        25,
        (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
    }
    goto LABEL_68;
  }
  ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
  if ( !IsPTPIVEnabled() || !isChildPartition() || !IsTouchpadDevice(*(_QWORD *)(*((_QWORD *)v2 + 1) + 8LL)) )
    goto LABEL_31;
  v14 = *((_DWORD *)v2 + 8);
  if ( v14 != 1 )
  {
    if ( v14 == 2 && *((_BYTE *)this + 3560) )
    {
      *((_BYTE *)this + 3560) = 0;
      goto LABEL_38;
    }
LABEL_31:
    if ( (gpdwCPUserPreferencesMask & 0x80008000) == 0x80008000 )
    {
      if ( ButtonMessage == 513 )
      {
        if ( *((_BYTE *)this + 3564) )
        {
          v15 = 0;
        }
        else
        {
          v15 = 1;
          *((_DWORD *)this + 892) = *(_DWORD *)(*((_QWORD *)v2 + 1) + 80LL);
        }
        *((_BYTE *)this + 3564) = v15;
        if ( !v15 )
          goto LABEL_47;
      }
      else if ( ButtonMessage == 514 && *((_BYTE *)this + 3564) )
      {
        v11 = *(_DWORD *)(*((_QWORD *)v2 + 1) + 80LL) - *((_DWORD *)this + 892);
        if ( v11 > dword_1C0289A00 )
        {
LABEL_47:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v5 = 0;
          }
          if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = v5;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              6,
              27,
              (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
          }
          goto LABEL_68;
        }
        *((_BYTE *)this + 3564) = 0;
      }
    }
    v16 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
    v66 = v16;
    v71 = *((_QWORD *)gpsi + 619);
    v67 = v16;
    CMouseProcessor::InformUMObservers(this, v2, &v67, &v67);
    if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v5 = 0;
      }
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          6,
          28,
          (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
      }
      goto LABEL_68;
    }
    CMouseProcessor::MouseHitTest((__int64)this, (__int64)v79, (__int64 *)&v66, (__int64)&v71, v2, 0, 0LL);
    v70 = DWORD1(v79[0]);
    v69 = 1;
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v79);
    InputTraceLogging::Mouse::ProcessButton(
      *(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL),
      (const struct tagPOINT *)(*((_QWORD *)v2 + 1) + 52LL),
      ButtonMessage,
      WindowHandle);
    v83 = v16;
    MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2);
    v20 = *((_QWORD *)v2 + 1);
    v84 = MessageWParamInfo;
    v85 = *(unsigned __int8 *)(v20 + 112) >> 7;
    v86 = *(_DWORD *)(v20 + 80);
    v87 = 0;
    ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(v2);
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v73, (struct CInputDest *)v79);
    v21 = *((_QWORD *)v2 + 1);
    v22 = *(_DWORD *)(v21 + 112);
    v23 = *(_DWORD *)(v21 + 140);
    v64 = *(_QWORD *)(v21 + 132);
    v24 = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
    v65 = v23;
    if ( (unsigned int)ApiSetEditionLLMouseButtonHook(
                         (unsigned int)v79,
                         (unsigned int)&v83,
                         v24,
                         (unsigned int)&v64,
                         (v22 & 1) == 0) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v5 = 0;
      }
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v25,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          6,
          29,
          (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
      }
      InputTraceLogging::Mouse::DropButton();
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v73);
      goto LABEL_170;
    }
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v73);
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3464, 0, 3);
    if ( anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 0) )
    {
      RawMouseInputDestination = anonymous_namespace_::GetRawMouseInputDestination(v78);
      v28 = RawMouseInputDestination[1];
      v89 = *RawMouseInputDestination;
      v29 = RawMouseInputDestination[2];
      v90 = v28;
      v30 = RawMouseInputDestination[3];
      v91 = v29;
      v31 = RawMouseInputDestination[4];
      v92 = v30;
      v32 = RawMouseInputDestination[5];
      v93 = v31;
      v33 = RawMouseInputDestination[6];
      v94 = v32;
      v95 = v33;
      CInputDest::CInputDest((CInputDest *)v96, (const struct tagINPUTDEST *)&v89);
      if ( v96[0] )
      {
        v34 = *((_DWORD *)v2 + 8);
        CMouseProcessor::CButtonEvent::GetVKey(v2);
        ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v96);
        LOBYTE(v36) = v34 == 2;
        UpdateAsyncKeyState(*((_QWORD *)ThreadInfo + 54), v37, v36, v38);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v5 = 0;
        }
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v39) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v39,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            30,
            (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
        }
        InputTraceLogging::Mouse::DropButton();
        CInputDest::SetEmpty((CInputDest *)v96);
        goto LABEL_170;
      }
      CInputDest::SetEmpty((CInputDest *)v96);
    }
    if ( !LODWORD(v79[0]) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v5 = 0;
      }
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          6,
          31,
          (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
      }
      goto LABEL_167;
    }
    if ( (unsigned int)IsPointerPromotedMouseMessage(ButtonMessage, *((_QWORD *)v2 + 1) + 104LL) )
    {
      v4 = 1;
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v40 + 132), v79) )
      {
LABEL_167:
        InputTraceLogging::Mouse::DropButton();
LABEL_170:
        CInputDest::SetEmpty((CInputDest *)v79);
        goto LABEL_171;
      }
    }
    v41 = LOWORD(v66.x) | (LOWORD(v66.y) << 16);
    ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(v79, *((_DWORD *)v2 + 8) == 2);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 924, 1, 1) )
    {
      if ( v4
        && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(
                               *(_QWORD *)(*((_QWORD *)v2 + 1) + 132LL),
                               (char *)this + 3576) )
      {
        goto LABEL_167;
      }
      v89 = v79[0];
      v91 = v79[2];
      v90 = v79[1];
      v93 = v79[4];
      v92 = v79[3];
      v95 = v80;
      v94 = v79[5];
      if ( *((_DWORD *)v2 + 8) == 1 )
      {
        if ( !*((_DWORD *)v2 + 7) )
        {
          LODWORD(v64) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7397);
        }
        *((_DWORD *)this + 893) |= *((_DWORD *)v2 + 7);
        CInputDest::operator=((__int64)v79, (__int64)this + 3576);
      }
      else
      {
        v43 = CMouseProcessor::HandleCapture_BreakHasMouseOwner(
                (__int64)this,
                (CInputDest *)v96,
                (CInputDest *)v79,
                (__int64)v2);
        CInputDest::operator=((__int64)v79, v43);
        CInputDest::SetEmpty((CInputDest *)v96);
      }
      v44 = CInputDest::GetWindowHandle((CInputDest *)v79);
      InputTraceLogging::Mouse::UpdateTargetForCapture(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v44);
      if ( !LODWORD(v79[0]) )
      {
        LODWORD(v64) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3823);
      }
      ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
        (unsigned int)v79,
        (unsigned int)&v89,
        v67.x,
        v66.x,
        (__int64)&v66);
      v41 = LOWORD(v66.x) | (LOWORD(v66.y) << 16);
    }
    else if ( *((_DWORD *)v2 + 8) == 1 )
    {
      if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
              this,
              (const struct CInputDest *)v79,
              v2,
              v41,
              v67,
              ButtonMessage) )
      {
        v42 = 32;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v5 = 0;
        }
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v42) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v42,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            6,
            32,
            (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
        }
        goto LABEL_167;
      }
    }
    else
    {
      if ( !*((_DWORD *)v2 + 7) )
      {
        LODWORD(v64) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7397);
      }
      *((_DWORD *)this + 893) &= ~*((_DWORD *)v2 + 7);
    }
    v45 = *((_DWORD *)v2 + 8);
    CMouseProcessor::CButtonEvent::GetVKey(v2);
    v46 = CInputDest::GetThreadInfo((CInputDest *)v79);
    LOBYTE(v47) = v45 == 2;
    UpdateAsyncKeyState(*((_QWORD *)v46 + 54), v48, v47, v49);
    if ( *((_DWORD *)v2 + 8) == 1 )
    {
      v77 = 0;
      v73[0] = v80;
      v51 = *((_QWORD *)v2 + 1);
      v75 = (__int16)v41;
      v74 = 4;
      v73[1] = *(_QWORD *)(v51 + 8);
      v76 = SWORD1(v41);
      SendMessageTo(5LL, (__int64)v73, 32LL, v50);
    }
    if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x100) != 0 )
    {
      v55 = 0;
    }
    else
    {
      ShouldSkipForegroundActivation = CInputDest::ShouldSkipForegroundActivation((CInputDest *)v79);
      v55 = 0;
      if ( !ShouldSkipForegroundActivation )
      {
        v56 = 0;
        updated = CMouseProcessor::UpdateForegroundForInput(v53, (struct CInputDest *)v79, v2, v54);
        v55 = 0;
        if ( !updated )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v5 = 0;
          }
          if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v55) = v5;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v55,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              3,
              6,
              33,
              (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
          }
          goto LABEL_167;
        }
LABEL_139:
        if ( LODWORD(v79[0]) )
        {
          if ( !v4
            || (PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v79, 2)) == 0
            || (*(_DWORD *)(PtiFromInputDest + 488) & 1) == 0 )
          {
            if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v79, 1LL, 1) )
            {
              v72[0] = v56;
              v72[1] = v41;
              v72[2] = 0LL;
              v63 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2);
              if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                                   (__int64)this,
                                   (__int64)v79,
                                   v2,
                                   (struct CMouseProcessor::InputDeliveryContext *)v72,
                                   &v67,
                                   0,
                                   ButtonMessage,
                                   v63) == 1 )
                CMouseProcessor::DeliverMouseButtonToInputDest(
                  this,
                  v2,
                  (const struct CInputDest *)v79,
                  (const struct CMouseProcessor::InputDeliveryContext *)v72);
              goto LABEL_170;
            }
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
            {
              v5 = 0;
            }
            if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v62) = v5;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v62,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                3,
                6,
                36,
                (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
            }
            goto LABEL_167;
          }
          v58 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v5 = 0;
          }
          v59 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_167;
          v60 = 35;
        }
        else
        {
          v58 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v5 = 0;
          }
          v59 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_167;
          v60 = 34;
        }
        LOBYTE(v55) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          v58->AttachedDevice,
          v55,
          v59,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          6,
          v60,
          (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
        goto LABEL_167;
      }
    }
    v56 = 1;
    goto LABEL_139;
  }
  if ( (unsigned int)CMouseProcessor::InertiaEndSuppression::HandleMake(
                       (_BYTE *)this + 3560,
                       *(_QWORD *)(*((_QWORD *)v2 + 1) + 96LL),
                       v12,
                       v13) )
    goto LABEL_31;
LABEL_38:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      26,
      (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
  }
LABEL_171:
  CMouseProcessor::EndStreamToken::~EndStreamToken(v68);
}
