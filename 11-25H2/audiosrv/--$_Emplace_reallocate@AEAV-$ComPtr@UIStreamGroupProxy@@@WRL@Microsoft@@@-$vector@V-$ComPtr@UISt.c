/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x1800239DC
 * Callers:
 *     ?FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800246AC (-FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV-$vector@V-$ComPtr@U.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x180022DBC (--$_Uninitialized_move@PEAV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISa.c)
 *     ??$construct@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V123@@?$_Default_allocator_traits@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@1@QEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@$$QEAV345@@Z @ 0x1800230E8 (--$construct@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V123@@-$_Default_allocator_traits@V-$all.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$construct@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEBV123@@?$_Default_allocator_traits@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@1@QEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEBV345@@Z @ 0x180023B44 (--$construct@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEBV123@@-$_Default_allocator_traits@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A5E74 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 *v14; // r10
  __int64 *v15; // r9
  __int64 *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h]
  __int64 v22; // [rsp+80h] [rbp+18h]
  __int64 v23; // [rsp+88h] [rbp+20h]

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
  v20 = v7;
  v11 = std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
          v9,
          &v20);
  v12 = v11 + 8 * v5;
  v23 = v12 + 8;
  std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>::construct<Microsoft::WRL::ComPtr<IStreamGroupProxy>,Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
    v13,
    v12,
    v22);
  v20 = v12;
  v14 = (__int64 *)a1[1];
  v15 = (__int64 *)*a1;
  if ( (__int64 *)a2 == v14 )
  {
    v16 = (__int64 *)v11;
    while ( v15 != v14 )
    {
      std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>::construct<Microsoft::WRL::ComPtr<ISaDeviceProxy>,Microsoft::WRL::ComPtr<ISaDeviceProxy>>(
        (__int64)v16,
        v16,
        v15);
      v16 = (__int64 *)(v17 + 8);
      v15 = (__int64 *)(v18 + 8);
    }
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v16, v16);
  }
  else
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
      *a1,
      a2,
      v11);
    v20 = v11;
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
      a2,
      a1[1],
      v12 + 8);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>((__int64 *)*a1, (__int64 *)a1[1]);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v11;
  a1[1] = v11 + 8 * v8;
  a1[2] = v11 + 8 * v7;
  return v12;
}
