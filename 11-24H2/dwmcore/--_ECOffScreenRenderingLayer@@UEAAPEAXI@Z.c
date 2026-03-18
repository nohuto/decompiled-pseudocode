/*
 * XREFs of ??_ECOffScreenRenderingLayer@@UEAAPEAXI@Z @ 0x1801EF6D0
 * Callers:
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z @ 0x180265900 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

COffScreenRenderingLayer *__fastcall COffScreenRenderingLayer::`vector deleting destructor'(
        COffScreenRenderingLayer *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CExternalLayer::`vftable';
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
