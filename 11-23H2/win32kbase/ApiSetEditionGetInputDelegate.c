/*
 * XREFs of ApiSetEditionGetInputDelegate @ 0x1C02061B0
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01C2454 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01CDFE4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D354C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     EditionGetInputDelegate @ 0x1C0232A7C (EditionGetInputDelegate.c)
 */

__int64 __fastcall ApiSetEditionGetInputDelegate(_OWORD *a1)
{
  __int64 v1; // rbx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v9[7]; // [rsp+20h] [rbp-78h] BYREF

  v1 = 0LL;
  if ( qword_1C0296920 && (int)qword_1C0296920() >= 0 )
  {
    v3 = a1[1];
    v9[0] = *a1;
    v9[2] = a1[2];
    v4 = a1[4];
    v9[1] = v3;
    v5 = a1[3];
    v9[4] = v4;
    v6 = a1[6];
    v9[3] = v5;
    v7 = a1[5];
    v9[6] = v6;
    v9[5] = v7;
    return EditionGetInputDelegate(v9);
  }
  return v1;
}
