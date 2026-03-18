/*
 * XREFs of ConvertPointCoordinates @ 0x1401584C4
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14005F298 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1401829E0 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1401EA4D8 (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1401EBC98 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x14020ED30 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     SynthesizeMitTouchInput @ 0x140218E34 (SynthesizeMitTouchInput.c)
 * Callees:
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1400B7480 (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
 */

__int64 __fastcall ConvertPointCoordinates(__int64 a1, int *a2, int *a3, _QWORD *a4)
{
  int v4; // r10d
  int v6; // eax
  __int64 v8; // rbx
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 plResult; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a2;
  v6 = a3[2];
  v8 = *a3;
  HIDWORD(plResult) = 0;
  v9 = ((int)a1 - v4) * (__int64)(v6 - (int)v8);
  v10 = a2[2] - v4;
  v11 = 2 * v9;
  if ( v9 <= 0 )
    v12 = v11 - v10;
  else
    v12 = v10 + v11;
  v13 = v8 + v12 / (2 * v10);
  if ( (unsigned __int64)(v13 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  LODWORD(plResult) = v13;
  ConvertCoordinatesWithRoundingNoBounding(a2[1], a2[3], a3[1], a3[3], SHIDWORD(a1), (LONG *)&plResult + 1);
  *a4 = plResult;
  return 1LL;
}
