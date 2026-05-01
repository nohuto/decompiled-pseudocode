/*
 * XREFs of ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@@012@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x1802C6F48
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BAD30 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x18014692C (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ImmersiveMonitorHelper,ImmersiveMonitorHelper,IServiceProvider * &,IXamlLauncherState *>(
        volatile int **a1,
        struct IServiceProvider **a2,
        struct IXamlLauncherState **a3)
{
  Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<ImmersiveMonitorHelper,ImmersiveMonitorHelper,IServiceProvider * &,IXamlLauncherState *>(
           (ImmersiveMonitorHelper **)a1,
           a2,
           a3);
}
