/*
 * XREFs of ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x18047F130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18004E988 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18005508C (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18007FE1C (-GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E10BC (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C4CCC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$ShowRequestReceived@AEAIAEAIIAEAU?$atomic@_N@std@@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI0$$QEAIAEAU?$atomic@_N@std@@AEA_N3@Z @ 0x18047AF7C (--$ShowRequestReceived@AEAIAEAIIAEAU-$atomic@_N@std@@AEA_NAEA_N@TouchKeyboardExperienceTelemetry.c)
 *     ??$Start@$$V@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x18047B074 (--$Start@$$V@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@SA-AV01@XZ.c)
 *     ??1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18047BAE8 (--1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18047C074 (-CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@.c)
 *     ?CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18047C1F0 (-CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@I.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x18047FCC8 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAXW4SetVisibleSource@1@K_N1@Z @ 0x180684420 (-SendKeyboardSetVisible@IhmNotification@@YAXW4SetVisibleSource@1@K_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellRequestedShow(
        KeyboardHosting::TabTipAdapter *this,
        unsigned int a2,
        unsigned int a3)
{
  KeyboardHosting::TabTipAdapter *v3; // rsi
  int IsReady; // ebx
  __int64 v8; // rdx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64, _BYTE *, char *, int *, __int64 *); // rbx
  int v16; // eax
  int v17; // eax
  DWORD v18; // edx
  char v19; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[3]; // [rsp+41h] [rbp-BFh] BYREF
  int InputAppState; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v25[42]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v3 = (KeyboardHosting::TabTipAdapter *)((char *)this - 8);
  v23 = a2;
  LODWORD(v22) = a3;
  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((KeyboardHosting::TabTipAdapter *)((char *)this - 8));
  if ( IsReady < 0 )
  {
    v8 = 2090LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)IsReady);
    return (unsigned int)IsReady;
  }
  InputAppState = KeyboardHosting::TabTipAdapter::GetInputAppState((__int64)v3);
  v10 = InputAppState;
  TouchKeyboardExperienceTelemetryLogger::ShowRequestReceived<unsigned int &,unsigned int &,unsigned int,std::atomic<bool> &,bool &,bool &>(
    (__int64)&v23,
    (__int64)&v22,
    (__int64)&InputAppState,
    (__int64)this + 382);
  if ( v10 == 1 && std::_Atomic_storage<bool,1>::load((__int64)this + 382) )
  {
    if ( *((_BYTE *)this + 445) || !*((_BYTE *)this + 441) )
    {
      v13 = *((_QWORD *)this + 15);
      InputAppState = 0;
      IsReady = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v13 + 48LL))(v13, a3, &InputAppState);
      if ( IsReady < 0 )
      {
        v8 = 2107LL;
        goto LABEL_3;
      }
      if ( InputAppState != 1 )
      {
        IhmNotification::SendKeyboardSetVisible(0LL, 0LL, 0LL, 0LL);
        return 0LL;
      }
      v14 = *((_QWORD *)this + 14);
      v20[0] = 0;
      v19 = 0;
      v23 = 0;
      v22 = 0LL;
      v15 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *, char *, int *, __int64 *))(*(_QWORD *)v14 + 304LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      v16 = v15(v14, 5LL, v20, &v19, &v23, &v22);
      IsReady = v16;
      if ( v16 >= 0 )
      {
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::Start<>((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v25);
        v24 = v22;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
        v17 = KeyboardHosting::TabTipAdapter::ProcessShowRequestWithStoredData(v3);
        IsReady = v17;
        if ( v17 >= 0 )
        {
          wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
            v25,
            v18);
          TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v25);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x847,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v17);
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v25);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x844,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v16);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      return (unsigned int)IsReady;
    }
    LOBYTE(v11) = 1;
    IsReady = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(v3, v11, v12);
    if ( IsReady < 0 )
    {
      v8 = 2131LL;
      goto LABEL_3;
    }
    IsReady = KeyboardHosting::TabTipAdapter::CreateDeferredShowRequest((__int64)v3, a3, a2, 0);
    if ( IsReady < 0 )
    {
      v8 = 2135LL;
      goto LABEL_3;
    }
  }
  else
  {
    IsReady = KeyboardHosting::TabTipAdapter::CreatePendingShowRequest((__int64)v3, a3, a2, 0);
    if ( IsReady < 0 )
    {
      v8 = 2141LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
