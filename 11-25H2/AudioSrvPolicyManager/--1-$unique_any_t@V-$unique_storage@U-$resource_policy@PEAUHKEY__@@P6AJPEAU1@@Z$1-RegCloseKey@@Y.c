/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001FB34
 * Callers:
 *     _OpenSessionKey_::_1_::dtor$7 @ 0x18004C160 (_OpenSessionKey_--_1_--dtor$7.c)
 *     _ApplicationSpecificEndpointInfo::GetAppKey_::_1_::dtor$0 @ 0x18004C270 (_ApplicationSpecificEndpointInfo--GetAppKey_--_1_--dtor$0.c)
 *     _CWindowsPolicyManager::InitAccessibilityAudioSettings_::_1_::dtor$1 @ 0x18004CDDA (_CWindowsPolicyManager--InitAccessibilityAudioSettings_--_1_--dtor$1.c)
 *     _CreateLowRightsRegistryKey_::_1_::dtor$1 @ 0x18004DE3B (_CreateLowRightsRegistryKey_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$8 @ 0x18004E002 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$8.c)
 *     _ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints_::_1_::dtor$0 @ 0x18004E062 (_ApplicationSpecificEndpointInfo--LoadApplicationDefaultEndpoints_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LSTATUS __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(
        HKEY *a1)
{
  return wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(a1);
}
