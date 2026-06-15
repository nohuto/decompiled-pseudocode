/*
 * XREFs of ?UninitializeMulticastSessionManager@@YAXPEAUIMulticastSessionManager@@@Z @ 0x1800FD7E8
 * Callers:
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800CF868 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?clear@?$forward_list@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800FD900 (-clear@-$forward_list@V-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UninitializeMulticastSessionManager(struct IMulticastSessionManager *a1)
{
  char *v1; // rdi
  __int64 **i; // rbx

  if ( a1 == s_MulticastSessionManager && s_MulticastSessionManager )
  {
    v1 = (char *)s_MulticastSessionManager + 24;
    for ( i = (__int64 **)*((_QWORD *)s_MulticastSessionManager + 3); i; i = (__int64 **)*i )
      (*(void (__fastcall **)(__int64 *))(*i[1] + 88))(i[1]);
    std::forward_list<wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>>::clear(v1);
  }
}
