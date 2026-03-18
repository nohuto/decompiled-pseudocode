/*
 * XREFs of ?GetBoundsForOcclusion@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C2890
 * Callers:
 *     ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z @ 0x180266808 (-Push@COccluderClipStack@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapePtr::GetBoundsForOcclusion(CRoundedRectangleShape **a1, struct D2D_RECT_F *a2)
{
  CRoundedRectangleShape *v2; // rcx
  __int64 (__fastcall *v3)(CRoundedRectangleShape *, __int64); // r8
  __int64 (__fastcall *v4)(CRoundedRectangleShape *, struct D2D_RECT_F *, _QWORD); // rax

  v2 = *a1;
  if ( !v2 )
    return 2291662987LL;
  v3 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, __int64))(*(_QWORD *)v2 + 88LL);
  if ( (char *)v3 == (char *)CShape::GetBoundsForOcclusion )
  {
    v4 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v2 + 48LL);
    if ( (char *)v4 == (char *)CRectanglesShape::GetTightBounds )
    {
      return CRectanglesShape::GetTightBounds((__int64)v2, a2, 0LL);
    }
    else if ( (char *)v4 == (char *)CRegionShape::GetTightBounds )
    {
      return CRegionShape::GetTightBounds((__int64)v2, (__int64)a2, 0LL);
    }
    else
    {
      return v4(v2, a2, 0LL);
    }
  }
  else if ( v3 == CRoundedRectangleShape::GetBoundsForOcclusion )
  {
    return CRoundedRectangleShape::GetBoundsForOcclusion(v2, (__int64)a2);
  }
  else
  {
    return (*(__int64 (__fastcall **)(CRoundedRectangleShape *))(*(_QWORD *)v2 + 88LL))(v2);
  }
}
