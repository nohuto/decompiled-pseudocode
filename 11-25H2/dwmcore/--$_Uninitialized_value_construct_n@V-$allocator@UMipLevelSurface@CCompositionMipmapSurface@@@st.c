/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAPEAUMipLevelSurface@CCompositionMipmapSurface@@PEAU12@_KAEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x1802A15F4
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802A14C0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMipLevelSurface@CCompositionMipmapSurface.c)
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x1802A1ADC (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMipLevelSurface@CCompositionMipmapSurface@@QEAU12@AEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x1802A1488 (--$_Destroy_range@V-$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMi.c)
 */

__int64 *__fastcall std::_Uninitialized_value_construct_n<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v2; // rbx
  _QWORD *v3; // rax

  v2 = a1;
  if ( a2 )
  {
    v3 = a1 + 2;
    do
    {
      v2[1] = 0LL;
      v2[2] = 0LL;
      v2[3] = 0LL;
      *v2 = 0LL;
      v2 += 4;
      *(v3 - 1) = 0LL;
      *v3 = 0LL;
      v3 += 4;
      --a2;
    }
    while ( a2 );
  }
  std::_Destroy_range<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(v2, v2);
  return v2;
}
