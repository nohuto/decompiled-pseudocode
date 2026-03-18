/*
 * XREFs of TryFillRenderState @ 0x18005D724
 * Callers:
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18018E754 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18018EF14 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18022FA30 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 * Callees:
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18005D9DC (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006FAC0 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800FB0F0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180124400 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TryFillRenderState(CDrawingContext *this, unsigned __int8 a2, int a3, int a4, __int64 a5)
{
  int v5; // xmm6_4
  int v7; // r12d
  __int64 v8; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v9; // r8
  int v10; // r10d
  int v11; // xmm5_4
  int v12; // xmm4_4
  int v13; // xmm3_4
  int v14; // xmm2_4
  int v15; // xmm1_4
  int v16; // eax
  int v17; // xmm0_4
  __int64 v18; // rax
  BOOL IsHDRTarget; // ecx
  char result; // al
  bool v21; // al
  _DWORD v22[12]; // [rsp+28h] [rbp-31h] BYREF
  __int64 v23; // [rsp+58h] [rbp-1h]
  int v24; // [rsp+68h] [rbp+Fh]

  v5 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v23 = 0LL;
  v7 = a2;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 48) = v23;
  if ( a3 == a4 )
  {
    *(_DWORD *)a5 = 1065353216;
    v15 = 0;
    v14 = 0;
    v13 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v12 = 0;
    v11 = 0;
  }
  else
  {
    v24 = 0;
    CMatrixStack::Top((CDrawingContext *)((char *)this + 288), (struct CMILMatrix *)v22);
    if ( !v10 )
    {
      v21 = Windows::Foundation::Numerics::invert(
              (Windows::Foundation::Numerics *)v22,
              (const struct Windows::Foundation::Numerics::float4x4 *)v22,
              v9);
      LOWORD(v24) = v24 & 0xC003;
      if ( !v21 )
        return 0;
    }
    LOBYTE(v8) = 1;
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>(v22, v8) )
      return 0;
    v11 = v22[1];
    v12 = v22[4];
    v13 = v22[5];
    v14 = v23;
    v15 = HIDWORD(v23);
    *(_DWORD *)a5 = v22[0];
  }
  *(_DWORD *)(a5 + 4) = v11;
  *(_DWORD *)(a5 + 8) = v12;
  *(_DWORD *)(a5 + 12) = v13;
  *(_DWORD *)(a5 + 16) = v14;
  *(_DWORD *)(a5 + 20) = v15;
  v16 = *((_DWORD *)this + 792);
  if ( v16 )
    v17 = *(_DWORD *)(*((_QWORD *)this + 395) + 4LL * (unsigned int)(v16 - 1));
  else
    v17 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  *(_DWORD *)(a5 + 24) = v17;
  v18 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 16LL))((char *)this + 24);
  if ( *(float *)(v18 + 16) != 0.0 )
    v5 = *(_DWORD *)(v18 + 16);
  *(_DWORD *)(a5 + 44) = v5;
  IsHDRTarget = CDrawingContext::IsHDRTarget(this);
  result = 1;
  *(_DWORD *)(a5 + 48) = IsHDRTarget;
  *(_DWORD *)(a5 + 52) = v7;
  return result;
}
