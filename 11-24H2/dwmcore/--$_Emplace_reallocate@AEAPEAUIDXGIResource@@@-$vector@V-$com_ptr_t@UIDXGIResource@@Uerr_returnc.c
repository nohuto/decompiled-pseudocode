/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAUIDXGIResource@@@Z @ 0x1801A4C94
 * Callers:
 *     ??$emplace_back@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAUIDXGIResource@@@Z @ 0x1801A4008 (--$emplace_back@AEAPEAUIDXGIResource@@@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_pol.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180041D40 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801A4B20 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1801A4D94 (-_Change_array@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 *     ?_Calculate_growth@?$vector@_KV?$allocator@_K@std@@@std@@AEBA_K_K@Z @ 0x1801A4E40 (-_Calculate_growth@-$vector@_KV-$allocator@_K@std@@@std@@AEBA_K_K@Z.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<IDXGIResource * &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  SIZE_T size_of; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  __int64 *v13; // rdx
  _QWORD *v14; // r8
  __int64 *v15; // rcx

  v3 = *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = std::vector<unsigned __int64>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[a2 - v3];
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    v12,
    *a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(
      v15,
      a2,
      v11);
    v13 = a1[1];
    v14 = v12 + 1;
    v15 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(
    v15,
    v13,
    v14);
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Change_array(a1, v11, v8, v9);
  return v12;
}
