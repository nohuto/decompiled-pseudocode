/*
 * XREFs of ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18024C0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18024BE7C (-OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60316624@@@details@wil@@QEAA_NXZ @ 0x180461830 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60316624@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall XamlLauncher::OnShellHookMessage(XamlLauncher *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_60316624>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60316624>::GetImpl'::`2'::impl)
    && (unsigned int)IsGamingFullScreenExperienceActive()
    && !*((_BYTE *)this + 313) )
  {
    return 0LL;
  }
  v2 = XamlLauncher::OnHotkeyInvoke((__int64)this - 40, 0);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x251,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
