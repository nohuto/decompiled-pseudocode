/*
 * XREFs of ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x180178AB8
 * Callers:
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x180178724 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ @ 0x180178910 (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18017AE60 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 */

_DWORD *__fastcall ControllerProcessor::BuildMouseInputInfo(__int64 a1, _DWORD *a2, int a3)
{
  _DWORD *result; // rax
  LARGE_INTEGER v7; // [rsp+30h] [rbp+8h] BYREF

  v7.QuadPart = 0LL;
  QueryPerformanceCounter(&v7);
  memset_0(a2, 0, 0x218uLL);
  a2[6] = 536;
  *a2 = 4096;
  a2[2] = GetTickCount();
  *((LARGE_INTEGER *)a2 + 2) = v7;
  *((_QWORD *)a2 + 4) = *(_QWORD *)(a1 + 304);
  result = a2;
  a2[23] = a3;
  *((_WORD *)a2 + 45) = 0;
  *(_QWORD *)(a2 + 25) = 0LL;
  return result;
}
