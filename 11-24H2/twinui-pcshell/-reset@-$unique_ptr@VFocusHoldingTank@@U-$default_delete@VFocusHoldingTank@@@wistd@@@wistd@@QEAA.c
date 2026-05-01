/*
 * XREFs of ?reset@?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAXPEAVFocusHoldingTank@@@Z @ 0x1801468D0
 * Callers:
 *     ??1XamlLauncher@@UEAA@XZ @ 0x18014525C (--1XamlLauncher@@UEAA@XZ.c)
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x180145470 (--1XamlLauncherState@@UEAA@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180145E20 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x1801C6370 (-OnLauncherShow@XamlLauncher@@UEAAXXZ.c)
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18024D6C0 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180251010 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??1?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA@XZ @ 0x1802D0354 (--1-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x18045EEC8 (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 * Callees:
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x18046287C (--1FocusHoldingTank@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::reset(
        FocusHoldingTank **a1,
        FocusHoldingTank *a2)
{
  FocusHoldingTank *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    FocusHoldingTank::~FocusHoldingTank(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x18);
  }
}
