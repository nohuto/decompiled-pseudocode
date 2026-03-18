/*
 * XREFs of ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x18020BAA4
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800FDFD4 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18001BF70 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetInput@CEffectBrush@@QEBAPEAVCBrush@@I@Z @ 0x180238374 (-GetInput@CEffectBrush@@QEBAPEAVCBrush@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(CTreeEffectLayer *this)
{
  CLayerVisual *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // ebp
  struct CBrush *Input; // rax
  struct CBrush *v7; // rbx

  v2 = (CLayerVisual *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v2) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 112LL) + 80LL) + 56LL);
      v4 = 0;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( v5 )
      {
        do
        {
          Input = CEffectBrush::GetInput(*((CEffectBrush **)this + 31), v4);
          v7 = Input;
          if ( Input )
          {
            if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)Input + 64LL))(Input, 169LL) )
            {
              *((_DWORD *)v7 + 38) = 1065353216;
              *((_DWORD *)v7 + 39) = 0;
              *((_DWORD *)v7 + 40) = 0;
              *((_DWORD *)v7 + 41) = 1065353216;
              *((_DWORD *)v7 + 42) = 0;
              *((_DWORD *)v7 + 43) = 0;
            }
          }
          ++v4;
        }
        while ( v4 < v5 );
      }
    }
  }
}
