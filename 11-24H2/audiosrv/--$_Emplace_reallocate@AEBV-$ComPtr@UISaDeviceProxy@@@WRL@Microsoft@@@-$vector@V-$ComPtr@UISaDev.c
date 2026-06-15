/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800F91AC
 * Callers:
 *     _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x1800F9610 (_lambda_0e41d75607236968788bdd59460e85d3_--operator().c)
 *     _lambda_44fd5c58d02accc22ae075b126dea950_::operator() @ 0x1800F975C (_lambda_44fd5c58d02accc22ae075b126dea950_--operator().c)
 * Callees:
 *     ?_Change_array@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXQEAVWeakRef@WRL@Microsoft@@_K1@Z @ 0x180016C2C (-_Change_array@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x180017204 (--$_Uninitialized_move@PEAV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISa.c)
 *     ??$construct@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEBV123@@?$_Default_allocator_traits@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@1@QEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEBV345@@Z @ 0x180051CA4 (--$construct@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEBV123@@-$_Default_allocator_traits@.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A2284 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ISaDeviceProxy> const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  char *v11; // rdi
  char *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  char *v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h]
  _QWORD *v20; // [rsp+80h] [rbp+18h]
  _QWORD *v21; // [rsp+88h] [rbp+20h]

  v20 = a3;
  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  v19 = v7;
  v18 = (char *)v7;
  v11 = (char *)std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                  v9,
                  (unsigned __int64 *)&v18);
  v12 = &v11[8 * v5];
  v21 = v12 + 8;
  std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>::construct<Microsoft::WRL::ComPtr<IStreamGroupProxy>,Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
    v13,
    v12,
    v20);
  v18 = v12;
  v14 = a1[1];
  v15 = (__int64)v11;
  v16 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
      v16,
      a2,
      (__int64)v11);
    v18 = v11;
    v15 = (__int64)(v12 + 8);
    v14 = a1[1];
    v16 = a2;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
    v16,
    v14,
    v15);
  std::vector<Microsoft::WRL::WeakRef>::_Change_array((char **)a1, v11, v8, v7);
  return v12;
}
