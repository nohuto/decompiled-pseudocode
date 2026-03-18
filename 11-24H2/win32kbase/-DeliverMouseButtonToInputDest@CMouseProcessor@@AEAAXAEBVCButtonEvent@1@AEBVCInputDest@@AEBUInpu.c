/*
 * XREFs of ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018C3F8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x14021DCCC (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x140050B98 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1400967F8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1400EC48C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1400F047C (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x140122AF8 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x14018D208 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ApiSetEditionHandleHungWindow @ 0x140191EA0 (ApiSetEditionHandleHungWindow.c)
 *     ApiSetEditionPostInputMessage @ 0x140192E3C (ApiSetEditionPostInputMessage.c)
 *     ApiSetEditionxxxReportMouseBreakToAccessibility @ 0x14019389C (ApiSetEditionxxxReportMouseBreakToAccessibility.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F32F4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x14021CE8C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x14021D018 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::DeliverMouseButtonToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2,
        const struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  unsigned __int8 v9; // al
  __int64 v10; // r15
  int v11; // edx
  bool v12; // zf
  int v13; // r12d
  char v14; // al
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rdi
  int v18; // esi
  unsigned int UserWindow; // eax
  int v20; // r9d
  CMouseProcessor::CButtonEvent *v21; // rdi
  char v22; // bl
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  bool v26; // di
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  bool v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  unsigned int ButtonMessage; // [rsp+60h] [rbp-69h]
  __int128 v35; // [rsp+70h] [rbp-59h] BYREF
  CMouseProcessor::CButtonEvent *v36; // [rsp+80h] [rbp-49h]
  _QWORD v37[3]; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v38[56]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v39; // [rsp+D8h] [rbp+Fh] BYREF
  int v40; // [rsp+E0h] [rbp+17h]

  v36 = a2;
  if ( !*(_DWORD *)a3 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4193LL);
    return;
  }
  if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
  {
    ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    LOBYTE(v35) = 0;
    *((_QWORD *)&v35 + 1) = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v35);
    CMouseProcessor::PostPendingMouseMoveToInputDest(this, a3);
    DelegateThreadInfo = CInputDest::GetDelegateThreadInfo(a3);
    if ( DelegateThreadInfo )
      CMouseProcessor::PostPendingMouseMove(this, *((struct tagQ **)DelegateThreadInfo + 59));
    v9 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v10 = *((_QWORD *)a2 + 1);
    v11 = (2 * v9) | 4;
    v12 = *(_BYTE *)a4 == 0;
    v39 = *(_QWORD *)(v10 + 144);
    if ( v12 )
      v11 = 2 * v9;
    v40 = *(_DWORD *)(v10 + 152);
    v13 = v11 | 0x40;
    v37[0] = v10;
    if ( (*((_BYTE *)a3 + 104) & 4) == 0 )
      v13 = v11;
    v14 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v15 = *((_QWORD *)a4 + 1);
    v37[2] = 0LL;
    v37[1] = (unsigned __int64)&v39 & -(__int64)(v14 != 0);
    v16 = *(unsigned int *)(v10 + 40);
    v17 = *(_QWORD *)(v10 + 96);
    v18 = *(_DWORD *)(v10 + 88);
    CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v36);
    UserWindow = (unsigned int)CInputDest::GetUserWindow(a3);
    ApiSetEditionPostInputMessage(
      (_DWORD)a3,
      UserWindow,
      ButtonMessage,
      v20,
      v15,
      v18,
      v17,
      v16,
      v13,
      v10 + 112,
      (__int64)v37);
    if ( (_BYTE)v35 )
      --*(_DWORD *)(*((_QWORD *)&v35 + 1) + 28LL);
    v21 = v36;
    v22 = 1;
    if ( *((_DWORD *)v36 + 8) == 2 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v38, a3);
      v23 = *((_QWORD *)v21 + 1);
      v24 = *((unsigned int *)v21 + 6);
      v25 = (*(_DWORD *)(v23 + 120) >> 7) & 1;
      v35 = *(_OWORD *)(v23 + 144);
      if ( !(unsigned int)ApiSetEditionxxxReportMouseBreakToAccessibility(v24, &v35, v25) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v22 = 0;
        }
        v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v28) = v26;
          LOBYTE(v29) = v22;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v29,
            v28,
            *(_QWORD *)(UserSessionState + 69400),
            3,
            6,
            40,
            (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
        }
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v38);
        return;
      }
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v38);
    }
    LOBYTE(v35) = 0;
    *((_QWORD *)&v35 + 1) = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v35);
    if ( *(_DWORD *)a3 && ButtonMessage == 513 )
      ApiSetEditionHandleHungWindow(a3);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v22 = 0;
    }
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 69400),
        4,
        6,
        41,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
    if ( (_BYTE)v35 )
      --*(_DWORD *)(*((_QWORD *)&v35 + 1) + 28LL);
  }
}
