/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18015D418
 * Callers:
 *     ?RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x18015CBB0 (-RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBam.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017AC0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800284CC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081FEC (--$_Uninitialized_move@PEAV-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V-$a.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x18009C308 (--$_Destroy_range@V-$allocator@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy> const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  char *v14; // r14
  _QWORD *v15; // rdx
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  char *result; // rax
  char *v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+70h] [rbp+8h]

  v5 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v19 = (char *)v12;
  v14 = (char *)&v12[v5];
  try
  {
    *(_QWORD *)v14 = *a3;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))v14);
    v20 = (__int64 *)v14;
    v15 = *(_QWORD **)(a1 + 8);
    v16 = v13;
    v17 = *(_QWORD **)a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
        v17,
        a2,
        v13);
      v20 = v13;
      v16 = v14 + 8;
      v15 = *(_QWORD **)(a1 + 8);
      v17 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
      v17,
      v15,
      v16);
    if ( *(_QWORD *)a1 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8));
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = &v13[v8];
    *(_QWORD *)(a1 + 16) = &v13[v7];
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
      v20,
      (__int64 *)v14 + 1);
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(8 * v7));
    throw;
  }
  return result;
}
