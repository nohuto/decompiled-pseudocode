/*
 * XREFs of ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x180057910
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x18007AC1C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057A20 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180058110 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?IsEmpty@CRoundedRectangleShape@@UEBA_NXZ @ 0x18005B2E0 (-IsEmpty@CRoundedRectangleShape@@UEBA_NXZ.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1801C22A0 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CShapePtr::IsEmpty(CRoundedRectangleShape **this)
{
  CRoundedRectangleShape *v1; // rcx
  bool (__fastcall *v2)(CRectanglesShape *__hidden); // rdx
  void (__fastcall *v3)(CRoundedRectangleShape *, __int128 *, _QWORD); // rax
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v6; // [rsp+30h] [rbp-28h] BYREF

  v1 = *this;
  if ( !v1 )
    return 1;
  v2 = *(bool (__fastcall **)(CRectanglesShape *__hidden))(*(_QWORD *)v1 + 16LL);
  if ( v2 == CShape::IsEmpty )
  {
    v3 = *(void (__fastcall **)(CRoundedRectangleShape *, __int128 *, _QWORD))(*(_QWORD *)v1 + 48LL);
    v5 = 0LL;
    if ( (char *)v3 == (char *)CRegionShape::GetTightBounds )
    {
      v6 = 0LL;
      if ( FastRegion::CRegion::GetBoundingRect((CRoundedRectangleShape *)((char *)v1 + 16), &v6) )
      {
        *(float *)&v5 = (float)v6.left;
        *((float *)&v5 + 1) = (float)v6.top;
        *((float *)&v5 + 2) = (float)v6.right;
        *((float *)&v5 + 3) = (float)v6.bottom;
      }
    }
    else
    {
      v3(v1, &v5, 0LL);
    }
    result = IsRectEmptyOrInvalid(&v5);
  }
  else if ( v2 == CRoundedRectangleShape::IsEmpty )
  {
    result = CRoundedRectangleShape::IsEmpty(v1);
  }
  else
  {
    result = v2 == CRectanglesShape::IsEmpty
           ? CRectanglesShape::IsEmpty(v1)
           : (*(__int64 (__fastcall **)(CRoundedRectangleShape *))(*(_QWORD *)v1 + 16LL))(v1);
  }
  if ( result )
    return 1;
  return result;
}
