/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14018BC90 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     IsTouchpadDevice @ 0x140048B4C (IsTouchpadDevice.c)
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 *     IsPTPIVEnabled @ 0x14004FBE8 (IsPTPIVEnabled.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14005EDC8 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14005F298 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14005F94C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x14005FD7C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x14005FEB4 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400952AC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1400967F8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400C1FA0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1400C3AE8 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1400E38D8 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E39B0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1400EC31C (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     IsPointerPromotedMouseMessage @ 0x1400EE540 (IsPointerPromotedMouseMessage.c)
 *     ?GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1400F0F9C (-GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z @ 0x1400F1F70 (-UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1400F3C20 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?ProcessButton@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IPEAUHWND__@@@Z @ 0x1401293C4 (-ProcessButton@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IPEAUHWND__@@@Z.c)
 *     UpdateAsyncKeyState @ 0x140189B10 (UpdateAsyncKeyState.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018C3F8 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x14018FBDC (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1401918D8 (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x140191C20 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x140192618 (ApiSetEditionLLMouseButtonHook.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14019ECE8 (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F32F4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F33F8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x14021CE8C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x14021CEF0 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x14021D018 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x14021D05C (-GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14021D0E8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14021D248 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x14021D68C (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14021ED84 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2)
{
  char v4; // r13
  char v5; // di
  char v6; // bl
  bool v7; // r15
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  bool v11; // bl
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rdx
  unsigned int ButtonMessage; // r12d
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  char v21; // al
  bool v22; // bl
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  bool v26; // bl
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  unsigned int v30; // r8d
  struct tagPOINT v31; // rbx
  __int64 v32; // rcx
  bool v33; // bl
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  HWND WindowHandle; // rax
  int MessageWParamInfo; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // ebx
  __int128 v42; // xmm6
  unsigned int v43; // eax
  bool v44; // bl
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  _OWORD *RawMouseInputDestination; // rax
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  int v55; // ebx
  struct tagTHREADINFO *ThreadInfo; // rax
  unsigned __int8 v57; // dl
  bool v58; // bl
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  bool v62; // bl
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  __int64 v66; // rdx
  __int64 v67; // r9
  int v68; // eax
  __int64 v69; // r15
  bool v70; // bl
  __int64 v71; // rax
  int v72; // r8d
  int v73; // edx
  __int64 v74; // rax
  __int64 v75; // xmm0_8
  _QWORD *HasMouseOwner; // rax
  HWND v77; // rax
  int v78; // r8d
  int v79; // r9d
  int v80; // ebx
  struct tagTHREADINFO *v81; // rax
  unsigned __int8 v82; // dl
  __int64 v83; // rax
  CMouseProcessor *v84; // rcx
  __int64 v85; // r9
  unsigned __int8 v86; // bl
  bool v87; // bl
  __int64 v88; // rax
  int v89; // r8d
  int v90; // edx
  bool v91; // bl
  __int64 v92; // rax
  int v93; // edx
  int v94; // r8d
  __int64 PtiFromInputDest; // rax
  bool v96; // bl
  __int64 v97; // rax
  int v98; // r8d
  int v99; // edx
  __int64 v100; // rax
  __int16 v101; // [rsp+38h] [rbp-D0h]
  struct tagPOINT v102; // [rsp+48h] [rbp-C0h] BYREF
  CMouseProcessor *v103[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v104; // [rsp+60h] [rbp-A8h]
  int v105; // [rsp+64h] [rbp-A4h]
  __int64 v106; // [rsp+68h] [rbp-A0h]
  struct tagPOINT v107; // [rsp+70h] [rbp-98h] BYREF
  __int64 v108; // [rsp+78h] [rbp-90h] BYREF
  __int64 v109; // [rsp+88h] [rbp-80h] BYREF
  int v110; // [rsp+90h] [rbp-78h]
  __int64 v111; // [rsp+98h] [rbp-70h] BYREF
  int v112; // [rsp+A0h] [rbp-68h]
  _QWORD v113[3]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v114[2]; // [rsp+C0h] [rbp-48h] BYREF
  int v115; // [rsp+D0h] [rbp-38h]
  int v116; // [rsp+D4h] [rbp-34h]
  int v117; // [rsp+D8h] [rbp-30h]
  int v118; // [rsp+DCh] [rbp-2Ch]
  __int128 v119; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v120[7]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v121[56]; // [rsp+168h] [rbp+60h] BYREF
  _OWORD v122[7]; // [rsp+1A0h] [rbp+98h] BYREF
  _OWORD v123[6]; // [rsp+218h] [rbp+110h] BYREF
  __int128 v124; // [rsp+278h] [rbp+170h]
  struct tagPOINT v125; // [rsp+298h] [rbp+190h] BYREF
  int v126; // [rsp+2A0h] [rbp+198h]
  int v127; // [rsp+2A4h] [rbp+19Ch]
  int v128; // [rsp+2A8h] [rbp+1A0h]
  int v129; // [rsp+2ACh] [rbp+1A4h]
  __int64 PublicExtraInfo; // [rsp+2B0h] [rbp+1A8h]
  _OWORD v131[7]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _DWORD v132[32]; // [rsp+328h] [rbp+220h] BYREF
  _BYTE v133[128]; // [rsp+3A8h] [rbp+2A0h] BYREF

  v4 = 0;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      6,
      27,
      (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
  }
  v103[0] = this;
  v103[1] = a2;
  LOBYTE(v104) = 0;
  v105 = 0;
  if ( !*((_QWORD *)a2 + 5) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v5 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 69400),
        3,
        6,
        28,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
    v15 = 14LL;
LABEL_17:
    InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v15);
    goto LABEL_159;
  }
  ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
  if ( !IsPTPIVEnabled() || !isChildPartition(v17) || !IsTouchpadDevice(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL), v18) )
    goto LABEL_23;
  v19 = *((_DWORD *)a2 + 8);
  if ( v19 != 1 )
  {
    if ( v19 == 2 && *((_BYTE *)this + 3768) )
    {
      *((_BYTE *)this + 3768) = 0;
      goto LABEL_30;
    }
LABEL_23:
    v20 = *(_DWORD *)(W32GetUserSessionState(v17) + 67060) & 0x80008000;
    if ( (_DWORD)v20 == -2147450880 )
    {
      if ( ButtonMessage == 513 )
      {
        if ( *((_BYTE *)this + 3772) )
        {
          v21 = 0;
        }
        else
        {
          v20 = *(unsigned int *)(*((_QWORD *)a2 + 1) + 88LL);
          v21 = 1;
          *((_DWORD *)this + 944) = v20;
        }
        *((_BYTE *)this + 3772) = v21;
        if ( !v21 )
          goto LABEL_39;
      }
      else if ( ButtonMessage == 514 )
      {
        v30 = *(_DWORD *)(W32GetUserSessionState(v20) + 67152);
        if ( *((_BYTE *)this + 3772) )
        {
          if ( *(_DWORD *)(*((_QWORD *)a2 + 1) + 88LL) - *((_DWORD *)this + 944) > v30 )
          {
LABEL_39:
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v5 = 0;
            }
            v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v28) = v26;
              LOBYTE(v29) = v5;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v29,
                v28,
                *(_QWORD *)(v27 + 69400),
                4,
                6,
                30,
                (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
            }
            v15 = 15LL;
            goto LABEL_17;
          }
          *((_BYTE *)this + 3772) = 0;
        }
      }
    }
    v31 = *(struct tagPOINT *)(*(_QWORD *)(W32GetUserSessionState(v20) + 19928) + 4960LL);
    v107 = v31;
    v102 = v31;
    v108 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v32) + 19928) + 4952LL);
    CMouseProcessor::InformUMObservers(this, a2, &v107, &v107);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v5 = 0;
      }
      v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v34 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v35,
          *(_QWORD *)(v34 + 69400),
          4,
          6,
          31,
          (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
      }
      v15 = 4LL;
      goto LABEL_17;
    }
    CMouseProcessor::MouseHitTest((__int64)this, (struct CInputDest *)v123, &v102, (__int64)&v108, a2, 0, 0LL);
    v105 = DWORD1(v123[0]);
    LOBYTE(v104) = 1;
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v123);
    InputTraceLogging::Mouse::ProcessButton(
      *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL),
      (const struct tagPOINT *)(*((_QWORD *)a2 + 1) + 52LL),
      ButtonMessage,
      (__int64)WindowHandle);
    v125 = v31;
    MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
    v39 = *((_QWORD *)a2 + 1);
    v126 = MessageWParamInfo;
    v127 = *(unsigned __int8 *)(v39 + 120) >> 7;
    v128 = *(_DWORD *)(v39 + 88);
    v129 = 0;
    PublicExtraInfo = CMouseProcessor::CMouseEvent::GetPublicExtraInfo(a2);
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v121, (struct CInputDest *)v123);
    v40 = *((_QWORD *)a2 + 1);
    v41 = *(_DWORD *)(v40 + 120);
    v42 = *(_OWORD *)(v40 + 144);
    v43 = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    v119 = v42;
    if ( (unsigned int)ApiSetEditionLLMouseButtonHook(
                         (unsigned int)v123,
                         (unsigned int)&v125,
                         v43,
                         (unsigned int)&v119,
                         (v41 & 1) == 0) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v5 = 0;
      }
      v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v45 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v46) = v44;
        LOBYTE(v47) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v47,
          v46,
          *(_QWORD *)(v45 + 69400),
          4,
          6,
          32,
          (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
      }
      InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 0LL);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v121);
      goto LABEL_158;
    }
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v121);
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3696, 0, 3);
    if ( anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 0) )
    {
      RawMouseInputDestination = anonymous_namespace_::GetRawMouseInputDestination(v122);
      v49 = RawMouseInputDestination[1];
      v120[0] = *RawMouseInputDestination;
      v50 = RawMouseInputDestination[2];
      v120[1] = v49;
      v51 = RawMouseInputDestination[3];
      v120[2] = v50;
      v52 = RawMouseInputDestination[4];
      v120[3] = v51;
      v53 = RawMouseInputDestination[5];
      v120[4] = v52;
      v54 = RawMouseInputDestination[6];
      v120[5] = v53;
      v120[6] = v54;
      CInputDest::CInputDest((CInputDest *)v132, (const struct tagINPUTDEST *)v120);
      if ( v132[0] )
      {
        v55 = *((_DWORD *)a2 + 8);
        CMouseProcessor::CButtonEvent::GetVKey(a2);
        ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v132);
        UpdateAsyncKeyState(*((_QWORD *)ThreadInfo + 59), v57, v55 == 2);
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v5 = 0;
        }
        v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v59 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v60) = v58;
          LOBYTE(v61) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v61,
            v60,
            *(_QWORD *)(v59 + 69400),
            4,
            6,
            33,
            (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
        }
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 18LL);
        CInputDest::~CInputDest((CInputDest *)v132);
        goto LABEL_158;
      }
      CInputDest::~CInputDest((CInputDest *)v132);
    }
    if ( !LODWORD(v123[0]) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v63 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v64) = v62;
        LOBYTE(v65) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v65,
          v64,
          *(_QWORD *)(v63 + 69400),
          3,
          6,
          34,
          (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
      }
      v66 = 13LL;
      goto LABEL_90;
    }
    if ( (unsigned int)IsPointerPromotedMouseMessage(ButtonMessage, (_DWORD *)(*((_QWORD *)a2 + 1) + 112LL)) )
    {
      v68 = *(_DWORD *)(v67 + 152);
      v109 = *(_QWORD *)(v67 + 144);
      v4 = 1;
      v110 = v68;
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v109) )
        goto LABEL_93;
    }
    v69 = LOWORD(v102.x) | (LOWORD(v102.y) << 16);
    ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(v123, *((_DWORD *)a2 + 8) == 2);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 976, 1, 1) )
    {
      if ( v4 )
      {
        v74 = *((_QWORD *)a2 + 1);
        v75 = *(_QWORD *)(v74 + 144);
        LODWORD(v74) = *(_DWORD *)(v74 + 152);
        v111 = v75;
        v112 = v74;
        if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v111) )
        {
LABEL_93:
          v66 = 10LL;
LABEL_90:
          InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v66);
