/*
 * XREFs of ??1?$unordered_map@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@5@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@QEAA@XZ @ 0x18007236C
 * Callers:
 *     _CAudioSessionManager::NotifySessionAudioProtocol_::_1_::dtor$1 @ 0x180168E0F (_CAudioSessionManager--NotifySessionAudioProtocol_--_1_--dtor$1.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$5 @ 0x18016BDC0 (_CAudioSessionManager--Disconnect_--_1_--dtor$5.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$7 @ 0x18016BDE4 (_CAudioSessionManager--Disconnect_--_1_--dtor$7.c)
 *     _CAudioSessionManager::DisconnectSessionsForTsSession_::_1_::dtor$1 @ 0x18016DDCB (_CAudioSessionManager--DisconnectSessionsForTsSession_--_1_--dtor$1.c)
 *     _CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$1 @ 0x18016DE19 (_CAudioSessionManager--RevokeSessionsWithoutDataFlowAccess_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::~unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>(
        __int64 *a1)
{
  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::~_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>(a1);
}
