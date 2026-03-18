/*
 * XREFs of ApiSetEditionNonDwmTouchHitTest @ 0x140221F30
 * Callers:
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKKPEAHPEAU_InputHitTestResult@@@Z @ 0x1400C3C98 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 * Callees:
 *     EditionNonDwmTouchHitTest @ 0x14023AF2C (EditionNonDwmTouchHitTest.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionNonDwmTouchHitTest(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 (*v10)(void); // rax
  int v11; // eax
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _BYTE v20[112]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  v10 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 48) + 6096LL);
  if ( v10 )
    v11 = v10();
  else
    v11 = -1073741637;
  if ( v11 >= 0 )
  {
    v12 = (_OWORD *)EditionNonDwmTouchHitTest(v20, a2, a3, a4);
    v13 = v12[1];
    *a1 = *v12;
    v14 = v12[2];
    a1[1] = v13;
    v15 = v12[3];
    a1[2] = v14;
    v16 = v12[4];
    a1[3] = v15;
    v17 = v12[5];
    a1[4] = v16;
    v18 = v12[6];
    a1[5] = v17;
    a1[6] = v18;
  }
  return a1;
}
