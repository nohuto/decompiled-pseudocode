/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14021C120 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14005EDC8 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14005F298 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14005F94C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x14005FD7C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x14005FEB4 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400610DC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x14009477C (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400952AC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400C1FA0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1400EC31C (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1400F047C (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1400F0F9C (-GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1400F3C20 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1401097F8 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x14010982C (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x140109934 (_anonymous_namespace_--ResolveApplicationFrameChildThread.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x140110B6C (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x1401217F4 (-ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x14015A008 (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x14018D1A4 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x140191140 (APISetEditionGetMouseWheelRoutingMode.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x1401926B0 (ApiSetEditionLLMouseWheelHook.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x140192FE4 (ApiSetEditionPostMouseWheelToForeground.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14019EAF4 (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021C60C (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x14021D0A0 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z @ 0x14021E738 (-RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x14021EA10 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14021ED84 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CMouseProcessor::ProcessMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2)
{
  char v2; // di
  char v5; // si
  struct tagPOINT v6; // rbx
  __int64 v7; // rcx
  bool v8; // r14
  bool v9; // bl
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // ebx
  __int128 v17; // xmm6
  unsigned int WheelMessage; // eax
  char v19; // r14
  __int64 v20; // rcx
  char v21; // bl
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rcx
  bool ShouldDeliverWheelEventToInputDest; // r12
  struct CInputDest *v28; // rax
  CMouseProcessor *v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v33; // rcx
  struct tagTHREADINFO *v34; // rbx
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  bool v42; // bl
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  CMouseProcessor *v47; // rcx
  bool v48; // bl
  bool v49; // di
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  HWND WindowHandle; // rax
  unsigned int v54; // edi
  unsigned __int16 v55; // si
  HWND v56; // rbx
  unsigned int v57; // eax
  __int64 v58; // rcx
  int v59; // ebx
  __int64 v60; // rbx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // r15
  char v64; // al
  unsigned __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rdi
  __int64 v68; // rsi
  int v69; // r14d
  int v70; // ebx
  unsigned int v71; // eax
  __int64 v72; // [rsp+58h] [rbp-B0h] BYREF
  struct tagPOINT v73; // [rsp+60h] [rbp-A8h] BYREF
  CMouseProcessor *v74[2]; // [rsp+68h] [rbp-A0h] BYREF
  char v75; // [rsp+78h] [rbp-90h]
  int v76; // [rsp+7Ch] [rbp-8Ch]
  __int64 v77; // [rsp+80h] [rbp-88h]
  __int64 v78; // [rsp+88h] [rbp-80h] BYREF
  struct tagPOINT v79; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v80[4]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v81[7]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v82[7]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v83[20]; // [rsp+198h] [rbp+90h] BYREF
  int v84; // [rsp+1ACh] [rbp+A4h]
  struct tagPOINT v85; // [rsp+1B8h] [rbp+B0h] BYREF
  int v86; // [rsp+1C0h] [rbp+B8h]
  int v87; // [rsp+1C4h] [rbp+BCh]
  int v88; // [rsp+1C8h] [rbp+C0h]
  int v89; // [rsp+1CCh] [rbp+C4h]
  __int64 PublicExtraInfo; // [rsp+1D0h] [rbp+C8h]
  _QWORD v91[14]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v92; // [rsp+248h] [rbp+140h]
  _BYTE v93[128]; // [rsp+258h] [rbp+150h] BYREF

  v2 = 0;
  LODWORD(v72) = 0;
  v74[0] = this;
  v5 = 0;
  v74[1] = a2;
  v75 = 0;
  v76 = 0;
  v6 = *(struct tagPOINT *)(*(_QWORD *)(W32GetUserSessionState(this) + 19928) + 4960LL);
  v7 = *((_QWORD *)a2 + 1);
  v79 = v6;
  if ( (*(_DWORD *)(v7 + 120) & 0x200) != 0 )
    v6 = *(struct tagPOINT *)(v7 + 52);
  v73 = v6;
  v77 = (LOWORD(v6.y) << 16) | LOWORD(v6.x);
  memset(v91, 0, sizeof(v91));
  v92 = 0;
  CMouseProcessor::InformUMObservers(this, a2, &v73, &v73);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
  {
    v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        6,
        44,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
    v13 = 4LL;
    goto LABEL_72;
  }
  v14 = *((_QWORD *)a2 + 1);
  v86 = *((unsigned __int16 *)a2 + 16) << 16;
  v85 = v6;
  v87 = *(unsigned __int8 *)(v14 + 120) >> 7;
  v88 = *(_DWORD *)(v14 + 88);
  v89 = 0;
  PublicExtraInfo = CMouseProcessor::CMouseEvent::GetPublicExtraInfo(a2);
  v16 = *(_DWORD *)(v15 + 120);
  v17 = *(_OWORD *)(v15 + 144);
  WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
  v19 = 1;
  *(_OWORD *)v83 = v17;
  if ( (unsigned int)ApiSetEditionLLMouseWheelHook(&v85, WheelMessage, v83, (v16 & 1) == 0) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v21 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69400),
        4,
        6,
        45,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
    v13 = 1LL;
    goto LABEL_72;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v20) + 18944) )
  {
    v26 = *(unsigned int *)(*((_QWORD *)a2 + 1) + 120LL);
    if ( (v26 & 8) == 0 )
    {
      v26 = *(_QWORD *)(W32GetUserSessionState(v26) + 19656);
      if ( (*(_DWORD *)(v26 + 8) & 2) == 0 )
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3696, 0, 0);
    }
  }
  ShouldDeliverWheelEventToInputDest = 0;
  LODWORD(v72) = 0;
  if ( *((_DWORD *)a2 + 6) || (v26 = *(_QWORD *)(W32GetUserSessionState(v26) + 19656), (*(_DWORD *)(v26 + 8) & 2) != 0) )
  {
    v78 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v26) + 19928) + 4952LL);
    v28 = CMouseProcessor::MouseHitTest(
            (__int64)this,
            (struct CInputDest *)v93,
            &v79,
            (__int64)&v78,
            a2,
            0,
            (unsigned int *)&v72);
    CInputDest::operator=(v91, v28);
    CInputDest::~CInputDest((CInputDest *)v93);
    v76 = HIDWORD(v91[0]);
    v75 = 1;
    ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                           v29,
                                           a2,
                                           (const struct CInputDest *)v91);
    if ( ShouldDeliverWheelEventToInputDest )
    {
      if ( !CInputDest::DoesBelongToForeground((CInputDest *)v91, 0) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v91);
      v30 = *((_QWORD *)a2 + 1);
      if ( (*(_DWORD *)(v30 + 120) & 8) != 0 )
      {
        if ( *(_DWORD *)(v30 + 116) == 1
          || (v31 = *(_DWORD *)(v30 + 152),
              *(_QWORD *)v83 = *(_QWORD *)(v30 + 144),
              *(_DWORD *)&v83[8] = v31,
              (unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)v83)) )
        {
          CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3696, (int)v91, 0);
        }
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v91);
      v34 = ThreadInfo;
      if ( ThreadInfo )
      {
        if ( anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting((__int64)ThreadInfo) )
        {
          InputDestFromForegroundFocus = QHelper::GetInputDestFromForegroundFocus(v82);
          v36 = InputDestFromForegroundFocus[1];
          v81[0] = *InputDestFromForegroundFocus;
          v37 = InputDestFromForegroundFocus[2];
          v81[1] = v36;
          v38 = InputDestFromForegroundFocus[3];
          v81[2] = v37;
          v39 = InputDestFromForegroundFocus[4];
          v81[3] = v38;
          v40 = InputDestFromForegroundFocus[5];
          v81[4] = v39;
          v41 = InputDestFromForegroundFocus[6];
          v81[5] = v40;
          v81[6] = v41;
          CInputDest::CInputDest((CInputDest *)v93, (const struct tagINPUTDEST *)v81);
          v5 = 1;
          if ( !CInputDest::operator==((int *)v91, (__int64)v93) )
            v2 = 1;
        }
      }
      if ( (v5 & 1) != 0 )
        CInputDest::~CInputDest((CInputDest *)v93);
      if ( v2 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v19 = 0;
        }
        v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v43 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v44) = v42;
          LOBYTE(v45) = v19;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v45,
            v44,
            *(_QWORD *)(v43 + 69400),
            4,
            6,
            46,
            (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
        }
        v13 = 3LL;
        goto LABEL_72;
      }
      MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread(v33);
      if ( MouseWheelForegroundThread
        && *((_QWORD *)v34 + 58) != *(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread((__int64)MouseWheelForegroundThread)
                                              + 464)
        && !(unsigned int)APISetEditionGetMouseWheelRoutingMode()
        && CMouseProcessor::HittestWheelRoutingRequested(v47) )
      {
        v48 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v50 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v51) = v49;
          LOBYTE(v52) = v48;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v52,
            v51,
            *(_QWORD *)(v50 + 69400),
            4,
            6,
            47,
            (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
        }
        InputTraceLogging::Mouse::RerouteWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL));
        ShouldDeliverWheelEventToInputDest = 0;
      }
    }
  }
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v91);
  v54 = *((_DWORD *)a2 + 6);
  v55 = *((_WORD *)a2 + 16);
  v56 = WindowHandle;
  v57 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
  InputTraceLogging::Mouse::ProcessWheel(
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL),
    (const struct tagPOINT *)(*((_QWORD *)a2 + 1) + 52LL),
    v57,
    v55,
    v54,
    v56,
    ShouldDeliverWheelEventToInputDest);
  v59 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
  if ( ShouldDeliverWheelEventToInputDest )
  {
    if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v91, 1LL, 1) )
    {
      *(_QWORD *)&v83[12] = 0LL;
      v84 = 0;
      *(_DWORD *)&v83[8] = v59;
      v60 = (unsigned __int64)*((unsigned __int16 *)a2 + 16) << 16;
      *(_QWORD *)v83 = v77;
      v61 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
      if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                           (__int64)this,
                           (__int64)v91,
                           a2,
                           (struct CMouseProcessor::InputDeliveryContext *)v83,
                           &v73,
                           v72,
                           v61,
                           v60) == 1 )
        CMouseProcessor::DeliverMouseWheelToInputDest(
          this,
          a2,
          (const struct CInputDest *)v91,
          (const struct CMouseProcessor::InputDeliveryContext *)v83);
    }
  }
  else
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v58) + 18944) || anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1) )
    {
      v13 = *(_QWORD *)(W32GetUserSessionState(v62) + 18944) != 0LL ? 12 : 19;
LABEL_72:
      InputTraceLogging::Mouse::DropWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v13);
      goto LABEL_73;
    }
    v63 = *((_QWORD *)a2 + 1);
    LODWORD(v72) = v59 | 0x20;
    *(_QWORD *)v83 = *(_QWORD *)(v63 + 144);
    *(_DWORD *)&v83[8] = *(_DWORD *)(v63 + 152);
    v80[0] = v63;
    v64 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v80[2] = 0LL;
    v65 = (unsigned __int64)v83 & -(__int64)(v64 != 0);
    v66 = *((unsigned __int16 *)a2 + 16);
    v80[1] = v65;
    v67 = *(unsigned int *)(v63 + 40);
    v68 = *(_QWORD *)(v63 + 96);
    v69 = *(_DWORD *)(v63 + 88);
    v70 = v66 << 16;
    v71 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
    ApiSetEditionPostMouseWheelToForeground(v71, v70, v77, v69, v68, v67, v72, v63 + 112, (__int64)v80);
  }
LABEL_73:
  CInputDest::~CInputDest((CInputDest *)v91);
  CMouseProcessor::EndStreamToken::~EndStreamToken(v74);
}
