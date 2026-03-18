/*
 * XREFs of ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C600
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014BF30 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C4A0 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C750 (-HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x18004E680 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18006DC10 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18007A2E0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800CE960 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180141330 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18014CE90 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::HitTest(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v6; // edi
  int v9; // ebx
  int v10; // eax
  CRectanglesShape *(__fastcall *v11)(CRectanglesShape *, char, __int64); // rax
  CRectanglesShape **v13; // [rsp+30h] [rbp-40h] BYREF
  struct CShape *v14; // [rsp+38h] [rbp-38h] BYREF
  char v15; // [rsp+40h] [rbp-30h]
  _OWORD v16[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp-8h]
  CRectanglesShape *v18; // [rsp+90h] [rbp+20h] BYREF

  v6 = 0;
  *a4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this + 17) + 16LL))(
         *((_QWORD *)this + 17),
         this)
    && a2->width > 0.0
    && a2->height > 0.0
    && !CBrush::IsEmptyDrawing(this) )
  {
    v14 = 0LL;
    v15 = 1;
    v18 = 0LL;
    v17 = 0LL;
    v13 = &v18;
    memset(v16, 0, sizeof(v16));
    v9 = CSurfaceBrush::ComputeLayout(this, a2, (struct CContent::LayoutData *)v16, &v14);
    wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v13);
    if ( v9 >= 0 && (v10 = CShape::FillContainsPoint(v18, a3, a4), v6 = v10, v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x24Fu, 0LL);
      std::unique_ptr<CShape>::~unique_ptr<CShape>(&v18);
    }
    else if ( v18 )
    {
      v11 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v18;
      if ( v11 == CRectanglesShape::`scalar deleting destructor' )
        CRectanglesShape::`scalar deleting destructor'(v18, 1, (__int64)CRectanglesShape::`scalar deleting destructor');
      else
        ((void (__fastcall *)(CRectanglesShape *, __int64))v11)(v18, 1LL);
    }
  }
  return v6;
}
