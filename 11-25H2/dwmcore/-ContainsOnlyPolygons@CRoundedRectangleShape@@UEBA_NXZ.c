/*
 * XREFs of ?ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ @ 0x18004DF50
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004DFE0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z @ 0x1801A8160 (-IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z.c)
 */

char __fastcall CRoundedRectangleShape::ContainsOnlyPolygons(CRoundedRectangleShape *this)
{
  __int64 v1; // r8
  char v2; // dl
  const struct D2D_VECTOR_2F *v4; // rcx
  const struct D2D_VECTOR_2F *v5; // r8
  const struct D2D_VECTOR_2F *v6; // r8

  v1 = *((_QWORD *)this + 2);
  if ( *(float *)(v1 + 64) > 0.0 )
    return 1;
  v2 = 0;
  v4 = (const struct D2D_VECTOR_2F *)(v1 + 32);
  if ( *(_BYTE *)(v1 + 68) )
  {
LABEL_3:
    if ( CRoundedRectangleGeometryData::IsRoundedCorner(v4) )
      return v2;
    return 1;
  }
  if ( (v4->x <= 0.0 || *(float *)(v1 + 36) <= 0.0)
    && !CRoundedRectangleGeometryData::IsRoundedCorner((const struct D2D_VECTOR_2F *)(v1 + 40))
    && !CRoundedRectangleGeometryData::IsRoundedCorner(v5 + 6) )
  {
    v4 = v6 + 7;
    goto LABEL_3;
  }
  return v2;
}
