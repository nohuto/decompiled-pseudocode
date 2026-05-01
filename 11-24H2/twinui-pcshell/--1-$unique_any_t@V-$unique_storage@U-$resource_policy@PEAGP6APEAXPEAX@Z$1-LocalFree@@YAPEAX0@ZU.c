/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1802CF508
 * Callers:
 *     _StartDocked::PrecreateStartMenuConfigRegKey_::_1_::dtor$0 @ 0x1806CD8BB (_StartDocked--PrecreateStartMenuConfigRegKey_--_1_--dtor$0.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$0 @ 0x1806CD919 (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$0.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$5 @ 0x1806CD973 (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$5.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$8 @ 0x1806CD985 (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$8.c)
 *     _KioskPositioner::GetUserSidString_::_1_::dtor$1 @ 0x1806D9F69 (_KioskPositioner--GetUserSidString_--_1_--dtor$1.c)
 *     _wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short___void___(__cdecl_)(void__)_&LocalFree_wistd::integral_constant_unsigned___int64_0__unsigned_short___unsigned_short___0_std::nullptr_t________::_1_::dtor$0 @ 0x1806F3617 (_wil--make_unique_string_wil--unique_any_t_wil--details--unique_storage_wil--detail_ea_1806F3617.c)
 *     _TryGetCertSubjectName_::_1_::dtor$4 @ 0x1806F36DD (_TryGetCertSubjectName_--_1_--dtor$4.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$2 @ 0x180700003 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetCompatJsonF_ea_180700003.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$2 @ 0x18070010D (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--JsonFileBelong_ea_18070010D.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession_::_1_::dtor$1 @ 0x180702235 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--SetIsImmersiveR.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HLOCAL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  return wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(a1);
}
