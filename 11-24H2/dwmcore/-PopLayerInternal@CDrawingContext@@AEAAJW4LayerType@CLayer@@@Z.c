/*
 * XREFs of ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800FA260
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000B988 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180057310 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180097480 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A1F90 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCD2DLayer@@V1@@@SAXPEAX@Z @ 0x1800FA3DC (-Free@-$CThreadLocalObjectCache@VCD2DLayer@@V1@@@SAXPEAX@Z.c)
 *     ??1CD2DLayer@@UEAA@XZ @ 0x1800FA4CC (--1CD2DLayer@@UEAA@XZ.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FA500 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800FACC0 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetType@CResampleLayer@@UEBA?AW4LayerType@CLayer@@XZ @ 0x1800FB7D0 (-GetType@CResampleLayer@@UEBA-AW4LayerType@CLayer@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PopLayerInternal(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rdx
  CD2DLayer *v4; // rbx
  __int64 v5; // rdx
  CD2DLayer *v6; // rcx
  __int64 v7; // rax
  void *(__fastcall *v8)(CD2DLayer *__hidden, unsigned int); // rax
  __int64 (__fastcall *v10)(CExternalLayer *__hidden, struct CDrawingContext *); // rax
  int v11; // eax
  __int64 (__fastcall *v12)(CD2DLayer *); // rax
  int v13; // eax

  v1 = 0;
  v2 = (unsigned int)(*(_DWORD *)(a1 + 384) - 1);
  v4 = *(CD2DLayer **)(*(_QWORD *)(a1 + 360) + 8 * v2);
  *(_DWORD *)(a1 + 384) = v2;
  v5 = *(_QWORD *)(a1 + 752);
  if ( v5 == *(_QWORD *)(a1 + 744) || !*(_QWORD *)(v5 - 176) )
    v6 = 0LL;
  else
    v6 = *(CD2DLayer **)(*(_QWORD *)(a1 + 2696) - 16LL);
  if ( v4 == v6 )
  {
    v7 = *(_QWORD *)(a1 + 2696);
    if ( *(_QWORD *)(v7 - 16) )
      --*(_QWORD *)(v5 - 160);
    *(_QWORD *)(v7 - 16) = 0LL;
  }
  else
  {
    v10 = *(__int64 (__fastcall **)(CExternalLayer *__hidden, struct CDrawingContext *))(*(_QWORD *)v4 + 32LL);
    if ( v10 == CD2DLayer::RestoreState )
    {
      v11 = CD2DLayer::RestoreState(v4, (struct CDrawingContext *)a1);
    }
    else if ( v10 == CExternalLayer::RestoreState )
    {
      v11 = CExternalLayer::RestoreState(v4, (struct CDrawingContext *)a1);
    }
    else
    {
      v11 = v10(v4, (struct CDrawingContext *)a1);
    }
    v1 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x10D4u, 0LL);
    }
    else
    {
      v12 = *(__int64 (__fastcall **)(CD2DLayer *))(*(_QWORD *)v4 + 8LL);
      if ( (char *)v12 != (char *)&COffScreenRenderingLayer::GetType )
      {
        v13 = (char *)v12 == (char *)CResampleLayer::GetType ? CResampleLayer::GetType(v4) : v12(v4);
        if ( v13 == 1 )
          *(_BYTE *)(a1 + 8065) = 1;
      }
    }
  }
  if ( v4 )
  {
    v8 = **(void *(__fastcall ***)(CD2DLayer *__hidden, unsigned int))v4;
    if ( v8 == CD2DLayer::`scalar deleting destructor' )
    {
      CD2DLayer::~CD2DLayer(v4);
      CThreadLocalObjectCache<CD2DLayer,CD2DLayer>::Free(v4);
    }
    else
    {
      v8(v4, 1u);
    }
  }
  return v1;
}
