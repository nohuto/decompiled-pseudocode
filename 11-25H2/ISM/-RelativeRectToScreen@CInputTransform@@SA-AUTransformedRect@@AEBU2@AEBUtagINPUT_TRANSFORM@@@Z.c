/*
 * XREFs of ?RelativeRectToScreen@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1801342A0
 * Callers:
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180133C00 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     ?RelativeRectToScreen@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z @ 0x1801340E8 (-RelativeRectToScreen@CInputTransform@@QEAA-AUTransformedRect@@AEBU2@@Z.c)
 */

__int64 __fastcall CInputTransform::RelativeRectToScreen(__int64 a1, float *a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v9[4]; // [rsp+20h] [rbp-58h] BYREF
  char v10; // [rsp+60h] [rbp-18h]

  v3 = *a3;
  v10 = 0;
  v5 = a3[1];
  v9[0] = v3;
  v6 = a3[2];
  v9[1] = v5;
  v7 = a3[3];
  v9[2] = v6;
  v9[3] = v7;
  CInputTransform::RelativeRectToScreen((float *)v9, a1, a2);
  return a1;
}
