/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18003FF68
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003FA40 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18005F5C0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1802338C4 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18025E4F8 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 *     ?PinResources@CD3DDevice@@QEAAJV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x1802BA9A0 (-PinResources@CD3DDevice@@QEAAJV-$span@PEAVISwapChainRealization@@$0-0@gsl@@@Z.c)
 *     ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x1802BAC58 (-ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::_Tidy(
        char **a1)
{
  char *v1; // rbx
  char *v3; // rsi
  char *v4; // rcx
  unsigned __int64 v5; // rdx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v1 != v3 )
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v1);
      v1 += 8;
    }
    v4 = *a1;
    v5 = (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v5 >= 0x1000 )
    {
      v5 += 39LL;
      if ( (unsigned __int64)&v4[-*((_QWORD *)v4 - 1) - 8] > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v4 = (char *)*((_QWORD *)v4 - 1);
    }
    operator delete(v4, v5);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
