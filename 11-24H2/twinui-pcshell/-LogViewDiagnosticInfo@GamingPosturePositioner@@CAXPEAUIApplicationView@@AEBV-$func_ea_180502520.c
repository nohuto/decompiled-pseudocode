/*
 * XREFs of ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@@Z@std@@@Z @ 0x180502520
 * Callers:
 *     _lambda_1c7927ef699b7e1a5db16bb78f566198_::operator() @ 0x1804F90AC (_lambda_1c7927ef699b7e1a5db16bb78f566198_--operator().c)
 *     ?AllowClose@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAE@Z @ 0x1804FA290 (-AllowClose@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAE@Z.c)
 *     ?ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804FB790 (-ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITION.c)
 *     ?ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804FBB10 (-ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUn.c)
 *     ?GetChromeConfigurationForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804FE650 (-GetChromeConfigurationForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIA.c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x180500E88 (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180501A00 (-InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPrese.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@KK@Z@std@@@Z @ 0x1805025B0 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_1805025B0.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805032C0 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z @ 0x180505828 (-ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z.c)
 *     ?ReleaseSecondaryView@GamingPosturePositioner@@AEAAXXZ @ 0x180505A6C (-ReleaseSecondaryView@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?ResizeView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180506800 (-ResizeView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x18050699C (-SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z @ 0x18036A180 (--0-$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_8c8d8a0fec920bf09b1ee4078e580ac3__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long___lambda_8c8d8a0fec920bf09b1ee4078e580ac3___ @ 0x1804F7DFC (std--_Global_new_std--_Func_impl_no_alloc__lambda_8c8d8a0fec920bf09b1ee4078e580ac3__void_HWND___.c)
 *     _lambda_8c8d8a0fec920bf09b1ee4078e580ac3_::__lambda_8c8d8a0fec920bf09b1ee4078e580ac3_ @ 0x1804F8B88 (_lambda_8c8d8a0fec920bf09b1ee4078e580ac3_--__lambda_8c8d8a0fec920bf09b1ee4078e580ac3_.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1K@Z@std@@@Z @ 0x180502394 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$function@$$A6AXPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingPosturePositioner::LogViewDiagnosticInfo(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 a2)
{
  __int64 v3; // rdx
  _BYTE *v4; // rdx
  _BYTE v6[56]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp-60h]
  _BYTE v8[64]; // [rsp+60h] [rbp-58h] BYREF

  std::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>(
    (__int64)v8,
    a2);
  v7 = std::_Global_new_std::_Func_impl_no_alloc__lambda_8c8d8a0fec920bf09b1ee4078e580ac3__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long___lambda_8c8d8a0fec920bf09b1ee4078e580ac3___((__int64)v8);
  GamingPosturePositioner::LogViewDiagnosticInfo(this, (__int64)v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != (_QWORD *)v6;
    (*(void (__fastcall **)(_QWORD *, _BYTE *))(*v7 + 32LL))(v7, v4);
  }
  return lambda_8c8d8a0fec920bf09b1ee4078e580ac3_::__lambda_8c8d8a0fec920bf09b1ee4078e580ac3_((__int64)v8, v3);
}
