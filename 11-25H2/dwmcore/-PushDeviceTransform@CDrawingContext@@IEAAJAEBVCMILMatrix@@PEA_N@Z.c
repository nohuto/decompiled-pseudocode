/*
 * XREFs of ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180080678
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180080580 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080770 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x180124CFC (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushDeviceTransform(
        CDrawingContext *this,
        const struct CMILMatrix *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  __int128 v3; // xmm0
  __int128 v5; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  bool *v9; // r8
  int v10; // eax
  unsigned int v11; // ebx
  _OWORD v13[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v14; // [rsp+70h] [rbp-68h]
  __m128 v15[4]; // [rsp+80h] [rbp-58h] BYREF
  int v16; // [rsp+C0h] [rbp-18h]

  v3 = *(_OWORD *)a2;
  v16 = 0;
  v5 = *((_OWORD *)a2 + 1);
  v13[0] = v3;
  v7 = *((_OWORD *)a2 + 2);
  v13[1] = v5;
  v8 = *((_OWORD *)a2 + 3);
  v13[2] = v7;
  v13[3] = v8;
  v14 = *((_DWORD *)a2 + 16);
  if ( Windows::Foundation::Numerics::invert(
         (Windows::Foundation::Numerics *)v13,
         (const struct Windows::Foundation::Numerics::float4x4 *)v13,
         a3) )
  {
    CDrawingContext::UpdateDeviceTransform(this, a2, v9);
    CMatrixStack::Top((CDrawingContext *)((char *)this + 288), (struct CMILMatrix *)v15);
    CMILMatrix::Multiply((CMILMatrix *)v15, a2);
    v10 = CDrawingContext::PushTransformInternal((const void **)this, 0LL, v15, 0, 0);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x12F9u, 0LL);
  }
  else
  {
    v11 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304441, 0x12ECu, 0LL);
  }
  return v11;
}
