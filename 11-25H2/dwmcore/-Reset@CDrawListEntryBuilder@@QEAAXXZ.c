/*
 * XREFs of ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18000DF90
 * Callers:
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000DD2C (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18024CA20 (-FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryB.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListEntryBuilder::Reset(CDrawListEntryBuilder *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 14);
  v3 = (_QWORD *)*((_QWORD *)this + 15);
  while ( v1 != v3 )
  {
    if ( *v1 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
      *v1 = 0LL;
    }
    ++v1;
  }
  v4 = (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 3;
  if ( v4 )
    *((_QWORD *)this + 15) -= 8 * v4;
  *((_BYTE *)this + 4488) = 0;
  v5 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
}
