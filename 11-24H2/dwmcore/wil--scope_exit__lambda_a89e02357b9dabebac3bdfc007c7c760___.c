/*
 * XREFs of wil::scope_exit__lambda_a89e02357b9dabebac3bdfc007c7c760___ @ 0x1802887D0
 * Callers:
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x180172D2C (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDComposi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_a89e02357b9dabebac3bdfc007c7c760___(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
