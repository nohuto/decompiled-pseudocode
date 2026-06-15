/*
 * XREFs of ?GetTsSessionId@CAudioSession@@UEAAKXZ @ 0x180083BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180025F28 (-_Tidy@-$vector@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800A3F94 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::GetTsSessionId(CAudioSession *this)
{
  unsigned int v1; // ebx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v3 = 0LL;
  CAudioSession::GetOwningProcesses((char *)this - 8, &v3);
  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 48LL))(*(_QWORD *)v3);
  std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Tidy((__int64)&v3);
  return v1;
}
