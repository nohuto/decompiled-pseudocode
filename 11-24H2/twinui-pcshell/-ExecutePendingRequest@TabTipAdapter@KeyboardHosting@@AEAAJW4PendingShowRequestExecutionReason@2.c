/*
 * XREFs of ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x1800E18B8
 * Callers:
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1800E09C8 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXK@Z @ 0x1802946F0 (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXK@Z.c)
 *     ?OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@45678@@Z @ 0x1802BF540 (-OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Cor.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180055520 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@0II@Z @ 0x1800DFEB8 (-StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeybo.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800E2810 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgR_ea_1800E2810.c)
 *     ??1?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E2868 (--1-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsP_ea_1800E2868.c)
 *     ??1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800E28C8 (--1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E28F4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E36A8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?value@?$optional@I@std@@QEGAAAEAIXZ @ 0x18021E950 (-value@-$optional@I@std@@QEGAAAEAIXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18047F674 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardView_ea_18047F674.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecutePendingRequest(__int64 a1, int a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // r15d
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // r9
  int v9; // edi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD); // rbx
  unsigned int *v16; // rax
  int v17; // eax
  int v18; // [rsp+28h] [rbp-E0h]
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h]
  void **v21; // [rsp+58h] [rbp-B0h] BYREF
  char v22[272]; // [rsp+60h] [rbp-A8h] BYREF
  char v23[8]; // [rsp+170h] [rbp+68h] BYREF
  char v24[48]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v4 = (RTL_SRWLOCK *)(a1 + 416);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 416));
  v20 = *(_QWORD *)(a1 + 392);
  v5 = *(_DWORD *)(a1 + 400);
  *(_WORD *)(a1 + 392) = 0;
  *(_DWORD *)(a1 + 396) = 0;
  *(_DWORD *)(a1 + 400) = 11;
  v6 = *(_QWORD *)(a1 + 488);
  v19 = v6;
  if ( v4 )
  {
    ReleaseSRWLockExclusive(v4);
    LODWORD(v6) = v19;
  }
  v7 = -1;
  if ( BYTE4(v19) )
    v7 = v6;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v21,
    (__int64)"PendingRequestExecuted");
  v21 = &TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::`vftable';
  v18 = a2;
  TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::StartActivity((__int64)&v21);
  if ( (_BYTE)v20 )
  {
    if ( BYTE1(v20) )
    {
      v8 = 10LL;
      if ( a2 )
      {
        v9 = a2 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            v8 = 4LL;
        }
        else
        {
          v8 = 3LL;
        }
      }
      else
      {
        v8 = 2LL;
      }
      v10 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(a1, v5, HIDWORD(v20), v8, v18, v7);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 1704LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v10);
        TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::~PendingRequestExecuted((TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted *)&v21);
        return v11;
      }
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8, HIDWORD(v20), v5);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 1708LL;
        goto LABEL_17;
      }
    }
  }
  if ( BYTE4(v19) )
  {
    v14 = *(_QWORD *)(a1 + 32);
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 656LL);
    v16 = (unsigned int *)std::optional<unsigned int>::value(&v19);
    v17 = v15(v14, *v16);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6B2,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v17);
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v21);
  v21 = &TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v21);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v24);
  wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v23);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>(v22);
  return 0LL;
}
