/*
 * XREFs of ?GetBoundsForOcclusion@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E08E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShape::GetBoundsForOcclusion(__int64 a1, struct D2D_RECT_F *a2)
{
  __int64 (__fastcall *v2)(__int64, struct D2D_RECT_F *, __int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, __int64))(*(_QWORD *)a1 + 48LL);
  if ( v2 == CRectanglesShape::GetTightBounds )
    return CRectanglesShape::GetTightBounds(a1, a2, 0LL);
  if ( (char *)v2 == (char *)CRegionShape::GetTightBounds )
    return CRegionShape::GetTightBounds(a1, (__int64)a2, 0LL);
  return v2(a1, a2, 0LL);
}
