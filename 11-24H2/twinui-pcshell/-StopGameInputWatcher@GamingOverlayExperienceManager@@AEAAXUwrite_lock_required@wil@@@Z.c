/*
 * XREFs of ?StopGameInputWatcher@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035C460
 * Callers:
 *     ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18035C7D4 (-StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E290 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035C618 (-StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x18035FEC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprove_ea_18035FEC0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GamingOverlayExperienceManager::StopGameInputWatcher(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = (__int64 *)(a1 + 248);
  v3 = *(_QWORD *)(a1 + 248);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 256);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 104LL))(v3, v4, -1LL);
      *(_QWORD *)(a1 + 256) = 0LL;
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
        GamingOverlayExperienceManager::StopShortPressTimer(a1);
    }
  }
  Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(v1);
  *(_QWORD *)(a1 + 272) = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    (HMODULE *)(a1 + 264),
    0LL);
}
