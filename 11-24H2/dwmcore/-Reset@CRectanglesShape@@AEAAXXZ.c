/*
 * XREFs of ?Reset@CRectanglesShape@@AEAAXXZ @ 0x180079780
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801741B0 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRectanglesShape::Reset(CRectanglesShape *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  CCachedVisualImage *v4; // rcx
  void (*v5)(void); // rax

  v2 = *((_QWORD *)this + 3);
  v3 = (v2 - *((_QWORD *)this + 2)) >> 4;
  if ( v3 )
    *((_QWORD *)this + 3) = v2 - 16 * v3;
  v4 = (CCachedVisualImage *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v5 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v4);
    else
      v5();
    *((_QWORD *)this + 7) = 0LL;
  }
}
