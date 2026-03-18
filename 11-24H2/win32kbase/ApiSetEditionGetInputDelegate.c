/*
 * XREFs of ApiSetEditionGetInputDelegate @ 0x140191B08
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140185B9C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1401FB424 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x140202400 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     EditionGetInputDelegate @ 0x140106BB8 (EditionGetInputDelegate.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionGetInputDelegate(_OWORD *a1, __int64 a2))(_OWORD *)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 (*v5)(void); // rax
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD v13[7]; // [rsp+20h] [rbp-78h] BYREF

  v3 = 0LL;
  v4 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48);
  v5 = *(__int64 (**)(void))(v4 + 6176);
  if ( v5 )
    v6 = v5();
  else
    v6 = -1073741637;
  if ( v6 >= 0 )
  {
    v7 = a1[1];
    v13[0] = *a1;
    v13[2] = a1[2];
    v8 = a1[4];
    v13[1] = v7;
    v9 = a1[3];
    v13[4] = v8;
    v10 = a1[6];
    v13[3] = v9;
    v11 = a1[5];
    v13[6] = v10;
    v13[5] = v11;
    return EditionGetInputDelegate(v13, v4);
  }
  return (__int64 (__fastcall *)(_OWORD *))v3;
}
