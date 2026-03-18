/*
 * XREFs of ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C01D79D4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D4A80 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D95B4 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0052DB0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     CanHitTestInDwm @ 0x1C0057D00 (CanHitTestInDwm.c)
 *     DCompHitTest @ 0x1C0058000 (DCompHitTest.c)
 *     ApiSetEditionPostDwmSpeedHitTest @ 0x1C0058F74 (ApiSetEditionPostDwmSpeedHitTest.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ApiSetEditionNonDwmTouchHitTest @ 0x1C0206E04 (ApiSetEditionNonDwmTouchHitTest.c)
 */

CInputDest *__fastcall CTouchProcessor::TouchHitTest(
        CInputDest *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rbx
  int v12; // ebx
  unsigned __int64 v13; // rbx
  _OWORD *v14; // rax
  __int128 v15; // xmm0
  _OWORD *v16; // rax
  _DWORD v18[5]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+44h] [rbp-BCh]
  int v20; // [rsp+4Ch] [rbp-B4h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  int v22; // [rsp+58h] [rbp-A8h]
  int v23; // [rsp+5Ch] [rbp-A4h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+68h] [rbp-98h]
  unsigned int v26; // [rsp+6Ch] [rbp-94h]
  __int64 v27; // [rsp+70h] [rbp-90h]
  int v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+7Ch] [rbp-84h]
  __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v31[7]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v32[7]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v33[192]; // [rsp+170h] [rbp+70h] BYREF

  memset(v32, 0, sizeof(v32));
  v18[0] = *(_DWORD *)(a2 + 8);
  v18[1] = *(_DWORD *)(a2 + 20);
  v18[3] = *(_DWORD *)(a2 + 12);
  v19 = *(_QWORD *)(a2 + 40);
  v21 = *(_QWORD *)(a2 + 24);
  v24 = *(_QWORD *)(a2 + 88);
  v22 = *(_DWORD *)(a2 + 72);
  v18[4] = *(_DWORD *)(a2 + 180);
  v28 = a5;
  v25 = a3;
  v11 = 0LL;
  v18[2] = 0;
  v20 = 0;
  v23 = 0;
  v29 = 0;
  v26 = a4;
  if ( qword_1C02968B0 && (int)qword_1C02968B0() >= 0 && qword_1C02968B8 )
    v11 = qword_1C02968B8(a4);
  v27 = v11;
  memset(v33, 0, sizeof(v33));
  v12 = 0;
  if ( qword_1C02968C0 )
  {
    if ( (int)qword_1C02968C0() >= 0 )
    {
      if ( qword_1C02968C8 )
      {
        v12 = qword_1C02968C8(v18, a2 + 8, v33);
        if ( v12 )
          v25 |= 0x10u;
      }
    }
  }
  v13 = (unsigned __int64)v33 & -(__int64)(v12 != 0);
  if ( CanHitTestInDwm() )
  {
    v14 = DCompHitTest(v31);
    v32[0] = *v14;
    v32[1] = v14[1];
    v32[2] = v14[2];
    v32[3] = v14[3];
    v32[4] = v14[4];
    v32[5] = v14[5];
    v15 = v14[6];
    v30 = *(_QWORD *)(a2 + 40);
    v32[6] = v15;
    ApiSetEditionPostDwmSpeedHitTest((__int64)v32, (__int64)&v30, 0LL, v13, a7, a6);
  }
  else
  {
    v16 = (_OWORD *)ApiSetEditionNonDwmTouchHitTest(v31, v18, v13, a6);
    v32[0] = *v16;
    v32[1] = v16[1];
    v32[2] = v16[2];
    v32[3] = v16[3];
    v32[4] = v16[4];
    v32[5] = v16[5];
    v32[6] = v16[6];
  }
  CInputDest::CInputDest(a1, (const struct tagINPUTDEST *)v32);
  return a1;
}
