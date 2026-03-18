/*
 * XREFs of ?ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ @ 0x1801AA700
 * Callers:
 *     ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AA270 (-AdjustContentWorldBounds@CVisual@@AEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ?HasPixelSnappedContent@CVisual@@IEBA_NXZ @ 0x1801AA5A0 (-HasPixelSnappedContent@CVisual@@IEBA_NXZ.c)
 * Callees:
 *     ?ShouldSnapToPixels@CSurfaceBrush@@UEBA_NXZ @ 0x1801AA6F0 (-ShouldSnapToPixels@CSurfaceBrush@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEffectBrush::ShouldSnapToPixels(CEffectBrush *this)
{
  unsigned int v1; // esi
  __int64 i; // rbx
  CSurfaceBrush *v5; // rcx
  bool (__fastcall *v6)(CSurfaceBrush *); // rax
  char v7; // al

  v1 = *((_DWORD *)this + 40);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v1 )
      return 0;
    v5 = *(CSurfaceBrush **)(*((_QWORD *)this + 17) + 8 * i);
    if ( v5 )
    {
      v6 = *(bool (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)v5 + 328LL);
      v7 = v6 == CSurfaceBrush::ShouldSnapToPixels ? CSurfaceBrush::ShouldSnapToPixels(v5) : ((__int64 (*)(void))v6)();
      if ( v7 )
        break;
    }
  }
  return 1;
}
