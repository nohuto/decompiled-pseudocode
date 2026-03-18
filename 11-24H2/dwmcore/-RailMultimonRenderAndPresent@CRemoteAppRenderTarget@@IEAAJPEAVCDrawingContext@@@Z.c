/*
 * XREFs of ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180281244
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180281524 (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800399A0 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800B2F20 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18028104C (-GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSI.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x180281850 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMat.c)
 *     ?GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@@Z @ 0x18028AEEC (-GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RailMultimonRenderAndPresent(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2)
{
  unsigned int v4; // ebx
  struct CDesktopTree *DesktopTree; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  __int128 v8; // xmm6
  _QWORD *v9; // r14
  __int128 v10; // xmm7
  __int128 v11; // xmm8
  __int128 v12; // xmm9
  int (__fastcall ***v13)(_QWORD, GUID *, struct ISwapChain **); // rdi
  const struct CMILMatrix *v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  struct ISwapChain *v17; // rbx
  __int64 (__fastcall *v18)(struct ISwapChain *, _QWORD, int *); // rdi
  int *RailWindowDeviceBounds; // rax
  int v20; // eax
  struct ISwapChain *v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  _OWORD v26[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+A0h] [rbp-60h]
  _OWORD v28[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v29; // [rsp+F0h] [rbp-10h]
  struct D2D_RECT_F v30; // [rsp+100h] [rbp+0h] BYREF
  int v31[4]; // [rsp+110h] [rbp+10h] BYREF

  v4 = 0;
  DesktopTree = CVisual::GetDesktopTree(*(CVisual **)(*((_QWORD *)this + 14) + 72LL));
  if ( DesktopTree )
  {
    v6 = *((_QWORD *)this + 14);
    v27 = 0;
    CVisual::GetRootTransform(*(CVisual **)(v6 + 72), (struct CMILMatrix *)v26, 0, 0);
    v30 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v26, (const struct D2D_RECT_F *)((char *)this + 260), &v30.left);
    v25 = 0LL;
    v24 = 0LL;
    CDesktopTree::GetIntersectingMonitorTargets(DesktopTree, &v30, &v24);
    v7 = (_QWORD *)v24;
    v8 = v26[3];
    v9 = (_QWORD *)v24;
    v10 = v26[2];
    v11 = v26[1];
    v12 = v26[0];
    while ( v9 != *((_QWORD **)&v24 + 1) )
    {
      v13 = (int (__fastcall ***)(_QWORD, GUID *, struct ISwapChain **))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 224LL))(*v9);
      if ( v13 )
      {
        v22 = 0LL;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v22);
        if ( (**v13)(v13, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v22) >= 0 )
        {
          v14 = (const struct CMILMatrix *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 64LL))(*v9);
          v28[0] = v12;
          v28[1] = v11;
          v28[2] = v10;
          v28[3] = v8;
          v29 = v27;
          CMILMatrix::Multiply((CMILMatrix *)v28, v14);
          (*(void (__fastcall **)(struct ISwapChain *, _QWORD))(*(_QWORD *)v22 + 184LL))(
            v22,
            *((unsigned int *)this + 33));
          v23 = 0;
          v15 = CRemoteAppRenderTarget::RenderDirtyRegion(
                  this,
                  a2,
                  v22,
                  (const struct CMILMatrix *)v28,
                  (enum CRemoteAppRenderTarget::ProtectionMode *)&v23);
          v4 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x269u, 0LL);
            goto LABEL_12;
          }
          v17 = v22;
          v18 = *(__int64 (__fastcall **)(struct ISwapChain *, _QWORD, int *))(*(_QWORD *)v22 + 232LL);
          RailWindowDeviceBounds = CRemoteAppRenderTarget::GetRailWindowDeviceBounds(v16, v31, &v30, (__int64)v14);
          v20 = v18(v17, *((_QWORD *)this + 326), RailWindowDeviceBounds);
          v4 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x26Eu, 0LL);
LABEL_12:
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
            break;
          }
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
      }
      ++v9;
    }
    if ( v7 )
      std::_Deallocate<16,0>(v7, (v25 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v4;
}
