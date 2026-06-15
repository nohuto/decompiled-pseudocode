/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800EE1AC
 * Callers:
 *     std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_249a22bcff1aef3e1794295476d640d0___ @ 0x1800EE858 (std--for_each_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--We.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x180022DBC (--$_Uninitialized_move@PEAV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISa.c)
 *     ?_Change_array@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXQEAVWeakRef@WRL@Microsoft@@_K1@Z @ 0x1800237B0 (-_Change_array@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@.c)
 *     ??$construct@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@?$_Default_allocator_traits@V?$allocator@U?$_Flist_node@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@QEAV?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@AEBV34@@Z @ 0x18009FA88 (--$construct@V-$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@-$.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A5E74 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IProcessSubmixProxy> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 *result; // rax
  char *v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h]
  __int64 *v22; // [rsp+80h] [rbp+18h]
  __int64 *v23; // [rsp+88h] [rbp+20h]

  v22 = a3;
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
  v21 = v7;
  v20 = (__int64 *)v7;
  v11 = (__int64 *)std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                     v9,
                     (unsigned __int64 *)&v20);
  v13 = v11;
  v19 = (char *)v11;
  v14 = &v11[v5];
  v23 = v14 + 1;
  try
  {
    std::_Default_allocator_traits<std::allocator<std::_Flist_node<wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy>,void *>>>::construct<wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy>,wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy> const &>(
      v12,
      v14,
      v22);
    v20 = v14;
    v15 = a1[1];
    v16 = (__int64)v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
        v17,
        a2,
        (__int64)v13);
      v20 = v13;
      v16 = (__int64)(v14 + 1);
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
      v17,
      v15,
      v16);
    std::vector<Microsoft::WRL::WeakRef>::_Change_array((__int64)a1, (__int64)v13, v8, v7);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v20, v23);
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(8 * v21));
    throw;
  }
  return result;
}
