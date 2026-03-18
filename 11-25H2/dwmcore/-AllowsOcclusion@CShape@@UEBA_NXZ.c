/*
 * XREFs of ?AllowsOcclusion@CShape@@UEBA_NXZ @ 0x18008B050
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18008B530 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x1801C33B0 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1801C5250 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CShape::AllowsOcclusion(CShape *this)
{
  __int64 v1; // rdx
  char (__fastcall *v2)(CRoundedRectangleShape *, unsigned int *); // rax
  char IsRectangles; // al
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v5 = 0;
  v2 = *(char (__fastcall **)(CRoundedRectangleShape *, unsigned int *))(v1 + 64);
  if ( v2 == CRoundedRectangleShape::IsRectangles )
  {
    if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)) )
      return 0;
  }
  else
  {
    if ( (char *)v2 == (char *)CRectanglesShape::IsRectangles )
    {
      IsRectangles = CRectanglesShape::IsRectangles(this, &v5);
    }
    else if ( (char *)v2 == (char *)CRegionShape::IsRectangles )
    {
      IsRectangles = CRegionShape::IsRectangles(this, &v5);
    }
    else
    {
      IsRectangles = v2(this, &v5);
    }
    if ( !IsRectangles || v5 != 1 )
      return 0;
  }
  return 1;
}
