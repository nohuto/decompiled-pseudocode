/*
 * XREFs of ?AddTightDirtyRect@?$CTargetDirtyBase@$07@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000B7B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180042640 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x180043E30 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTargetDirtyBase<8>::AddTightDirtyRect(__int64 a1, const struct D2D_RECT_F *a2)
{
  float v4; // xmm7_4
  float v5; // xmm6_4
  __int64 v6; // rax
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  const struct tagRECT *v11; // rax
  CRegion *v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v15[16]; // [rsp+38h] [rbp-38h] BYREF

  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 40LL))(
    *(_QWORD *)(a1 + 8) + 8LL,
    &v13);
  if ( a2 )
  {
    v4 = (float)(int)v13;
    v5 = (float)SHIDWORD(v13);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8));
    v14 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<1>(v6, a2, (float *)&v14);
    v7 = *(float *)&v14;
    if ( *(float *)&v14 < 0.0 )
    {
      v7 = 0.0;
      LODWORD(v14) = 0;
    }
    v8 = *((float *)&v14 + 1);
    if ( *((float *)&v14 + 1) < 0.0 )
    {
      DWORD1(v14) = 0;
      v8 = 0.0;
    }
    v9 = *((float *)&v14 + 2);
    if ( *((float *)&v14 + 2) > v4 )
    {
      *((float *)&v14 + 2) = v4;
      v9 = v4;
    }
    v10 = *((float *)&v14 + 3);
    if ( *((float *)&v14 + 3) > v5 )
    {
      *((float *)&v14 + 3) = v5;
      v10 = v5;
    }
    if ( v9 > v7 && v10 > v8 )
    {
      v11 = (const struct tagRECT *)PixelAlign(v15, &v14);
      CRegion::AddRectangle(*(CRegion **)(a1 + 464), v11);
    }
  }
  else
  {
    *(_QWORD *)&v14 = 0LL;
    v12 = *(CRegion **)(a1 + 464);
    *((_QWORD *)&v14 + 1) = v13;
    CRegion::SetRectangle(v12, (const struct MilRectU *)&v14);
  }
}
