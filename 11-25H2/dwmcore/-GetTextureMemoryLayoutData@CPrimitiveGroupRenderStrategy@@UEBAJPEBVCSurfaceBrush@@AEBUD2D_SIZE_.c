/*
 * XREFs of ?GetTextureMemoryLayoutData@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802B0500
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupRenderStrategy::GetTextureMemoryLayoutData(
        __int64 a1,
        CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        __int64 a4)
{
  __int64 v6; // r14
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  _QWORD *v11; // r8
  unsigned __int64 v12; // rdx
  int v13; // r9d
  __int64 v14; // xmm0_8
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 v20; // [rsp+30h] [rbp-29h] BYREF
  __int64 v21; // [rsp+40h] [rbp-19h]
  __int128 v22; // [rsp+48h] [rbp-11h] BYREF
  __int64 v23; // [rsp+58h] [rbp-1h]
  _OWORD v24[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v25; // [rsp+80h] [rbp+27h]

  if ( *(_QWORD *)a4 != *(_QWORD *)(a4 + 8) )
    *(_QWORD *)(a4 + 8) = *(_QWORD *)a4;
  v6 = *((_QWORD *)a2 + 16);
  v21 = 0LL;
  v25 = 0LL;
  memset(v24, 0, sizeof(v24));
  v20 = 0LL;
  v7 = CSurfaceBrush::ComputeLayout(a2, a3, (struct CContent::LayoutData *)v24, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x6BAu, 0LL);
    goto LABEL_12;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, const struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)v6 + 288LL))(v6, a3, &v20);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x6BBu, 0LL);
LABEL_12:
    v11 = (_QWORD *)v20;
    goto LABEL_13;
  }
  v10 = *((_QWORD *)&v20 + 1);
  v11 = (_QWORD *)v20;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)&v20 + 1) - v20) >> 3) )
  {
    v12 = 0LL;
    do
    {
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v22,
        (const struct D2D1::Matrix3x2F *)v24,
        (const struct D2D1::Matrix3x2F *)&v11[5 * v12]);
      v14 = v23;
      *(_OWORD *)v15 = v22;
      v12 = (unsigned int)(v13 + 1);
      *(_QWORD *)(v15 + 16) = v14;
      v10 = *((_QWORD *)&v20 + 1);
      v11 = (_QWORD *)v20;
    }
    while ( v12 < 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)&v20 + 1) - v20) >> 3) );
  }
  if ( (__int128 *)a4 != &v20 )
  {
    v16 = *(_QWORD **)a4;
    *(_QWORD *)a4 = v11;
    v11 = v16;
    *(_QWORD *)&v20 = v16;
    v17 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v10;
    v18 = *(_QWORD *)(a4 + 16);
    *((_QWORD *)&v20 + 1) = v17;
    *(_QWORD *)(a4 + 16) = v21;
    v21 = v18;
  }
LABEL_13:
  if ( v11 )
    std::_Deallocate<16,0>(v11, 8 * ((v21 - (__int64)v11) >> 3));
  return v8;
}
