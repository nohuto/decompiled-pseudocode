/*
 * XREFs of ?GetTextureMemoryLayoutData@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802A6870
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180141330 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x1802A167C (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapRenderStrategy::GetTextureMemoryLayoutData(
        __int64 a1,
        CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        _QWORD *a4)
{
  unsigned int v4; // edi
  int v8; // eax
  __int128 v9; // xmm1
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __int128 v14; // [rsp+30h] [rbp-29h] BYREF
  __int64 v15; // [rsp+40h] [rbp-19h]
  __int128 v16; // [rsp+48h] [rbp-11h] BYREF
  __int128 v17; // [rsp+58h] [rbp-1h]
  __int64 v18; // [rsp+68h] [rbp+Fh]
  __int128 v19; // [rsp+70h] [rbp+17h] BYREF
  __int64 v20; // [rsp+80h] [rbp+27h]

  v4 = 0;
  if ( *a4 != a4[1] )
    a4[1] = *a4;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(**((_QWORD **)a2 + 16) + 64LL))(
         *((_QWORD **)a2 + 16),
         42LL) )
  {
    v18 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v8 = CSurfaceBrush::ComputeLayout(a2, a3, (struct CContent::LayoutData *)&v16, 0LL);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x40Au, 0LL);
    }
    else
    {
      if ( *((float *)&v17 + 2) > 0.0 || *((float *)&v17 + 3) > 0.0 )
      {
        v20 = *((_QWORD *)&v17 + 1);
        v19 = _xmm;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v14,
          (const struct D2D1::Matrix3x2F *)&v19,
          (const struct D2D1::Matrix3x2F *)&v16);
        v9 = v14;
        v16 = v14;
        *(_QWORD *)&v17 = v15;
      }
      else
      {
        v9 = v16;
      }
      v10 = a4[1];
      if ( v10 == a4[2] )
      {
        std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
          a4,
          (_BYTE *)v10,
          (__int64)&v16);
      }
      else
      {
        v11 = v17;
        *(_OWORD *)v10 = v9;
        v12 = v18;
        *(_OWORD *)(v10 + 16) = v11;
        *(_QWORD *)(v10 + 32) = v12;
        a4[1] += 40LL;
      }
    }
  }
  return v4;
}
