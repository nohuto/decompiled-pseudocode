/*
 * XREFs of ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802D9AF4
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802D9CD8 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x1800C6660 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1801FE35C (-GetRects@-$CMergedRectBase@$03@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?Reset@?$CMergedRectBase@$03@@QEAAXXZ @ 0x180208E9C (-Reset@-$CMergedRectBase@$03@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802DC190 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderDirtyRegion(
        CHolographicInteropTarget *this,
        struct CHolographicInteropTexture *a2,
        __int64 a3,
        unsigned int a4,
        struct IRenderTargetBitmap *a5,
        struct CDrawingContext *a6)
{
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  COcclusionContext *v12; // rcx
  int *v13; // r15
  int *i; // rbx
  int *v15; // rsi
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  int v20; // eax
  __int64 v21; // rdx
  COcclusionContext *v24; // [rsp+50h] [rbp-21h]
  CVisualTree *v25; // [rsp+58h] [rbp-19h]
  __int64 v26; // [rsp+60h] [rbp-11h] BYREF
  __int64 v27; // [rsp+68h] [rbp-9h]
  _BYTE v28[8]; // [rsp+70h] [rbp-1h] BYREF
  _DWORD v29[6]; // [rsp+78h] [rbp+7h] BYREF

  v7 = 0;
  (*(void (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a5 + 1) + 32LL))((char *)a5 + 8, v28);
  CMergedRectBase<4>::GetRects((unsigned int *)a2 + 488, &v26);
  v25 = (CVisualTree *)*((_QWORD *)a2 + 12);
  v8 = (*(__int64 (__fastcall **)(CVisualTree *, __int64 *, char *))(*(_QWORD *)v25 + 200LL))(
         v25,
         &v26,
         (char *)a2 + 112);
  v12 = 0LL;
  if ( v8 >= 0 )
    v12 = (struct CHolographicInteropTexture *)((char *)a2 + 112);
  v13 = (int *)(v27 + 16 * v26);
  v24 = v12;
  for ( i = (int *)(v27 + 8); ; i += 4 )
  {
    v15 = i - 2;
    if ( i - 2 == v13 )
      break;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0qdffff_EventWriteTransfer((__int64)v12, v9, v10, v11, *v15, *(i - 1), *i, i[1]);
      v12 = v24;
    }
    v16 = *v15;
    v17 = *(i - 1);
    v29[4] = 0;
    v29[5] = 0;
    v29[0] = v16;
    v18 = *i;
    v29[1] = v17;
    v19 = i[1];
    v29[2] = v18;
    v29[3] = v19;
    v20 = CDrawingContext::DrawVisualTree(a6, v25, (__int64)v29, v12, 2, 0, 0LL);
    v7 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x1E1u, 0LL);
      goto LABEL_12;
    }
    CHolographicInteropTexture::NotifyRenderedRect(a2, v21, a4, i - 2);
    v12 = v24;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer((__int64)v12, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, (__int64)a6);
LABEL_12:
  CMergedRectBase<4>::Reset((__int64)a2 + 1952);
  return v7;
}
