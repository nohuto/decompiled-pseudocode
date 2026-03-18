/*
 * XREFs of ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x1802A1ADC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1802697EC (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMipLevelSurface@CCompositionMipmapSurface@@QEAU12@AEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x1802A1488 (--$_Destroy_range@V-$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMi.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802A14C0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMipLevelSurface@CCompositionMipmapSurface.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAPEAUMipLevelSurface@CCompositionMipmapSurface@@PEAU12@_KAEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x1802A15F4 (--$_Uninitialized_value_construct_n@V-$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@st.c)
 */

__int64 __fastcall CCompositionMipmapSurface::ProcessSetCreationParams(
        CCompositionMipmapSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS *a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  __int64 *v8; // rbx

  v4 = *((_DWORD *)a3 + 2);
  if ( *((_QWORD *)this + 16) != __PAIR64__(v4, *((_DWORD *)a3 + 3)) || *((_DWORD *)this + 34) != *((_DWORD *)a3 + 4) )
  {
    *((_DWORD *)this + 33) = v4;
    *((_DWORD *)this + 32) = *((_DWORD *)a3 + 3);
    v5 = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 34) = v5;
    v6 = v5;
    *((_DWORD *)this + 35) = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 36) = *((_DWORD *)a3 + 5);
    v7 = (__int64)(*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) >> 5;
    if ( v6 >= v7 )
    {
      if ( v6 > v7 )
      {
        if ( v6 <= (__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 12)) >> 5 )
          *((_QWORD *)this + 13) = std::_Uninitialized_value_construct_n<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(
                                     *((__int64 **)this + 13),
                                     v6 - v7);
        else
          std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Resize_reallocate<std::_Value_init_tag>(
            (__int64 **)this + 12,
            v6);
      }
    }
    else
    {
      v8 = (__int64 *)(*((_QWORD *)this + 12) + 32 * v6);
      std::_Destroy_range<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(v8, *((__int64 **)this + 13));
      *((_QWORD *)this + 13) = v8;
    }
    CSceneResourceManager::RegisterSceneListener(
      *(CSceneResourceManager **)(*((_QWORD *)this + 3) + 680LL),
      (struct ISceneNotificationListener *)(((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  }
  return 0LL;
}
