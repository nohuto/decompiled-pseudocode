/*
 * XREFs of ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18049EB00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x18001A78C (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801440F8 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AppWindow@?$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CA8E4 (-AppWindow@-$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapCom.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1801F4FA4 (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A6EC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$InputGestureOperationStarted@_K@MultitaskingViewTelemetry@@SAX$$QEA_K@Z @ 0x18049B33C (--$InputGestureOperationStarted@_K@MultitaskingViewTelemetry@@SAX$$QEA_K@Z.c)
 *     ??4?$function@$$A6AXPEAUHWND__@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18049C6BC (--4-$function@$$A6AXPEAUHWND__@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@@Z @ 0x18049EA30 (-InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA-AUfire_and_forget@winrt@@UInputGest.c)
 *     ?Position@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18049F1B4 (-Position@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Inp.c)
 *     ?HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ @ 0x1804A82B0 (-HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ.c)
 *     ?StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x1804ABA50 (-StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA-AUfire_and_forget@winrt@@UInputGestu.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall MultitaskingViewGestureHandler::InputGestureOperationStarted(
        MultitaskingViewGestureHandler *this,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperation *a2,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs *a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r13d
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, _DWORD *, GUID *, GUID *); // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rbx
  _QWORD *v16; // r15
  CAppThumbnailWindow *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  int *v20; // [rsp+20h] [rbp-79h]
  _BYTE v21[8]; // [rsp+30h] [rbp-69h] BYREF
  int v22[2]; // [rsp+38h] [rbp-61h] BYREF
  __int64 v23; // [rsp+40h] [rbp-59h] BYREF
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  _DWORD v25[2]; // [rsp+50h] [rbp-49h] BYREF
  CAppThumbnailWindow *v26; // [rsp+58h] [rbp-41h] BYREF
  std::_Ref_count_base *v27; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall **v28)(); // [rsp+70h] [rbp-29h] BYREF
  MultitaskingViewGestureHandler *v29; // [rsp+78h] [rbp-21h]
  __int64 (__fastcall ***v30)(); // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v23 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow((__int64 *)a2);
  MultitaskingViewTelemetry::InputGestureOperationStarted<unsigned __int64>(&v23);
  v6 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow((__int64 *)a2);
  if ( v6 == 4 )
  {
    *(_QWORD *)v22 = *(_QWORD *)a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v22);
    MultitaskingViewGestureHandler::InitiateSwipeDownAsync((__int64)this, v21, (__int64 *)v22, (__int64)a3);
  }
  else if ( v6 == 6 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
      1u,
      v7,
      v8);
    *((_DWORD *)this + 57) = 0;
    *((_BYTE *)this + 224) = 0;
    v9 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
           *((_DWORD *)this + 32),
           *((_DWORD *)this + 33));
    *(_QWORD *)v22 = 0LL;
    v25[0] = (int)*(float *)winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::Position(
                              a2,
                              &v23);
    v25[1] = (int)*(float *)(winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::Position(
                               a2,
                               &v23)
                           + 4);
    v10 = *((_QWORD *)this + 5);
    v11 = *(int (__fastcall **)(__int64, _DWORD *, GUID *, GUID *))(*(_QWORD *)v10 + 96LL);
    *(_QWORD *)v22 = 0LL;
    v20 = v22;
    if ( v11(v10, v25, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000) < 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgs(v13, v12);
    }
    else
    {
      v23 = 0LL;
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v22 + 40LL))(*(_QWORD *)v22, &v23);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x424,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v14,
          (int)v22);
      v15 = (_QWORD *)*((_QWORD *)this + 12);
      v16 = (_QWORD *)*((_QWORD *)this + 13);
      while ( v15 != v16 )
      {
        std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v26, v15);
        v17 = v26;
        if ( v23 == *((_QWORD *)v26 + 19) && CAppThumbnailWindow::HasSwitchAnimationVisuals(v26) )
        {
          v28 = off_180744860;
          v29 = this;
          v30 = &v28;
          std::function<void (HWND__ *)>::operator=((__int64)v17 + 256, (__int64)&v28);
          std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
            (__int64)&v28,
            v18);
          v28 = off_1807448C0;
          v29 = this;
          v30 = &v28;
          std::function<void (void)>::operator=((__int64)v17 + 320, (__int64)&v28);
          std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
            (__int64)&v28,
            v19);
          v24 = *(_QWORD *)a2;
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v24);
          LODWORD(v20) = v9;
          CAppThumbnailWindow::StartSwitchGestureOperationAsync(v17, v21, &v24, a3, v20);
          *((_BYTE *)this + 248) = 1;
          if ( v27 )
            std::_Ref_count_base::_Decref(v27);
          break;
        }
        if ( v27 )
          std::_Ref_count_base::_Decref(v27);
        v15 += 2;
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v22);
  }
}
