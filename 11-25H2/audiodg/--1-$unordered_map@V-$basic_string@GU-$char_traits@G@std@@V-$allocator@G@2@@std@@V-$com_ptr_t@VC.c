/*
 * XREFs of ??1?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x140061B4C
 * Callers:
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$3 @ 0x140093EF5 (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$3.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$10 @ 0x140093FA1 (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<std::wstring,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>>::~unordered_map<std::wstring,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>>(
        __int64 *a1)
{
  std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>>,0>>::~_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>>,0>>(a1);
}
