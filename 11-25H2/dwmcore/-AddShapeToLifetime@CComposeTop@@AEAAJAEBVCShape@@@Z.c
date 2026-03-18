/*
 * XREFs of ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x18022FBF0
 * Callers:
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075D1C (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F510 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180075260 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

__int64 __fastcall CComposeTop::AddShapeToLifetime(CComposeTop *this, const struct CShape *a2)
{
  CRectanglesShape **v2; // rdi
  CRectanglesShape *v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // ebx
  int v8; // eax
  CComplexShape *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CRectanglesShape **)((char *)this + 160);
  v4 = (CRectanglesShape *)*((_QWORD *)this + 20);
  if ( v4 )
    goto LABEL_7;
  v5 = MIDL_user_allocate(0x60uLL);
  v6 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x60uLL);
    *v6 = &CRegionShape::`vftable';
    v6[2] = v6 + 3;
    *((_DWORD *)v6 + 6) = 0;
    v6[11] = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  std::unique_ptr<CShape>::reset(v2, (CRectanglesShape *)v6);
  v4 = *v2;
  if ( *v2 )
  {
LABEL_7:
    v10 = 0LL;
    v8 = CShape::Combine(v4, (__int64)a2, a2, 0LL, 0, &v10);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xCEu, 0LL);
    else
      std::unique_ptr<CShape>::reset(v2, v10);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xC7u, 0LL);
  }
  return v7;
}
