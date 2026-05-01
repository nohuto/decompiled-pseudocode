/*
 * XREFs of ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x1800F30C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800F32CC (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApp.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800F3474 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithS.c)
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1801C1550 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::PearlRectMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  HRESULT v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  void *v9; // rcx
  IUnknown *v11; // rcx
  void *v12; // rcx
  int CortanaVisibleMonitor; // edi
  __int64 v14; // rdx
  void *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  void *ppvOut; // [rsp+30h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 43);
  if ( !v4 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4) )
  {
    ppvOut = 0LL;
    CortanaVisibleMonitor = XamlLauncher::GetCortanaVisibleMonitor(
                              (XamlLauncher *)((char *)this + 32),
                              (HMONITOR *)&ppvOut);
    if ( CortanaVisibleMonitor < 0 )
    {
      v14 = 561LL;
    }
    else
    {
      if ( a2 != ppvOut )
        goto LABEL_3;
      CortanaVisibleMonitor = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 152LL))(*((_QWORD *)this + 18));
      if ( CortanaVisibleMonitor >= 0 )
        goto LABEL_3;
      v14 = 564LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)CortanaVisibleMonitor);
    return (unsigned int)CortanaVisibleMonitor;
  }
LABEL_3:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  ppvOut = 0LL;
  v5 = *(_QWORD *)&GUID_749f2714_937d_445e_9d22_666f49e7ff32.Data1 - *(_QWORD *)&SID_ImmersiveLauncher.Revision;
  if ( *(_QWORD *)&GUID_749f2714_937d_445e_9d22_666f49e7ff32.Data1 == *(_QWORD *)&SID_ImmersiveLauncher.Revision )
    v5 = *(_QWORD *)GUID_749f2714_937d_445e_9d22_666f49e7ff32.Data4 - *(_QWORD *)SID_ImmersiveLauncher.SubAuthority;
  if ( v5 )
  {
    v11 = (IUnknown *)*((_QWORD *)this - 2);
    if ( !v11 )
    {
      v7 = -2147467262;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23B,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)v7);
      v12 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      return v7;
    }
    v6 = IUnknown_QueryService(
           v11,
           &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
           &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
           &ppvOut);
  }
  else
  {
    v6 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>>(
           (char *)this - 32,
           &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
           &ppvOut);
  }
  v7 = v6;
  if ( v6 < 0 )
    goto LABEL_14;
  v8 = (*(__int64 (__fastcall **)(void *, HMONITOR))(*(_QWORD *)ppvOut + 40LL))(ppvOut, a2);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23C,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v8);
    v15 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return v7;
  }
  v9 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
