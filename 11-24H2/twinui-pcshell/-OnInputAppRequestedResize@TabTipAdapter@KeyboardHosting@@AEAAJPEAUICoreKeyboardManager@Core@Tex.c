/*
 * XREFs of ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18047DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeViewInfosIfNeeded@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18004F628 (-InitializeViewInfosIfNeeded@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?GetFirstViewTypeIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1800E0738 (-GetFirstViewTypeIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NIAEAW4CoreKeyboardViewType@Core@T.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E17F4 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18021D128 (--1-$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InvokeInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@@Z @ 0x180232BE4 (-InvokeInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _lambda_820239a8925460678c838e86e23650d6_::_lambda_820239a8925460678c838e86e23650d6_ @ 0x1804178D4 (_lambda_820239a8925460678c838e86e23650d6_--_lambda_820239a8925460678c838e86e23650d6_.c)
 *     wil::ScopeExit__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___ @ 0x18047ADC4 (wil--ScopeExit__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___.c)
 *     ??$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXJAEAI$$QEAIAEAUSize@Foundation@Windows@@AEAE3AEAJ@Z @ 0x18047B198 (--$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivi.c)
 *     wil::details::ScopeExitFn__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___::_ScopeExitFn__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___ @ 0x18047BA08 (wil--details--ScopeExitFn__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___--_ScopeExitFn__lambda_2e93.c)
 *     ??1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18047BA90 (--1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?FireInputPaneShowingEvent@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@0@Z @ 0x18047C5B4 (-FireInputPaneShowingEvent@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@0@Z.c)
 *     ?GetViewRect@TabTipAdapter@KeyboardHosting@@AEAAJIPEAUtagRECT@@@Z @ 0x18047CFBC (-GetViewRect@TabTipAdapter@KeyboardHosting@@AEAAJIPEAUtagRECT@@@Z.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x180480E94 (-StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *a3)
{
  __int64 *v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  unsigned int Ptr_high; // ebx
  int ViewRect; // eax
  __int64 v13; // rdx
  __int64 v14; // r11
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD, struct tagRECT *, _BYTE, __int128 *, char *); // r10
  unsigned __int64 v16; // r9
  unsigned int v17; // edx
  int v19; // [rsp+20h] [rbp-E0h]
  bool v20; // [rsp+40h] [rbp-C0h] BYREF
  char v21; // [rsp+41h] [rbp-BFh] BYREF
  _BYTE v22[2]; // [rsp+42h] [rbp-BEh] BYREF
  RTL_SRWLOCK v23; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v24; // [rsp+4Ch] [rbp-B4h]
  unsigned int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v28; // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v30; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v31[42]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v20 = 0;
  v5 = lambda_820239a8925460678c838e86e23650d6_::_lambda_820239a8925460678c838e86e23650d6_(
         (__int64 *)&v28.left,
         (__int64 *)this + 4,
         (__int64)&v20);
  wil::ScopeExit__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___((__int64)v27, v5);
  Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>((__int64 *)&v28.left);
  v23.Ptr = (PVOID)0xB00000000LL;
  v6 = KeyboardHosting::TabTipAdapter::InitializeViewInfosIfNeeded(this);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x656,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6,
      v19);
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, RTL_SRWLOCK *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v23);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x657,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7,
      v19);
  KeyboardHosting::TabTipAdapter::GetFirstViewTypeIfExists(
    this,
    LODWORD(v23.Ptr),
    (enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *)((char *)&v23.Ptr + 4));
  *(_QWORD *)v26 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         v26);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v22[0] = 0;
    v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, _BYTE *))(*(_QWORD *)a3 + 64LL))(
           a3,
           v22);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1629LL;
      goto LABEL_9;
    }
    Ptr_high = HIDWORD(v23.Ptr);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v31,
      (__int64)"OnInputAppRequestedResizeActivity");
    v31[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StartActivity(
      (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v31,
      (unsigned int)v23.Ptr,
      Ptr_high);
    v30 = 0LL;
    ViewRect = KeyboardHosting::TabTipAdapter::GetViewRect(this, LODWORD(v23.Ptr), &v30);
    v9 = ViewRect;
    if ( ViewRect >= 0 )
    {
      v21 = 0;
      v29 = 0LL;
      v14 = *((_QWORD *)this + 15);
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct tagRECT *, _BYTE, __int128 *, char *))(*(_QWORD *)v14 + 184LL);
      *(float *)&v28.left = (float)v30.left;
      *(float *)&v28.top = (float)v30.top;
      *(float *)&v28.right = (float)(v30.right - v30.left);
      *(float *)&v28.bottom = (float)(v30.bottom - v30.top);
      ViewRect = v15(v14, LODWORD(v23.Ptr), *(_QWORD *)v26, &v28, v22[0], &v29, &v21);
      v9 = ViewRect;
      if ( ViewRect >= 0 )
      {
        v30 = 0LL;
        v28.left = (int)*(float *)&v29;
        v28.top = (int)*((float *)&v29 + 1);
        v28.right = (int)(float)(*((float *)&v29 + 2) + *(float *)&v29);
        v28.bottom = (int)(float)(*((float *)&v29 + 3) + *((float *)&v29 + 1));
        ViewRect = KeyboardHosting::TabTipAdapter::FireInputPaneShowingEvent(this, (unsigned int)v23.Ptr, &v28, &v30);
        v9 = ViewRect;
        if ( ViewRect >= 0 )
        {
          v17 = 0;
          v24 = 0;
          v9 = 0;
          if ( v21 )
          {
            v28.left = (int)*(float *)&v29;
            v28.top = (int)*((float *)&v29 + 1);
            v28.right = (int)(float)(*((float *)&v29 + 2) + *(float *)&v29);
            v28.bottom = (int)(float)(*((float *)&v29 + 3) + *((float *)&v29 + 1));
            v17 = KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedResize(this, (unsigned int)v23.Ptr, &v28);
            v24 = v17;
            v20 = v17 == 0;
            v9 = v17;
          }
          v25 = HIDWORD(v23.Ptr);
          TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StopWithResult<unsigned int &,unsigned int,Windows::Foundation::Size &,unsigned char &,unsigned char &,long &>(
            (__int64)v31,
            v17,
            &v23,
            &v25,
            (__int64 *)v26,
            v22,
            &v21);
          if ( v9 >= 0 )
            goto LABEL_22;
          v16 = (unsigned int)v9;
          v13 = 1658LL;
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)v16);
LABEL_22:
          TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::~OnInputAppRequestedResizeActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v31);
          goto LABEL_23;
        }
        v13 = 1648LL;
      }
      else
      {
        v13 = 1644LL;
      }
    }
    else
    {
      v13 = 1634LL;
    }
    v16 = (unsigned int)ViewRect;
    goto LABEL_21;
  }
  v10 = 1627LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v8);
LABEL_23:
  wil::details::ScopeExitFn__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___::_ScopeExitFn__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___(v27);
  return (unsigned int)v9;
}
