/*
 * XREFs of _lambda_9bfc867a9c7100a4740d0e4b48179e18_::__lambda_9bfc867a9c7100a4740d0e4b48179e18_ @ 0x1806CB95C
 * Callers:
 *     _CLauncherTipContextMenu::_EnsureMenu_::_1_::dtor$2 @ 0x1806DE3E5 (_CLauncherTipContextMenu--_EnsureMenu_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141EC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180141EC0.c)
 */

__int64 __fastcall lambda_9bfc867a9c7100a4740d0e4b48179e18_::__lambda_9bfc867a9c7100a4740d0e4b48179e18_(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>::Release(
             result,
             a2);
  }
  return result;
}
