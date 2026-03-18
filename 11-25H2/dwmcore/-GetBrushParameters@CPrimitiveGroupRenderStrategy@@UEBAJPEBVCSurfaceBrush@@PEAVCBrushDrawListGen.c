/*
 * XREFs of ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x180044810
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x180044780 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x180044B68 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEAPEAV1@@Z @ 0x180045780 (-Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEA.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800CE780 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800DEC4C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800E0B30 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPrimitiveGroupRenderStrategy::GetBrushParameters(
        CPrimitiveGroupRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CBrushDrawListGenerator *a3)
{
  CPrimitiveGroup *v5; // rsi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // xmm1_8
  __m128 v13; // xmm0
  CPrimitiveGroupDrawListBrush *v14; // rax
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-50h]
  CPrimitiveGroupDrawListBrush *v18; // [rsp+38h] [rbp-38h] BYREF
  char v19; // [rsp+40h] [rbp-30h]
  _BYTE v20[40]; // [rsp+48h] [rbp-28h] BYREF
  CPrimitiveGroupDrawListBrush *v21; // [rsp+98h] [rbp+28h]
  CPrimitiveGroupDrawListBrush *v22; // [rsp+A0h] [rbp+30h] BYREF

  CBrushDrawListGenerator::Reset(a3);
  v5 = (CPrimitiveGroup *)*((_QWORD *)a2 + 16);
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  v6 = CSurfaceBrush::ComputeLayout(
         a2,
         (const struct D2D_SIZE_F *)((char *)a3 + 44),
         (struct CContent::LayoutData *)v20,
         0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v16 = v6;
    v17 = 1753;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v17, 0LL);
    goto LABEL_9;
  }
  v8 = CPrimitiveGroup::EnsureDrawListGenerator(v5);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1EEu, 0LL);
    v17 = 1755;
LABEL_15:
    v16 = v7;
    goto LABEL_13;
  }
  v18 = 0LL;
  v9 = *((unsigned int *)a2 + 31);
  v19 = 1;
  v10 = InterpolationMode::FromD2D1InterpolationMode(v9);
  v11 = *((_QWORD *)v5 + 16);
  LOBYTE(v22) = v10;
  *(_WORD *)((char *)&v22 + 1) = 257;
  v7 = CPrimitiveGroupDrawListBrush::Create(v11, &v22, &v18);
  if ( v19 )
    v21 = v18;
  if ( v7 < 0 )
  {
    v17 = 1758;
    goto LABEL_15;
  }
  v12 = *(_QWORD *)&v20[16];
  *(_OWORD *)((char *)v21 + 8) = *(_OWORD *)v20;
  v13 = *(__m128 *)&v20[24];
  *((_QWORD *)v21 + 3) = v12;
  *((_BYTE *)v21 + 52) = 1;
  *((__m128 *)v21 + 2) = v13;
  *((_DWORD *)v21 + 12) = 50529027;
  if ( *((_BYTE *)a2 + 200) )
  {
    *((_QWORD *)v21 + 7) = _mm_unpacklo_ps(v13, _mm_shuffle_ps(v13, v13, 85)).m128_u64[0];
    *((_BYTE *)v21 + 64) = 1;
  }
  v14 = v21;
  v21 = 0LL;
  v22 = v14;
  CBrushDrawListGenerator::AttachInput(a3, 0LL, &v22);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v22);
LABEL_9:
  if ( v21 )
    CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v21, 1);
  return (unsigned int)v7;
}
