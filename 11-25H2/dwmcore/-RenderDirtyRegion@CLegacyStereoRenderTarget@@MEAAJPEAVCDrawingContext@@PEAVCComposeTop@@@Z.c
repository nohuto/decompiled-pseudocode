/*
 * XREFs of ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18028FA90
 * Callers:
 *     <none>
 * Callees:
 *     ?UseSuperSample@CLegacyRenderTarget@@UEBA_NXZ @ 0x180052B70 (-UseSuperSample@CLegacyRenderTarget@@UEBA_NXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180052B90 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ @ 0x180053710 (-GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C519C (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x1800D8850 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D8BD0 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetClearMode@CLegacyStereoRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x180281120 (-GetClearMode@CLegacyStereoRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 */

__int64 __fastcall CLegacyStereoRenderTarget::RenderDirtyRegion(
        CLegacyStereoRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  double v3; // xmm2_8
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  COcclusionContext *OcclusionContext; // r15
  int ClearMode; // r12d
  char v12; // r13
  __int64 v13; // r8
  _QWORD *v14; // r14
  _QWORD *i; // rsi
  unsigned int v16; // xmm0_4
  unsigned int v17; // xmm1_4
  CVisualTree *v18; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // edi
  unsigned __int64 v23; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+48h] [rbp-50h]
  int v25; // [rsp+50h] [rbp-48h]
  int v26; // [rsp+54h] [rbp-44h]

  v6 = CLegacyRenderTarget::RenderDirtyRegion(this, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x65u, 0LL);
  }
  else if ( *((_DWORD *)this + 7792) && (!*((_BYTE *)this + 33912) || *(_DWORD *)(*((_QWORD *)this + 3) + 832LL)) )
  {
    v8 = CDrawingContext::PushRenderTarget(
           a2,
           (struct IDeviceTarget *)((*(_QWORD *)(*((_QWORD *)this + 4238) + 512LL) + 16LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 4238) + 512LL) != 0LL)));
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x6Du, 0LL);
    }
    else
    {
      OcclusionContext = CMonitorDirty::GetOcclusionContext((CLegacyStereoRenderTarget *)((char *)this + 31152), v9, v3);
      ClearMode = CLegacyStereoRenderTarget::GetClearMode((__int64)this);
      v12 = CLegacyRenderTarget::UseSuperSample((CLegacyStereoRenderTarget *)((char *)this + 88));
      CMergedRectBase<8>::GetRects((unsigned int *)this + 7792, &v23);
      v14 = (_QWORD *)(v24 + 16 * v23);
      for ( i = (_QWORD *)(v24 + 8); i - 1 != v14; i += 2 )
      {
        v16 = *((_DWORD *)i - 2);
        v17 = *((_DWORD *)i - 1);
        v18 = (CVisualTree *)*((_QWORD *)this + 14);
        v25 = 0;
        v26 = 0;
        v23 = __PAIR64__(v17, v16);
        v24 = *i;
        v19 = CDrawingContext::DrawVisualTree(a2, v18, (__int64)&v23, OcclusionContext, ClearMode, v12, 0LL);
        v7 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x7Cu, 0LL);
          break;
        }
      }
      v20 = CDrawingContext::PopRenderTargetInternal(a2, 0LL, v13);
      v21 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x83u, 0LL);
      if ( !v7 || v7 >= 0 && v21 < 0 )
        return (unsigned int)v21;
    }
  }
  return (unsigned int)v7;
}
