/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FA2E8
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01F5A50 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C000921C (_anonymous_namespace_--InMouseRawInputMode.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0052DB0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0053338 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C0055BE0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C005649C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1C00569FC (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0056A24 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0057318 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0058B74 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C005941C (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0059464 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C00E5C9E (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F65FC (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01F698C (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C01F706C (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C01F7208 (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01F77F4 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01F79C0 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1C01F812C (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01F81B0 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C01F81DC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C01F9068 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x1C01FAA90 (-ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z.c)
 *     ?RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C01FAD10 (-RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x1C01FADA4 (_anonymous_namespace_--ResolveApplicationFrameChildThread.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C01FB238 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C01FB7C0 (_anonymous_namespace_--ValidateUIPI.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C0205958 (APISetEditionGetMouseWheelRoutingMode.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x1C0206C84 (ApiSetEditionLLMouseWheelHook.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1C02073D4 (ApiSetEditionPostMouseWheelToForeground.c)
 */

void __fastcall CMouseProcessor::ProcessMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2)
{
  char v4; // si
  __int64 v5; // rcx
  struct tagPOINT v6; // rbx
  bool v7; // zf
  int v8; // r8d
  bool v9; // r14
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // edi
  int v14; // ebx
  unsigned int WheelMessage; // eax
  char v16; // r14
  int v17; // eax
  int v18; // edx
  int v19; // r8d
  char v20; // di
  bool ShouldDeliverWheelEventToInputDest; // r12
  _QWORD *v22; // rax
  CMouseProcessor *v23; // rcx
  __int64 v24; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  int v26; // r8d
  struct tagTHREADINFO *v27; // rbx
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  int v35; // edx
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  CMouseProcessor *v37; // rcx
  int v38; // edx
  int v39; // r8d
  HWND WindowHandle; // rax
  unsigned int v41; // edi
  __int16 v42; // si
  HWND v43; // rbx
  unsigned int v44; // eax
  int v45; // ebx
  __int64 v46; // rbx
  int v47; // eax
  __int64 v48; // rsi
  char v49; // bl
  __int64 v50; // r14
  __int64 v51; // r15
  int v52; // r12d
  int v53; // edi
  int v54; // eax
  int v55; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v56; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A0h] BYREF
  int v58; // [rsp+68h] [rbp-98h]
  __int64 v59; // [rsp+6Ch] [rbp-94h]
  int v60; // [rsp+74h] [rbp-8Ch]
  __int64 v61; // [rsp+80h] [rbp-80h]
  CMouseProcessor *v62[2]; // [rsp+88h] [rbp-78h] BYREF
  char v63; // [rsp+98h] [rbp-68h]
  int v64; // [rsp+9Ch] [rbp-64h]
  struct tagPOINT v65; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v66[7]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v67[7]; // [rsp+120h] [rbp+20h] BYREF
  struct tagPOINT v68; // [rsp+190h] [rbp+90h] BYREF
  int v69; // [rsp+198h] [rbp+98h]
  int v70; // [rsp+19Ch] [rbp+9Ch]
  int v71; // [rsp+1A0h] [rbp+A0h]
  int v72; // [rsp+1A4h] [rbp+A4h]
  __int64 ExtraInfoForHook; // [rsp+1A8h] [rbp+A8h]
  int v74[28]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v75; // [rsp+220h] [rbp+120h]
  _BYTE v76[128]; // [rsp+230h] [rbp+130h] BYREF

  LODWORD(v57) = 0;
  v4 = 0;
  v62[0] = this;
  v5 = *((_QWORD *)a2 + 1);
  v62[1] = a2;
  v6 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
  v65 = v6;
  v7 = (*(_DWORD *)(v5 + 112) & 0x200) == 0;
  v63 = 0;
  v64 = 0;
  if ( !v7 )
    v6 = *(struct tagPOINT *)(v5 + 52);
  v56 = v6;
  v61 = (LOWORD(v6.y) << 16) | LOWORD(v6.x);
  memset(v74, 0, sizeof(v74));
  v75 = 0;
  CMouseProcessor::InformUMObservers(this, a2, &v56, &v56);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
  {
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 40;
      LOBYTE(v10) = v9;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        40,
        (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
    }
    goto LABEL_70;
  }
  v11 = *((_QWORD *)a2 + 1);
  v69 = *((unsigned __int16 *)a2 + 16) << 16;
  v68 = v6;
  v70 = *(unsigned __int8 *)(v11 + 112) >> 7;
  v71 = *(_DWORD *)(v11 + 80);
  v72 = 0;
  ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
  v13 = *(_DWORD *)(v12 + 112);
  v14 = *(_DWORD *)(v12 + 140);
  v57 = *(_QWORD *)(v12 + 132);
  WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
  v16 = 1;
  v58 = v14;
  v17 = ApiSetEditionLLMouseWheelHook(&v68, WheelMessage, &v57, (v13 & 1) == 0);
  v20 = 0;
  if ( v17 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v18) = 0;
    }
    if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v19,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        41,
        (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
    }
    goto LABEL_70;
  }
  if ( gpqForeground
    && (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 8) == 0
    && (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) == 0 )
  {
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3464, 0, 0);
  }
  ShouldDeliverWheelEventToInputDest = 0;
  v55 = 0;
  if ( *((_DWORD *)a2 + 6) || (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) != 0 )
  {
    v57 = *((_QWORD *)gpsi + 619);
    v22 = CMouseProcessor::MouseHitTest((__int64)this, (__int64)v76, (__int64 *)&v65, (__int64)&v57, a2, 0, &v55);
    CInputDest::operator=((__int64)v74, v22);
    CInputDest::SetEmpty((CInputDest *)v76);
    v64 = v74[1];
    v63 = 1;
    ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                           v23,
                                           a2,
                                           (const struct CInputDest *)v74);
    if ( ShouldDeliverWheelEventToInputDest )
    {
      if ( !CInputDest::DoesBelongToForeground((__int64)v74, 0) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v74);
      v24 = *((_QWORD *)a2 + 1);
      if ( (*(_DWORD *)(v24 + 112) & 8) != 0
        && (*(_DWORD *)(v24 + 108) == 1
         || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v24 + 132), v74)) )
      {
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3464, (int)v74, 0);
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v74);
      v27 = ThreadInfo;
      if ( ThreadInfo )
      {
        if ( anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting((__int64)ThreadInfo) )
        {
          InputDestFromForegroundFocus = QHelper::GetInputDestFromForegroundFocus(v67);
          v29 = InputDestFromForegroundFocus[1];
          v66[0] = *InputDestFromForegroundFocus;
          v30 = InputDestFromForegroundFocus[2];
          v66[1] = v29;
          v31 = InputDestFromForegroundFocus[3];
          v66[2] = v30;
          v32 = InputDestFromForegroundFocus[4];
          v66[3] = v31;
          v33 = InputDestFromForegroundFocus[5];
          v66[4] = v32;
          v34 = InputDestFromForegroundFocus[6];
          v66[5] = v33;
          v66[6] = v34;
          CInputDest::CInputDest((CInputDest *)v76, (const struct tagINPUTDEST *)v66);
          v4 = 1;
          if ( !CInputDest::operator==(v74, (__int64)v76) )
            v20 = 1;
        }
      }
      if ( (v4 & 1) != 0 )
        CInputDest::SetEmpty((CInputDest *)v76);
      if ( v20 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v16 = 0;
        }
        if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v35 = 42;
          LOBYTE(v35) = v16;
          LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v35,
            v26,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            42,
            (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
        }
        goto LABEL_70;
      }
      MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
      if ( MouseWheelForegroundThread
        && *((_QWORD *)v27 + 53) != *(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread(MouseWheelForegroundThread)
                                              + 424)
        && !(unsigned int)APISetEditionGetMouseWheelRoutingMode()
        && CMouseProcessor::HittestWheelRoutingRequested(v37) )
      {
        LOBYTE(v38) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v38,
            v39,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            43,
            (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
        }
        InputTraceLogging::Mouse::RerouteWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL));
        ShouldDeliverWheelEventToInputDest = 0;
      }
    }
  }
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v74);
  v41 = *((_DWORD *)a2 + 6);
  v42 = *((_WORD *)a2 + 16);
  v43 = WindowHandle;
  v44 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
  InputTraceLogging::Mouse::ProcessWheel(
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL),
    (const struct tagPOINT *)(*((_QWORD *)a2 + 1) + 52LL),
    v44,
    v42,
    v41,
    v43,
    ShouldDeliverWheelEventToInputDest);
  v45 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
  LODWORD(v57) = v45;
  if ( ShouldDeliverWheelEventToInputDest )
  {
    if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v74, 1LL, 1) )
    {
      v58 = v45;
      v46 = (unsigned __int64)*((unsigned __int16 *)a2 + 16) << 16;
      v59 = 0LL;
      v60 = 0;
      v57 = v61;
      v47 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
      if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                           (__int64)this,
                           (__int64)v74,
                           a2,
                           (struct CMouseProcessor::InputDeliveryContext *)&v57,
                           &v56,
                           v55,
                           v47,
                           v46) == 1 )
        CMouseProcessor::DeliverMouseWheelToInputDest(
          this,
          a2,
          (const struct CInputDest *)v74,
          (const struct CMouseProcessor::InputDeliveryContext *)&v57);
    }
  }
  else
  {
    if ( !gpqForeground || anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1) )
    {
LABEL_70:
      InputTraceLogging::Mouse::DropWheel();
      goto LABEL_71;
    }
    v48 = *((_QWORD *)a2 + 1);
    v56 = *(struct tagPOINT *)(v48 + 132);
    v49 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v50 = *(unsigned int *)(v48 + 40);
    v51 = *(_QWORD *)(v48 + 88);
    v52 = *(_DWORD *)(v48 + 80);
    v53 = *((unsigned __int16 *)a2 + 16) << 16;
    v54 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
    ApiSetEditionPostMouseWheelToForeground(
      v54,
      v53,
      v61,
      v52,
      v51,
      v50,
      v57 | 0x20,
      v48 + 104,
      (unsigned __int64)&v56 & -(__int64)(v49 != 0));
  }
LABEL_71:
  CInputDest::SetEmpty((CInputDest *)v74);
  CMouseProcessor::EndStreamToken::~EndStreamToken(v62);
}
