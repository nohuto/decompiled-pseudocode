/*
 * XREFs of ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x18028D3F4
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18006976C (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18004AC10 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x180069F4C (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x18006A2A0 (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTransform@CComponentTransform2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18020EECC (-SetTransform@CComponentTransform2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CProjectedShadow::AdjustSurfaceBrush(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct CSurfaceBrush *a3)
{
  __int64 v3; // r9
  struct D2D_MATRIX_3X2_F *v6; // r9
  char *v7; // rax
  __int64 v8; // rcx
  struct CComponentTransform2D *v9; // rbx
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-68h]
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  struct D2D_RECT_F v15; // [rsp+40h] [rbp-48h] BYREF
  struct D2D_MATRIX_3X2_F v16; // [rsp+50h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a2 + 993);
  v14 = *((_OWORD *)a3 + 11);
  CProjectedShadow::CalculateBounds((__int64)this, (__int64)&v15, (__int64)a3, v3);
  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v14, &v15, (const struct D2D_RECT_F *)&v16, v6);
  *(_QWORD *)&v15.left = 0LL;
  v7 = (char *)DefaultHeap::AllocClear(0xE0uLL);
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 3);
    *((_DWORD *)v7 + 2) = 0;
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = v8;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    *((_DWORD *)v7 + 10) = 0;
    *((_DWORD *)v7 + 36) = 0;
    *((_DWORD *)v7 + 10) |= 1u;
    v7[156] = 0;
    *(_QWORD *)v7 = &CComponentTransform2D::`vftable';
    *((_DWORD *)v7 + 46) = 1065353216;
    *((_DWORD *)v7 + 47) = 1065353216;
    *(_OWORD *)(v7 + 196) = *(_OWORD *)&CComponentTransform2D::sc_defaultTransformMatrix.m11;
    *(_QWORD *)(v7 + 212) = 0LL;
  }
  wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)&v15, (__int64)v7);
  v9 = *(struct CComponentTransform2D **)&v15.left;
  if ( *(_QWORD *)&v15.left )
  {
    v11 = CComponentTransform2D::SetTransform(*(CComponentTransform2D **)&v15.left, &v16);
    v10 = v11;
    if ( v11 < 0 )
    {
      v13 = 1154;
    }
    else
    {
      v11 = CSurfaceBrush::SetTransform((struct CResource **)a3, v9);
      v10 = v11;
      if ( v11 >= 0 )
        goto LABEL_10;
      v13 = 1156;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v13, 0LL);
    goto LABEL_10;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x480u, 0LL);
LABEL_10:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  return v10;
}
