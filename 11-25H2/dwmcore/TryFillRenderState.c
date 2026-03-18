/*
 * XREFs of TryFillRenderState @ 0x180177164
 * Callers:
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801ACA34 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801AD1D0 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18023BC60 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 * Callees:
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080770 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18017741C (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180177CE0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TryFillRenderState(CDrawingContext *this, unsigned __int8 a2, int a3, int a4, __int64 a5)
{
  int v5; // xmm6_4
  int v7; // r12d
  __int64 v8; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v9; // r8
  __int64 v10; // r9
  int v11; // r10d
  __int32 v12; // xmm5_4
  int v13; // xmm4_4
  int v14; // xmm3_4
  int v15; // xmm2_4
  int v16; // xmm1_4
  int v17; // eax
  int v18; // xmm0_4
  __int64 v19; // rax
  BOOL IsHDRTarget; // ecx
  char result; // al
  bool v22; // al
  __m128 v23; // [rsp+28h] [rbp-31h] BYREF
  int v24; // [rsp+38h] [rbp-21h]
  int v25; // [rsp+3Ch] [rbp-1Dh]
  __int64 v26; // [rsp+58h] [rbp-1h]
  int v27; // [rsp+68h] [rbp+Fh]

  v5 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v26 = 0LL;
  v7 = a2;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 48) = v26;
  if ( a3 == a4 )
  {
    *(_DWORD *)a5 = 1065353216;
    v16 = 0;
    v15 = 0;
    v14 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v13 = 0;
    v12 = 0;
  }
  else
  {
    v27 = 0;
    CMatrixStack::Top((CDrawingContext *)((char *)this + 288), (struct CMILMatrix *)&v23);
    if ( !v11 )
    {
      v22 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v23, &v23, v9);
      LOWORD(v27) = v27 & 0xC003;
      if ( !v22 )
        return 0;
    }
    LOBYTE(v8) = 1;
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>(&v23, v8, v9, v10) )
      return 0;
    v12 = v23.m128_i32[1];
    v13 = v24;
    v14 = v25;
    v15 = v26;
    v16 = HIDWORD(v26);
    *(_DWORD *)a5 = v23.m128_i32[0];
  }
  *(_DWORD *)(a5 + 4) = v12;
  *(_DWORD *)(a5 + 8) = v13;
  *(_DWORD *)(a5 + 12) = v14;
  *(_DWORD *)(a5 + 16) = v15;
  *(_DWORD *)(a5 + 20) = v16;
  v17 = *((_DWORD *)this + 792);
  if ( v17 )
    v18 = *(_DWORD *)(*((_QWORD *)this + 395) + 4LL * (unsigned int)(v17 - 1));
  else
    v18 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  *(_DWORD *)(a5 + 24) = v18;
  v19 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 16LL))((char *)this + 24);
  if ( *(float *)(v19 + 16) != 0.0 )
    v5 = *(_DWORD *)(v19 + 16);
  *(_DWORD *)(a5 + 44) = v5;
  IsHDRTarget = CDrawingContext::IsHDRTarget(this);
  result = 1;
  *(_DWORD *)(a5 + 48) = IsHDRTarget;
  *(_DWORD *)(a5 + 52) = v7;
  return result;
}
