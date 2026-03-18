/*
 * XREFs of ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x1801AA4B0
 * Callers:
 *     ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AA270 (-AdjustContentWorldBounds@CVisual@@AEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::HasAntialiasedContent(CVisual *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 32);
  return v1 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 224LL))(v1);
}
