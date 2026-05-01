/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1801B0614
 * Callers:
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801B056C (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x1801B05B0 (-OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1802C80D0 (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180375E10 (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18037F7D0 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     _lambda_4ee573ed042d32c95488124445e11824_::_lambda_invoker_cdecl_ @ 0x180393530 (_lambda_4ee573ed042d32c95488124445e11824_--_lambda_invoker_cdecl_.c)
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803AC8B0 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 *     _lambda_6699240da0a68d9d394aec2180beabac_::_lambda_invoker_cdecl_ @ 0x1803C7100 (_lambda_6699240da0a68d9d394aec2180beabac_--_lambda_invoker_cdecl_.c)
 *     _lambda_0067bd9aa33ad13e926afd551e4fdf43_::_lambda_invoker_cdecl_ @ 0x180463230 (_lambda_0067bd9aa33ad13e926afd551e4fdf43_--_lambda_invoker_cdecl_.c)
 *     _lambda_0c04be89618eb1c6bd4b6a0e21fb1f7d_::_lambda_invoker_cdecl_ @ 0x1804632A0 (_lambda_0c04be89618eb1c6bd4b6a0e21fb1f7d_--_lambda_invoker_cdecl_.c)
 *     _lambda_3f9fd291c55c0ef48dfd8ff77bf604da_::_lambda_invoker_cdecl_ @ 0x1804632E0 (_lambda_3f9fd291c55c0ef48dfd8ff77bf604da_--_lambda_invoker_cdecl_.c)
 *     _lambda_ff14144e5cc96cece52ab649c88fa0a0_::_lambda_invoker_cdecl_ @ 0x1804633C0 (_lambda_ff14144e5cc96cece52ab649c88fa0a0_--_lambda_invoker_cdecl_.c)
 *     _lambda_0626de440c78481aee3a105a683b2c14_::operator() @ 0x180464A4C (_lambda_0626de440c78481aee3a105a683b2c14_--operator().c)
 *     _lambda_756d4adb7fd56c73e89d8859b5121e61_::operator() @ 0x180464B3C (_lambda_756d4adb7fd56c73e89d8859b5121e61_--operator().c)
 *     _lambda_c6c89771eee05407d4e63fb8333a789d_::operator() @ 0x180464CAC (_lambda_c6c89771eee05407d4e63fb8333a789d_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1801B0838 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall ExperienceManagerUtils::PostToUIThread(ExperienceManagerUtils *this, struct IUnknown *a2, void *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(this, a2, 0LL, (unsigned int)a3, v6);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
