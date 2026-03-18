/*
 * XREFs of ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18011F238
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800815F4 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180085F60 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800A48A0 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x180109450 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x18010AADC (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18010B800 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180117180 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x18011EC9C (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18011F550 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x18011F67C (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x18011F730 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawBspPolygonList(CDrawingContext *this, struct CVisual *a2, struct CVisual *a3)
{
  unsigned int v4; // edi
  unsigned int BspPolygonListCount; // eax
  unsigned int v7; // r15d
  _QWORD *BspPolygonList; // rax
  const struct CVisual *v9; // r11
  const struct CVisual *v10; // rdx
  __int64 v11; // rbx
  CVisual *v12; // r14
  int v13; // eax
  const struct CMILMatrix *TopByReference; // rax
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  const struct CMILMatrix *v19; // rax
  struct CVisualTree *v20; // rbx
  int v21; // eax
  struct ID2D1PathGeometry *v23; // [rsp+48h] [rbp-99h] BYREF
  struct CVisualTree *v24; // [rsp+50h] [rbp-91h] BYREF
  _OWORD v25[4]; // [rsp+58h] [rbp-89h] BYREF
  int v26; // [rsp+98h] [rbp-49h]
  _BYTE v27[64]; // [rsp+A8h] [rbp-39h] BYREF
  int v28; // [rsp+E8h] [rbp+7h]
  unsigned int v29; // [rsp+160h] [rbp+7Fh]

  v4 = 0;
  BspPolygonListCount = CVisual::GetBspPolygonListCount(a2);
  v7 = 0;
  v29 = BspPolygonListCount;
  while ( v7 < BspPolygonListCount )
  {
    BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList((__int64)a2);
    v10 = v9;
    v11 = *(_QWORD *)(*BspPolygonList + 8LL * v7);
    v12 = *(CVisual **)(v11 + 216);
    if ( v12 != a2 )
      v10 = (const struct CVisual *)*((_QWORD *)v12 + 11);
    if ( *(_BYTE *)(v11 + 240) || !*((_DWORD *)this + 64) )
    {
      if ( CVisual::IsSimple3DRootOrHasEffects(*(CVisual **)(v11 + 216), v10) )
      {
        v23 = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64, struct ID2D1PathGeometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
                g_DeviceManager,
                &v23);
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x528u, 0LL);
          goto LABEL_19;
        }
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 288));
        v4 = CPolygon::D2DGeometryFromPolygon((CPolygon *)v11, v23, TopByReference);
        if ( (v4 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x52Bu, 0LL);
LABEL_19:
          if ( v23 )
            (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v23 + 16LL))(v23);
          return v4;
        }
        v15 = CDrawingContext::PushD2DLayer(this, (__int64)v12, 0LL, (__int64)v23, 0LL, 1.0, 0, 0);
        v4 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x52Du, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
          return v4;
        }
        v16 = *(_OWORD *)(v11 + 160);
        v26 = *(_DWORD *)(v11 + 208);
        v17 = *(_OWORD *)(v11 + 144);
        v25[1] = v16;
        v18 = *(_OWORD *)(v11 + 192);
        LOBYTE(v26) = v26 & 0xF0 | 1;
        v25[0] = v17;
        v25[3] = v18;
        v25[2] = 0LL;
        v19 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 288));
        CMILMatrix::Multiply((CMILMatrix *)v25, v19);
        v28 = 0;
        CVisual::GetRootTransform(v12, (struct CMILMatrix *)v27, 0, 0);
        CMILMatrix::Multiply((CMILMatrix *)v27, (const struct CMILMatrix *)v25);
        v24 = 0LL;
        CSubVisualTree::Create(v12, &v24);
        v20 = v24;
        v21 = CDrawingContext::DrawSubVisualTree((__int64)this, v24, (__int64)v24 + 80, (CMILMatrix *)v27);
        v4 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x544u, 0LL);
          if ( v20 )
            (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v20 + 16LL))(v20);
          if ( v23 )
            (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v23 + 16LL))(v23);
          CDrawingContext::PopLayer(this);
          return v4;
        }
        CDrawingContext::PopLayer(this);
        if ( v20 )
          (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v23 )
          (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      else
      {
        CDrawingContext::DrawPolygon(this, (struct CPolygon *)v11);
      }
    }
    BspPolygonListCount = v29;
    ++v7;
  }
  return v4;
}
