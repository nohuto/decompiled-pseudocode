/*
 * XREFs of ?Reset@AtlasedRects@@QEAAXXZ @ 0x180023314
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x1800230A4 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall AtlasedRects::Reset(AtlasedRects *this)
{
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 16LL);
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 32, 16LL);
}
