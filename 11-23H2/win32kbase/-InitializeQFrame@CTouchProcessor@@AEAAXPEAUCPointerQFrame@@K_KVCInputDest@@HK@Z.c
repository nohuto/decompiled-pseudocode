/*
 * XREFs of ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C00E4706
 * Callers:
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C01D6D10 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C01D6F38 (-SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KV.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C00E4756 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01B53CC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

void __fastcall CTouchProcessor::InitializeQFrame(__int64 a1, __int64 a2, int a3, __int64 a4, CInputDest *a5, int a6)
{
  CTouchProcessor *v7; // rcx

  *(_DWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = a4;
  CInputDest::operator=(a2 + 16, a5);
  *(_DWORD *)(a2 + 136) = 0;
  *(_DWORD *)(a2 + 140) &= 0xFFFFFFE7;
  CTouchProcessor::InitializeQFrameCoalesceState(v7, (struct CPointerQFrame *)a2, a6);
  CInputDest::SetEmpty(a5);
}
