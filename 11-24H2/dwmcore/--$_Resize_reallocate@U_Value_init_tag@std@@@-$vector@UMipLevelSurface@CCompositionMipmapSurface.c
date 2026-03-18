/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180297438
 * Callers:
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x180297A5C (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801F65D0 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMipLevelSurface@CCompositionMipmapSurface@@QEAU12@AEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x180297400 (--$_Destroy_range@V-$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMi.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAPEAUMipLevelSurface@CCompositionMipmapSurface@@PEAU12@_KAEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x18029756C (--$_Uninitialized_value_construct_n@V-$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@st.c)
 */

void __fastcall std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // r14
  char *v11; // r8
  __int64 v12; // rcx
  char *i; // rdx
  __int64 v14; // rax

  v2 = 0x7FFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = (char *)a1[1] - (char *)*a1;
  v6 = ((char *)a1[2] - (char *)*a1) >> 5;
  v7 = v5 >> 5;
  v8 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<32>(v2);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>((void *)(v10 + 32 * v7));
  v11 = (char *)a1[1];
  v12 = v10;
  for ( i = (char *)*a1; i != v11; i += 32 )
  {
    v14 = *(_QWORD *)i;
    *(_QWORD *)i = 0LL;
    *(_QWORD *)v12 = v14;
    *(_OWORD *)(v12 + 8) = *(_OWORD *)(i + 8);
    *(_BYTE *)(v12 + 24) = i[24];
    v12 += 32LL;
  }
  std::_Destroy_range<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>((__int64 *)v12, (__int64 *)v12);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *a1 = (__int64 *)v10;
  a1[1] = (__int64 *)(v10 + 32 * a2);
  a1[2] = (__int64 *)(v10 + 32 * v2);
}
