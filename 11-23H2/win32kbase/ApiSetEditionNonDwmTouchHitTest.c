/*
 * XREFs of ApiSetEditionNonDwmTouchHitTest @ 0x1C0206E04
 * Callers:
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C01D79D4 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     EditionNonDwmTouchHitTest @ 0x1C0232B74 (EditionNonDwmTouchHitTest.c)
 */

_OWORD *__fastcall ApiSetEditionNonDwmTouchHitTest(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _BYTE v16[112]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( qword_1C02968D0 && (int)qword_1C02968D0() >= 0 )
  {
    v8 = (_OWORD *)EditionNonDwmTouchHitTest(v16, a2, a3, a4);
    v9 = v8[1];
    *a1 = *v8;
    v10 = v8[2];
    a1[1] = v9;
    v11 = v8[3];
    a1[2] = v10;
    v12 = v8[4];
    a1[3] = v11;
    v13 = v8[5];
    a1[4] = v12;
    v14 = v8[6];
    a1[5] = v13;
    a1[6] = v14;
  }
  return a1;
}
