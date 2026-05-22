/*
 * XREFs of ?RelativePointToScreen@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800E299C
 * Callers:
 *     ?GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA?AUtagPOINT@@U2@PEAVInputInjectionClientProxy@@@Z @ 0x1800E1F08 (-GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA-AUtagPOINT@@U2@PEAVInputInjecti.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014CAB0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180154BDC (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?RelativePointToScreen@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z @ 0x1800E2930 (-RelativePointToScreen@CInputTransform@@QEBA-AUTransformedPoint@@AEBU2@@Z.c)
 */

__int64 __fastcall CInputTransform::RelativePointToScreen(float *a1, float *a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rdx
  _OWORD v9[4]; // [rsp+20h] [rbp-58h] BYREF
  char v10; // [rsp+60h] [rbp-18h]

  v3 = *a3;
  v10 = 0;
  v4 = a3[1];
  v9[0] = v3;
  v5 = a3[2];
  v9[1] = v4;
  v6 = a3[3];
  v9[2] = v5;
  v9[3] = v6;
  CInputTransform::RelativePointToScreen((float *)v9, a1, a2);
  return v7;
}
