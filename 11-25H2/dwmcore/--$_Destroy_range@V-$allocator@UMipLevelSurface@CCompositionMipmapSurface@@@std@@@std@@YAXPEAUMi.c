/*
 * XREFs of ??$_Destroy_range@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMipLevelSurface@CCompositionMipmapSurface@@QEAU12@AEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x1802A1488
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802A14C0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMipLevelSurface@CCompositionMipmapSurface.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAPEAUMipLevelSurface@CCompositionMipmapSurface@@PEAU12@_KAEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x1802A15F4 (--$_Uninitialized_value_construct_n@V-$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@st.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1802A1648 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x1802A1ADC (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v3);
      v3 += 4;
    }
    while ( v3 != a2 );
  }
}
