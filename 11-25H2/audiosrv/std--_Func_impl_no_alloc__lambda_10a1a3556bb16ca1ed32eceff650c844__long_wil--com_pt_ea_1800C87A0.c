/*
 * XREFs of std::_Func_impl_no_alloc__lambda_10a1a3556bb16ca1ed32eceff650c844__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800C87A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C7464 (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconn.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_10a1a3556bb16ca1ed32eceff650c844__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy____::_Do_call(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  bool v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_QWORD *)(*(_QWORD *)a2 + 96LL);
  if ( *(_DWORD *)(v3 + 280) == 1 )
  {
    v4 = CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess(
           v3,
           **(const unsigned __int16 ***)(a1 + 8),
           **(const unsigned __int16 ***)(a1 + 16),
           a1,
           v6);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        227LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v4);
  }
  return 0LL;
}
