/*
 * XREFs of ??1?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D0BD8
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ImmersiveMonitorHelper_ImmersiveMonitorHelper_IServiceProvider___&_IXamlLauncherState____::_1_::dtor$1 @ 0x1806CDF03 (_Microsoft--WRL--Details--MakeAndInitialize_ImmersiveMonitorHelper_ImmersiveMonitorHelper_IServi.c)
 *     _XamlLauncher::XamlLauncher_::_1_::dtor$9 @ 0x1806EC1DD (_XamlLauncher--XamlLauncher_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::~ComPtr<ImmersiveMonitorHelper>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease(a1);
}