LABEL_158:
          CInputDest::~CInputDest((CInputDest *)v123);
          goto LABEL_159;
        }
      }
      v131[0] = v123[0];
      v131[2] = v123[2];
      v131[1] = v123[1];
      v131[4] = v123[4];
      v131[3] = v123[3];
      v131[6] = v124;
      v131[5] = v123[5];
      if ( *((_DWORD *)a2 + 8) == 1 )
      {
        *((_DWORD *)this + 945) |= CMouseProcessor::CButtonEvent::GetHardwareButton(a2);
        CInputDest::operator=(v123, (char *)this + 3784);
      }
      else
      {
        HasMouseOwner = (_QWORD *)CMouseProcessor::HandleCapture_BreakHasMouseOwner(this, v133, v123, a2);
        CInputDest::operator=(v123, HasMouseOwner);
        CInputDest::~CInputDest((CInputDest *)v133);
      }
      v77 = CInputDest::GetWindowHandle((CInputDest *)v123);
      InputTraceLogging::Mouse::UpdateTargetForCapture(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v77, v78, v79);
      if ( !LODWORD(v123[0]) )
      {
        LODWORD(v106) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4092LL);
      }
      ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
        (unsigned int)v123,
        (unsigned int)v131,
        v107.x,
        v102.x,
        (__int64)&v102);
      v69 = LOWORD(v102.x) | (LOWORD(v102.y) << 16);
    }
    else if ( *((_DWORD *)a2 + 8) == 1 )
    {
      if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
              this,
              (const struct CInputDest *)v123,
              a2,
              v69,
              v107,
              ButtonMessage) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v5 = 0;
        }
        v70 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v71 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v72) = v70;
          LOBYTE(v73) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v73,
            v72,
            *(_QWORD *)(v71 + 69400),
            3,
            6,
            35,
            (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
        }
        v66 = 16LL;
        goto LABEL_90;
      }
    }
    else
    {
      *((_DWORD *)this + 945) &= ~(unsigned int)CMouseProcessor::CButtonEvent::GetHardwareButton(a2);
    }
    v80 = *((_DWORD *)a2 + 8);
    CMouseProcessor::CButtonEvent::GetVKey(a2);
    v81 = CInputDest::GetThreadInfo((CInputDest *)v123);
    UpdateAsyncKeyState(*((_QWORD *)v81 + 59), v82, v80 == 2);
    if ( *((_DWORD *)a2 + 8) == 1 )
    {
      v118 = 0;
      v114[0] = v124;
      v83 = *((_QWORD *)a2 + 1);
      v116 = (__int16)v69;
      v115 = 4;
      v114[1] = *(_QWORD *)(v83 + 8);
      v117 = SWORD1(v69);
      SendMessageTo(5LL, v114, 32LL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x100) != 0
      || CInputDest::ShouldSkipForegroundActivation((CInputDest *)v123) )
    {
      v86 = 1;
    }
    else
    {
      v86 = 0;
      if ( !CMouseProcessor::UpdateForegroundForInput(v84, (struct CInputDest *)v123, a2, v85) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v5 = 0;
        }
        v87 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v88 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v89) = v87;
          LOBYTE(v90) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v90,
            v89,
            *(_QWORD *)(v88 + 69400),
            3,
            6,
            36,
            (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
        }
        goto LABEL_93;
      }
    }
    if ( LODWORD(v123[0]) )
    {
      if ( !v4
        || (PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((CInputDest *)v123, 2)) == 0
        || (_InterlockedCompareExchange((volatile signed __int32 *)(PtiFromInputDest + 528), 0, 0) & 1) == 0 )
      {
        if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v123, 1LL, 1) )
        {
          v113[0] = v86;
          v113[1] = v69;
          v113[2] = 0LL;
          v100 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
          if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                               (__int64)this,
                               (__int64)v123,
                               a2,
                               (struct CMouseProcessor::InputDeliveryContext *)v113,
                               &v107,
                               0,
                               ButtonMessage,
                               v100) == 1 )
            CMouseProcessor::DeliverMouseButtonToInputDest(
              this,
              a2,
              (const struct CInputDest *)v123,
              (const struct CMouseProcessor::InputDeliveryContext *)v113);
          goto LABEL_158;
        }
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v5 = 0;
        }
        v96 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v97 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v98) = v96;
          LOBYTE(v99) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v99,
            v98,
            *(_QWORD *)(v97 + 69400),
            3,
            6,
            39,
            (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
        }
        v66 = 12LL;
        goto LABEL_90;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v91 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_136;
      v92 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v101 = 38;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v91 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_136;
      v92 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v101 = 37;
    }
    LOBYTE(v94) = v91;
    LOBYTE(v93) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v93,
      v94,
      *(_QWORD *)(v92 + 69400),
      3,
      6,
      v101,
      (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
LABEL_136:
    v66 = 17LL;
    goto LABEL_90;
  }
  if ( (unsigned int)CMouseProcessor::InertiaEndSuppression::HandleMake(
                       (char *)this + 3768,
                       *(_QWORD *)(*((_QWORD *)a2 + 1) + 104LL)) )
    goto LABEL_23;
LABEL_30:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
  }
  v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v24) = v22;
    LOBYTE(v25) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v24,
      *(_QWORD *)(v23 + 69400),
      4,
      6,
      29,
      (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
  }
LABEL_159:
  CMouseProcessor::EndStreamToken::~EndStreamToken(v103);
}
