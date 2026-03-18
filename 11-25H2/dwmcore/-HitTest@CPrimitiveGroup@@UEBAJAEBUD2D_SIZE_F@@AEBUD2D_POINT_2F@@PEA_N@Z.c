/*
 * XREFs of ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007BAB0
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007AE20 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007B390 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18007A230 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?FillContainsPoint@ID2D1Geometry@@QEBAJUD2D_POINT_2F@@PEBUD2D_MATRIX_3X2_F@@PEAH@Z @ 0x180202584 (-FillContainsPoint@ID2D1Geometry@@QEBAJUD2D_POINT_2F@@PEBUD2D_MATRIX_3X2_F@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::HitTest(
        CPrimitiveGroup *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  double v4; // xmm2_8
  bool v5; // bl
  float y; // xmm1_4
  const struct D2D_MATRIX_3X2_F *v10; // r8
  __int64 v11; // rcx
  ID2D1Geometry *v13; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  *a4 = 0;
  if ( *((_QWORD *)this + 59) )
  {
    if ( a3->x >= *((float *)this + 27) && *((float *)this + 29) >= a3->x )
    {
      y = a3->y;
      if ( y >= *((float *)this + 28)
        && *((float *)this + 30) >= y
        && (int)CPrimitiveGroup::EnsureHitTestRegions((CResource **)this, (__int64)a2, v4) >= 0 )
      {
        v11 = *((_QWORD *)this + 11);
        v14 = 0;
        if ( v11 && ((*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 56LL))(v11, *a3, 0LL), v14)
          || (v13 = (ID2D1Geometry *)*((_QWORD *)this + 12)) != 0LL
          && (ID2D1Geometry::FillContainsPoint(v13, *a3, v10, &v14), v14) )
        {
          v5 = 1;
        }
        *a4 = v5;
      }
    }
  }
  return 0LL;
}
