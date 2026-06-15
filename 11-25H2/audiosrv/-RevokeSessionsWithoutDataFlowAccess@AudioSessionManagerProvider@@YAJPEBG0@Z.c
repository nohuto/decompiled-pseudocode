/*
 * XREFs of ?RevokeSessionsWithoutDataFlowAccess@AudioSessionManagerProvider@@YAJPEBG0@Z @ 0x1800C8540
 * Callers:
 *     ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800C80D4 (-HandleAccessChangeNotification@@YAJPEBG0@Z.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18002141C (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _lambda_cd6f2b70438ec48af9647ef981891005_::_lambda_cd6f2b70438ec48af9647ef981891005_ @ 0x1800C232C (_lambda_cd6f2b70438ec48af9647ef981891005_--_lambda_cd6f2b70438ec48af9647ef981891005_.c)
 *     std::function_long___cdecl(wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&)_::function_long___cdecl(wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&)___lambda_10a1a3556bb16ca1ed32eceff650c844__0_ @ 0x1800C7CB0 (std--function_long___cdecl(wil--com_ptr_t_CEndpointStore_wil--err_returncode_policy__-)_--functi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess(
        AudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  _QWORD *v3; // rax
  void *v4; // rcx
  _BYTE *v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v8[56]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE *v9; // [rsp+68h] [rbp-20h]
  AudioSessionManagerProvider *v10; // [rsp+90h] [rbp+8h] BYREF
  const unsigned __int16 *v11; // [rsp+98h] [rbp+10h] BYREF

  v11 = a2;
  v10 = this;
  v3 = lambda_cd6f2b70438ec48af9647ef981891005_::_lambda_cd6f2b70438ec48af9647ef981891005_(
         &v7,
         (__int64)&v10,
         (__int64)&v11);
  std::function_long___cdecl_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy_____::function_long___cdecl_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy_______lambda_10a1a3556bb16ca1ed32eceff650c844__0_(
    (__int64)v8,
    v3);
  CEndpointStoreCache::ForEachEndpoint(v4, (__int64)v8);
  if ( v9 )
  {
    v5 = v8;
    LOBYTE(v5) = v9 != v8;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v9 + 32LL))(v9, v5);
  }
  return 0LL;
}
