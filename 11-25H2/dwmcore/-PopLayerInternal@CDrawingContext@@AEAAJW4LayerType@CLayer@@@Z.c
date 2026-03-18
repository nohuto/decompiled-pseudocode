/*
 * XREFs of ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180086190
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800C54D0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800D9D60 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801AB8D0 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetType@CResampleLayer@@UEBA?AW4LayerType@CLayer@@XZ @ 0x180084C90 (-GetType@CResampleLayer@@UEBA-AW4LayerType@CLayer@@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCD2DLayer@@V1@@@SAXPEAX@Z @ 0x18008630C (-Free@-$CThreadLocalObjectCache@VCD2DLayer@@V1@@@SAXPEAX@Z.c)
 *     ??1CD2DLayer@@UEAA@XZ @ 0x1800863FC (--1CD2DLayer@@UEAA@XZ.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180086430 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180160F10 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 (*v12)(); // rax
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x10ACu, 0LL);
    }
    else
    {
      v12 = *(__int64 (**)())(*(_QWORD *)v4 + 8LL);
      if ( (char *)v12 != (char *)&COffScreenRenderingLayer::GetType )
      {
        v13 = v12 == CResampleLayer::GetType
            ? CResampleLayer::GetType()
            : ((__int64 (__fastcall *)(CD2DLayer *))v12)(v4);
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
