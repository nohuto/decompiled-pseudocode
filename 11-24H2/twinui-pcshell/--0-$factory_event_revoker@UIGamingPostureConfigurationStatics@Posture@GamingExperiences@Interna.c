/*
 * XREFs of ??0?$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@$MP8type@?$abi@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@AEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@2@Uevent_token@2@@Z @ 0x18033A3E8
 * Callers:
 *     ?ConfigurationChanged@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA@Uauto_revoke_t@6@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@56@@Z @ 0x180369158 (-ConfigurationChanged@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winr.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall __0__factory_event_revoker_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt___MP8type___abi_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_AEBUIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_2_Uevent_token_2__Z(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  a1[1] = a3;
  return a1;
}
