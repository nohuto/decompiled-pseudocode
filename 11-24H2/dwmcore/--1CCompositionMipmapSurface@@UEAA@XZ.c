/*
 * XREFs of ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1802975C0
 * Callers:
 *     ??_GCCompositionMipmapSurface@@UEAAPEAXI@Z @ 0x1802976C0 (--_GCCompositionMipmapSurface@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180068F70 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18025F910 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMipLevelSurface@CCompositionMipmapSurface@@QEAU12@AEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x180297400 (--$_Destroy_range@V-$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMi.c)
 */

void __fastcall CCompositionMipmapSurface::~CCompositionMipmapSurface(CCompositionMipmapSurface *this)
{
  __int64 *v2; // rcx
  __int64 *v3; // rdx
  CD3DResource *v4; // rcx
  __int64 *v5; // rcx

  *(_QWORD *)this = &CCompositionMipmapSurface::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 10) = &CCompositionMipmapSurface::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CCompositionMipmapSurface::`vftable'{for `ISceneNotificationListener'};
  v2 = (__int64 *)*((_QWORD *)this + 12);
  v3 = (__int64 *)*((_QWORD *)this + 13);
  if ( v2 != v3 )
  {
    std::_Destroy_range<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(v2, v3);
    *((_QWORD *)this + 13) = *((_QWORD *)this + 12);
  }
  v4 = (CD3DResource *)*((_QWORD *)this + 21);
  if ( v4 )
  {
    CD3DResource::RemoveResourceNotifier(v4, (CCompositionMipmapSurface *)((char *)this + 80));
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 21);
  }
  CSceneResourceManager::UnregisterSceneListener(
    *(const __m128i ***)(*((_QWORD *)this + 3) + 680LL),
    (CCompositionMipmapSurface *)((char *)this + 88));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 19);
  v5 = (__int64 *)*((_QWORD *)this + 12);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(v5, *((__int64 **)this + 13));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 12),
      (*((_QWORD *)this + 14) - *((_QWORD *)this + 12)) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  CResource::~CResource(this);
}
