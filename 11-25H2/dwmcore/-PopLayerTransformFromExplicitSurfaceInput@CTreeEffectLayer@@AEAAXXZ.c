/*
 * XREFs of ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x18011747C
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1801174F0 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18012B648 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(CTreeEffectLayer *this)
{
  CLayerVisual *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rcx
  _DWORD *v8; // rbx

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
          v8 = *(_DWORD **)(v5 + v7);
          if ( v8 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v8 + 64LL))(
                   *(_QWORD *)(v5 + v7),
                   167LL) )
            {
              v8[38] = 1065353216;
              v8[39] = 0;
              v8[40] = 0;
              v8[41] = 1065353216;
              v8[42] = 0;
              v8[43] = 0;
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
