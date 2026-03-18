/*
 * XREFs of ?AllowsOcclusion@CShape@@UEBA_NXZ @ 0x1800C6B30
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800C7010 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180101230 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180101250 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CShape::AllowsOcclusion(CShape *this)
{
  __int64 v1; // rdx
  bool (__fastcall *v2)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v5 = 0;
  v2 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v1 + 64);
  if ( v2 == CRoundedRectangleShape::IsRectangles )
  {
    if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)) )
      return 0;
  }
  else
  {
    if ( v2 == CRectanglesShape::IsRectangles )
    {
      IsRectangles = CRectanglesShape::IsRectangles(this, &v5);
    }
    else if ( v2 == CRegionShape::IsRectangles )
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
