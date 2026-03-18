/*
 * XREFs of ?GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A7660
 * Callers:
 *     ?GetBoundsForOcclusion@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D6380 (-GetBoundsForOcclusion@CShapePtr@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 * Callees:
 *     ?AllowsOcclusion@CRoundedRectangleShape@@UEBA_NXZ @ 0x1801A77B0 (-AllowsOcclusion@CRoundedRectangleShape@@UEBA_NXZ.c)
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z @ 0x1801A8160 (-IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetBoundsForOcclusion(CRoundedRectangleShape *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  const struct D2D_VECTOR_2F *v6; // rcx
  const struct D2D_VECTOR_2F *v7; // rdx
  const struct D2D_VECTOR_2F *v8; // rdx
  bool (__fastcall *v9)(CRoundedRectangleShape *__hidden); // rax
  bool v10; // al
  __int64 v11; // rcx
  float v12; // xmm0_4
  float v14; // xmm1_4
  __int128 v15; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)this + 2);
  if ( *(_BYTE *)(v2 + 68) )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(v2 + 16);
    *((float *)&v15 + 2) = *(float *)&v15 + *(float *)(v2 + 24);
    *((float *)&v15 + 3) = *((float *)&v15 + 1) + *(float *)(v2 + 28);
  }
  else
  {
    v15 = *(_OWORD *)(v2 + 16);
  }
  *(_OWORD *)a2 = v15;
  v5 = *((_QWORD *)this + 2);
  v6 = (const struct D2D_VECTOR_2F *)(v5 + 32);
  if ( *(_BYTE *)(v5 + 68) )
  {
LABEL_9:
    if ( !CRoundedRectangleGeometryData::IsRoundedCorner(v6) )
      return 0LL;
    goto LABEL_10;
  }
  if ( (v6->x <= 0.0 || *(float *)(v5 + 36) <= 0.0)
    && !CRoundedRectangleGeometryData::IsRoundedCorner((const struct D2D_VECTOR_2F *)(v5 + 40))
    && !CRoundedRectangleGeometryData::IsRoundedCorner(v7 + 6) )
  {
    v6 = v8 + 7;
    goto LABEL_9;
  }
LABEL_10:
  v9 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden))(*(_QWORD *)this + 72LL);
  if ( v9 == CRoundedRectangleShape::AllowsOcclusion )
    v10 = CRoundedRectangleShape::AllowsOcclusion(this);
  else
    v10 = v9(this);
  if ( v10 )
  {
    v11 = *((_QWORD *)this + 2);
    v12 = *(float *)(v11 + 36);
    if ( *(_BYTE *)(v11 + 68) )
    {
      v14 = *(float *)(a2 + 12);
      *(float *)(a2 + 4) = v12 + *(float *)(a2 + 4);
      *(float *)(a2 + 12) = v14 - *(float *)(v11 + 36);
    }
    else
    {
      *(float *)(a2 + 4) = fmaxf(v12, *(float *)(v11 + 44)) + *(float *)(a2 + 4);
      *(float *)(a2 + 12) = *(float *)(a2 + 12) - fmaxf(*(float *)(v11 + 60), *(float *)(v11 + 52));
    }
  }
  return 0LL;
}
