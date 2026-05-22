/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801740F8
 * Callers:
 *     ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180175B40 (-RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEA.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017AC0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081FEC (--$_Uninitialized_move@PEAV-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V-$a.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x18009C308 (--$_Destroy_range@V-$allocator@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  __int64 *v14; // rsi
  __int64 *v15; // r14
  _QWORD *v16; // rdx
  char *v17; // r8
  _QWORD *v18; // rcx
  __int64 *result; // rax
  char *v20; // [rsp+20h] [rbp-48h]
  __int64 *v21; // [rsp+70h] [rbp+8h]

  v6 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64 *)v13;
  v20 = v13;
  v15 = (__int64 *)&v13[8 * v6];
  try
  {
    *v15 = 0LL;
    if ( v15 != a3 )
    {
      *v15 = *a3;
      *a3 = 0LL;
    }
    v21 = v15;
    v16 = *(_QWORD **)(a1 + 8);
    v17 = v13;
    v18 = *(_QWORD **)a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
        v18,
        a2,
        v13);
      v21 = v14;
      v17 = (char *)(v15 + 1);
      v16 = *(_QWORD **)(a1 + 8);
      v18 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
      v18,
      v16,
      v17);
    if ( *(_QWORD *)a1 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8));
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = &v14[v9];
    *(_QWORD *)(a1 + 16) = &v14[v8];
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(v21, v15 + 1);
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(8 * v8));
    throw;
  }
  return result;
}
