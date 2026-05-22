/*
 * XREFs of ??$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180156CA4
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180087F00 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x180158118 (-ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18000CDE4 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D738 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x1800799C4 (-IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z.c)
 *     ?IsTestSigningEnabled@KernelContextProvider@@SA_NXZ @ 0x1801088D4 (-IsTestSigningEnabled@KernelContextProvider@@SA_NXZ.c)
 *     ??$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180156BC4 (--$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchpadPublicApis@@@details@wil@@QEAA_NXZ @ 0x180158ED4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchpadPublicApis@@@details@wil@.c)
 */

bool __fastcall ShouldSelectClient<ShellGesturesClientProxy>(__int64 a1)
{
  KernelContextProvider *Instance; // rax
  char v3; // di
  int ProcessId; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx

  Instance = KernelContextProvider::GetInstance();
  v3 = 0;
  if ( !KernelContextProvider::IsDesktopAllowed(Instance, *(_QWORD *)(a1 + 176)) )
    return 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchpadPublicApis>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TouchpadPublicApis>::GetImpl'::`2'::impl) )
  {
    if ( IsShellClient<ShellGesturesClientProxy>(a1) )
      return 1;
    ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(a1 + 32)
                                                                                              + 16LL));
    if ( ProcessId == *((_DWORD *)ISMStatics::GetForegroundManager() + 56) )
      return 1;
    return v3;
  }
  else
  {
    return IsShellClient<ShellGesturesClientProxy>(a1) || KernelContextProvider::IsTestSigningEnabled(v7, v6) != 0;
  }
}
