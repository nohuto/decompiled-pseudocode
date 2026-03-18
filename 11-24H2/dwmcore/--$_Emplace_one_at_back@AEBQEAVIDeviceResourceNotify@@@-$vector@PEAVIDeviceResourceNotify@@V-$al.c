/*
 * XREFs of ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x1800439AC
 * Callers:
 *     ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x180043FE0 (-AddResourceNotifier@-$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@UEAAXPEAVIDeviceRes.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x18005CE9C (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010C8E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801A2290 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     ?AddResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VILegacyRemotingSwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x180210550 (-AddResourceNotifier@-$CDeviceResourceT@V-$CMILCOMBaseT@VILegacyRemotingSwapChain@@VIDeviceResou.c)
 *     ?AddResourceNotifier@?$CDeviceResourceT@VIOverlaySwapChain@@@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x180211640 (-AddResourceNotifier@-$CDeviceResourceT@VIOverlaySwapChain@@@@UEAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18022D3E0 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x18024AD88 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180280E34 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18029770C (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180041D40 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(
        char **a1,
        _QWORD *a2)
{
  char *v2; // r14
  char *v4; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  char *result; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rsi
  char *v14; // rbp
  void *v15; // rcx
  char *v16; // r8
  char *v17; // rdx
  size_t v18; // r8

  v2 = a1[1];
  v4 = a1[2];
  if ( v2 == v4 )
  {
    v6 = 0x1FFFFFFFFFFFFFFFLL;
    v7 = (v2 - *a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v9 = v7 + 1;
    v10 = (v4 - *a1) >> 3;
    v11 = v10 >> 1;
    if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
    {
      v6 = v11 + v10;
      if ( v11 + v10 < v9 )
        v6 = v7 + 1;
    }
    size_of = std::_Get_size_of_n<8>(v6);
    v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v14 = &v13[8 * v7];
    *(_QWORD *)v14 = *a2;
    v15 = v13;
    v16 = a1[1];
    v17 = *a1;
    if ( v2 == v16 )
    {
      v18 = v16 - v17;
    }
    else
    {
      memmove_0(v13, v17, v2 - *a1);
      v15 = v14 + 8;
      v18 = a1[1] - v2;
      v17 = v2;
    }
    memmove_0(v15, v17, v18);
    if ( *a1 )
      std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = v13;
    a1[1] = &v13[8 * v9];
    result = v14;
    a1[2] = &v13[8 * v6];
  }
  else
  {
    *(_QWORD *)v2 = *a2;
    result = a1[1];
    a1[1] = result + 8;
  }
  return result;
}
