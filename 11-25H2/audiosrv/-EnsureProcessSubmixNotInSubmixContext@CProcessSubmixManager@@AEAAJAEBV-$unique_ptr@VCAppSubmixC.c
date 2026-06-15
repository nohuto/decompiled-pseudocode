/*
 * XREFs of ?EnsureProcessSubmixNotInSubmixContext@CProcessSubmixManager@@AEAAJAEBV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@PEAUIProcessSubmixProxy@@@Z @ 0x18009EDA4
 * Callers:
 *     _lambda_4353f9e11044a5b317e93e9c877fb0e4_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x180087A1C (_lambda_4353f9e11044a5b317e93e9c877fb0e4_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 * Callees:
 *     ??$_Erase@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@AEAA_KAEBV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18009EE54 (--$_Erase@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_Uset.c)
 *     std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_034c87b344bb69cb11fef3b63041d359___ @ 0x1800B0958 (std--for_each_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixManager::EnsureProcessSubmixNotInSubmixContext(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  _QWORD v10[4]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v11[56]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+88h] [rbp+10h] BYREF
  __int64 v13; // [rsp+90h] [rbp+18h] BYREF

  v13 = a3;
  v6 = *a2;
  v12 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v7 = std::_Hash<std::_Uset_traits<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,0>>::_Erase<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
         v6 + 24,
         &v12);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  if ( v7 )
  {
    v8 = *a2;
    v10[0] = a1;
    v10[1] = &v13;
    v10[2] = a2;
    ((void (__fastcall *)(_BYTE *, _QWORD, _QWORD, _QWORD *))std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_034c87b344bb69cb11fef3b63041d359___)(
      v11,
      *(_QWORD *)(v8 + 88),
      *(_QWORD *)(v8 + 96),
      v10);
  }
  return 0LL;
}
