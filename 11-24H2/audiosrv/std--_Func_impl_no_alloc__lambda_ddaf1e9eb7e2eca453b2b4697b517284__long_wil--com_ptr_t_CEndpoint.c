/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ddaf1e9eb7e2eca453b2b4697b517284__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x180062590
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800625BC (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_ddaf1e9eb7e2eca453b2b4697b517284__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy____::_Do_call(
        __int64 a1,
        __int64 a2)
{
  _BYTE *v2; // r8

  v2 = *(_BYTE **)(a1 + 8);
  LOBYTE(v2) = *v2;
  CAudioSessionManager::Disconnect(*(_QWORD *)(*(_QWORD *)a2 + 96LL), 6LL, v2);
  return 0LL;
}
