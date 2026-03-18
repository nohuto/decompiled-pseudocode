/*
 * XREFs of ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x180170E80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800A0750 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800BA8D0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180141330 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18016AC8C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEAPEAV1@@Z @ 0x180170D1C (-Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEA.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1801711D8 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x180171DB0 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
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
  int v9; // ecx
  char v10; // al
  struct CPrimitiveGroupDrawListBrush *v11; // rcx
  __int64 v12; // xmm1_8
  __m128 v13; // xmm0
  CMultiPrimitiveDrawListBrush *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-50h]
  CPrimitiveGroupDrawListBrush *v20; // [rsp+38h] [rbp-38h] BYREF
  char v21; // [rsp+40h] [rbp-30h]
  _BYTE v22[40]; // [rsp+48h] [rbp-28h] BYREF
  CPrimitiveGroupDrawListBrush *v23; // [rsp+98h] [rbp+28h]
  CMultiPrimitiveDrawListBrush *v24; // [rsp+A0h] [rbp+30h] BYREF

  CBrushDrawListGenerator::Reset(a3, (__int64)a2, (__int64)a3);
  v5 = (CPrimitiveGroup *)*((_QWORD *)a2 + 16);
  v23 = 0LL;
  memset(v22, 0, sizeof(v22));
  v6 = CSurfaceBrush::ComputeLayout(
         a2,
         (const struct D2D_SIZE_F *)((char *)a3 + 44),
         (struct CContent::LayoutData *)v22,
         0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v18 = v6;
    v19 = 1742;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v19, 0LL);
    goto LABEL_9;
  }
  v8 = CPrimitiveGroup::EnsureDrawListGenerator(v5);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1EEu, 0LL);
    v19 = 1744;
LABEL_15:
    v18 = v7;
    goto LABEL_13;
  }
  v20 = 0LL;
  v9 = *((_DWORD *)a2 + 31);
  v21 = 1;
  v10 = InterpolationMode::FromD2D1InterpolationMode(v9);
  v11 = (struct CPrimitiveGroupDrawListBrush *)*((_QWORD *)v5 + 16);
  LOBYTE(v24) = v10;
  *(_WORD *)((char *)&v24 + 1) = 257;
  v7 = CPrimitiveGroupDrawListBrush::Create(v11, (__int16 *)&v24, &v20);
  if ( v21 )
    v23 = v20;
  if ( v7 < 0 )
  {
    v19 = 1747;
    goto LABEL_15;
  }
  v12 = *(_QWORD *)&v22[16];
  *(_OWORD *)((char *)v23 + 8) = *(_OWORD *)v22;
  v13 = *(__m128 *)&v22[24];
  *((_QWORD *)v23 + 3) = v12;
  *((_BYTE *)v23 + 52) = 1;
  *((__m128 *)v23 + 2) = v13;
  *((_DWORD *)v23 + 12) = 50529027;
  if ( *((_BYTE *)a2 + 200) )
  {
    *((_QWORD *)v23 + 7) = _mm_unpacklo_ps(v13, _mm_shuffle_ps(v13, v13, 85)).m128_u64[0];
    *((_BYTE *)v23 + 64) = 1;
  }
  v14 = v23;
  v23 = 0LL;
  v24 = v14;
  CBrushDrawListGenerator::AttachInput((__int64)a3, 0, (__int64 *)&v24);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v24, v15, v16);
LABEL_9:
  if ( v23 )
    CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v23, 1u);
  return (unsigned int)v7;
}
