/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIShouldSwitchToDesktop@@UILayoutPreferencesOnAppLaunch@@UIExecuteCommandHost@@UILocalCopyDownloadSettings@@UIWakeOnRPCCalls@@UILaunchTargetMonitor@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803A2200
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@UIServiceProvider@@UIShouldSwitchToDesktop@@UILayoutPreferencesOnAppLaunch@@UIExecuteCommandHost@@UILocalCopyDownloadSettings@@UIWakeOnRPCCalls@@UILaunchTargetMonitor@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803A3C40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1803A3C40.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DB8C4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIUpdateViewValueSet@@V.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  const struct _GUID *v6; // rcx
  void **v7; // r8
  unsigned int v8; // r9d
  void *v9; // r11
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  const struct _GUID *v12; // rcx
  __int64 v13; // r10

  if ( InlineIsEqualGUID(a2, &GUID_23710692_92e0_4a33_a781_a81596a4cd7d) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_e5249a4e_d659_4443_a969_cb3fb223848c)
      || InlineIsEqualGUID(v6, &GUID_4b6832a2_5f04_4c9d_b89d_727a15d103e7)
      || InlineIsEqualGUID(v10, &GUID_667708d1_a931_4a85_9999_609eaa7dd85a)
      || InlineIsEqualGUID(v11, &GUID_728e9d41_2d68_4714_99bd_fae3742125d5)
      || InlineIsEqualGUID(v12, &GUID_266fbc7e_490d_46ed_a96b_2274db252003) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::CanCastTo(
                             (__int64)v9 + 8,
                             v13,
                             v7);
    }
    return v8;
  }
}
