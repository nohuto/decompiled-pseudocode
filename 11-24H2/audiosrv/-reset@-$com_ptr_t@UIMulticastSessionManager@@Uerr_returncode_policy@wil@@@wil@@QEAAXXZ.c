/*
 * XREFs of ?reset@?$com_ptr_t@UIMulticastSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D0E88
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800D0124 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800D092C (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 wil::com_ptr_t<IMulticastSessionManager,wil::err_returncode_policy>::reset()
{
  struct IMulticastSessionManager *v0; // rcx
  __int64 result; // rax

  v0 = g_MulticastSessionManager;
  g_MulticastSessionManager = 0LL;
  if ( v0 )
    return (*(__int64 (__fastcall **)(struct IMulticastSessionManager *))(*(_QWORD *)v0 + 16LL))(v0);
  return result;
}
