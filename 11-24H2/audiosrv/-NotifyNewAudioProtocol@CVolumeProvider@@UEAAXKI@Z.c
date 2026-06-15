/*
 * XREFs of ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x180029380
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x1800299BC (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_ @ 0x1800B4E3C (_lambda_a8a3ec141be49a0429a3d190c13e56dc_--_lambda_a8a3ec141be49a0429a3d190c13e56dc_.c)
 *     std::function_long___cdecl(wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&)_::function_long___cdecl(wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&)___lambda_7c2c063609ae8016806722fab4a47c97__0_ @ 0x180116464 (std--function_long___cdecl(wil--com_ptr_t_CEndpointStore_wil--err_returncode_policy_ea_180116464.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVolumeProvider::NotifyNewAudioProtocol(CVolumeProvider *this, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _BYTE *v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v7[56]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE *v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+98h] [rbp+10h] BYREF
  int v10; // [rsp+A0h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  v3 = lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_(&v6, &v9, &v10);
  std::function_long___cdecl_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy_____::function_long___cdecl_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy_______lambda_7c2c063609ae8016806722fab4a47c97__0_(
    v7,
    v3);
  CEndpointStoreCache::ForEachEndpoint(v4, v7);
  if ( v8 )
  {
    v5 = v7;
    LOBYTE(v5) = v8 != v7;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v5);
  }
}
