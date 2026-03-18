/*
 * XREFs of ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x180117408
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1801174F0 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18012B648 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetTransformToLayerSpace@CTreeEffectLayer@@AEBA?AVMatrix3x2F@D2D1@@XZ @ 0x180286BD8 (-GetTransformToLayerSpace@CTreeEffectLayer@@AEBA-AVMatrix3x2F@D2D1@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTreeEffectLayer::PushLayerTransformOnExplicitSurfaceInput(CTreeEffectLayer *this)
{
  CLayerVisual *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // xmm0_8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v2 = (CLayerVisual *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v2) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 112LL) + 80LL) + 56LL);
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( v4 )
      {
        v5 = 0LL;
        v6 = v4;
        do
        {
          v7 = *(_QWORD *)(*((_QWORD *)this + 31) + 136LL);
          v8 = *(_QWORD *)(v5 + v7);
          if ( v8 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v8 + 64LL))(
                   *(_QWORD *)(v5 + v7),
                   167LL) )
            {
              CTreeEffectLayer::GetTransformToLayerSpace(this, &v10);
              v9 = v11;
              *(_OWORD *)(v8 + 152) = v10;
              *(_QWORD *)(v8 + 168) = v9;
            }
          }
          v5 += 8LL;
          --v6;
        }
        while ( v6 );
      }
    }
  }
}
