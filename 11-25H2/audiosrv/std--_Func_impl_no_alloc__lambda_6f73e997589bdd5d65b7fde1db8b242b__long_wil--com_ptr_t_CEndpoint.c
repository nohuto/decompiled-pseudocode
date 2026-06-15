/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6f73e997589bdd5d65b7fde1db8b242b__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x18007E190
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x18001BC80 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_6f73e997589bdd5d65b7fde1db8b242b__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy____::_Do_call(
        __int64 a1,
        __int64 a2)
{
  CAudioSessionManager::NotifySessionAudioProtocol(
    *(CAudioSessionManager **)(*(_QWORD *)a2 + 96LL),
    **(_DWORD **)(a1 + 8),
    **(_DWORD **)(a1 + 16));
  return 0LL;
}
