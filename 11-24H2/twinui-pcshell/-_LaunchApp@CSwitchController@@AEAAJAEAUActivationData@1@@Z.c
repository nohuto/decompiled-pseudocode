/*
 * XREFs of ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x18022136C
 * Callers:
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1801CB650 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x1804E8460 (-_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelay.c)
 */

__int64 __fastcall CSwitchController::_LaunchApp(CSwitchController *this, struct CSwitchController::ActivationData *a2)
{
  struct IDelayedAppActivation *v2; // r8
  __int64 result; // rax

  v2 = (struct IDelayedAppActivation *)*((_QWORD *)a2 + 3);
  result = 0LL;
  if ( v2 )
    return CSwitchController::_PerformDelayedActivationInternal(
             this,
             *((struct IImmersiveApplication **)a2 + 2),
             v2,
             0LL);
  return result;
}
