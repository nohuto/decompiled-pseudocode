/*
 * XREFs of ?HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z @ 0x18004DE60
 * Callers:
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180049B40 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x18004C8A0 (-HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004D750 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004D9E0 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004DB30 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x18004E680 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x18004EA00 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180173270 (-GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectangl.c)
 * Callees:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18004CFCC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CBitmapRenderStrategy::HasRenderingRealization(struct IBitmapResource *a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(CCompositionSurfaceBitmap *, struct IBitmapRealization **); // rax
  CGlobalCompositionSurfaceInfo **v3; // rdi
  int v4; // ebx
  CGlobalCompositionSurfaceInfo *v5; // rdi
  struct IBitmapRealization *(__fastcall *v6)(CGlobalCompositionSurfaceInfo *); // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rax
  unsigned int (__fastcall *v9)(CMILRefCountImpl *__hidden); // rdx
  int v10; // et0
  bool v11; // bl
  unsigned int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v15 = 0LL;
  v2 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct IBitmapRealization **))(v1 + 64);
  if ( v2 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
  {
    v3 = (CGlobalCompositionSurfaceInfo **)((char *)a1 + 24);
    v4 = 0;
    if ( (unsigned __int8)wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((char *)a1 + 24, 0LL) )
    {
      v5 = *v3;
      v6 = *(struct IBitmapRealization *(__fastcall **)(CGlobalCompositionSurfaceInfo *))(*(_QWORD *)v5 + 48LL);
      if ( v6 == CGlobalCompositionSurfaceInfo::GetRenderingRealization )
      {
        if ( !*((_QWORD *)v5 + 26) )
          CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(v5);
        v7 = *((_QWORD *)v5 + 26);
        v8 = (volatile signed __int32 *)(v7 + 8);
        if ( !v7 )
          v8 = 0LL;
      }
      else
      {
        v8 = (volatile signed __int32 *)v6(v5);
      }
      v15 = v8;
      if ( v8 )
      {
        v9 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v8 + 8LL);
        if ( v9 == CMILRefCountImpl::AddReference )
        {
          v10 = _InterlockedAdd(v8, 1u);
          if ( (v10 < 0) ^ __OFSUB__(v9, CMILRefCountImpl::AddReference) | (v10 == 0) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v13);
        }
        else
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        }
      }
      else
      {
        v4 = -2003304309;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304309, 0xC0u, 0LL);
      }
    }
    else
    {
      v4 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0xC5u, 0LL);
    }
  }
  else
  {
    v4 = v2(a1, (struct IBitmapRealization **)&v15);
  }
  v11 = v4 >= 0;
  if ( v15 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
  return v11;
}
