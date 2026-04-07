/*
 * XREFs of ?Reset@Mesh2D@@QEAAXXZ @ 0x180011798
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x180010A00 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x18001174C (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall Mesh2D::Reset(Mesh2D *this)
{
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 12LL);
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 32, 8LL);
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 64, 4LL);
  *((_DWORD *)this + 24) = 1056964608;
}
