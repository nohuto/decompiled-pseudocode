/*
 * XREFs of ?GetSubmixHelper@DeviceGraphStore@@YAJAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800FA798
 * Callers:
 *     ?GetFilteredSubmixes@DeviceGraphStore@@YAJKW4ProcessSubmixCapture@@KAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@@Z @ 0x1800FA41C (-GetFilteredSubmixes@DeviceGraphStore@@YAJKW4ProcessSubmixCapture@@KAEAV-$unordered_set@V-$com_p.c)
 *     ?GetSubmixesForApplication@DeviceGraphStore@@YAJPEBGKAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@@Z @ 0x1800FA848 (-GetSubmixesForApplication@DeviceGraphStore@@YAJPEBGKAEAV-$unordered_set@V-$com_ptr_t@UIProcessS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x1800299BC (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_ @ 0x1800B4E3C (_lambda_a8a3ec141be49a0429a3d190c13e56dc_--_lambda_a8a3ec141be49a0429a3d190c13e56dc_.c)
 *     std::function_long___cdecl(wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&)_::function_long___cdecl(wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&)___lambda_0d142282e693a5da8305741b2fcbdc74__0_ @ 0x1800F9020 (std--function_long___cdecl(wil--com_ptr_t_CEndpointStore_wil--err_returncode_policy_ea_1800F9020.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall DeviceGraphStore::GetSubmixHelper(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  void *v3; // rcx
  int v4; // ebx
  _BYTE *v5; // rdx
  _QWORD v7[3]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v8[56]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE *v9; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_(v7, a2, a1);
  std::function_long___cdecl_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy_____::function_long___cdecl_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy_______lambda_0d142282e693a5da8305741b2fcbdc74__0_(
    (__int64)v8,
    v2);
  v4 = CEndpointStoreCache::ForEachEndpoint(v3, (__int64)v8);
  if ( v9 )
  {
    v5 = v8;
    LOBYTE(v5) = v9 != v8;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v9 + 32LL))(v9, v5);
  }
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x350,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
