/*
 * XREFs of ?GetBounds@CAtlasedRectsGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DEEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ @ 0x1801DEF14 (-EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 result; // rax

  CAtlasedRectsGroup::EnsureBounds((CAtlasedRectsGroup *)a1);
  result = 0LL;
  *a3 = *(_OWORD *)(a1 + 104);
  return result;
}
