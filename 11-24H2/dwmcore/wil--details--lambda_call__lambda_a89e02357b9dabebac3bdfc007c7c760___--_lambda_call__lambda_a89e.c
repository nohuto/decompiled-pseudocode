/*
 * XREFs of wil::details::lambda_call__lambda_a89e02357b9dabebac3bdfc007c7c760___::_lambda_call__lambda_a89e02357b9dabebac3bdfc007c7c760___ @ 0x1802888BC
 * Callers:
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x180172D2C (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDComposi.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022AA04 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::lambda_call__lambda_a89e02357b9dabebac3bdfc007c7c760___::_lambda_call__lambda_a89e02357b9dabebac3bdfc007c7c760___(
        __int64 *a1)
{
  __int64 v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 40) + 72LL))(*(_QWORD *)(v1 + 40));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCB,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
        (const char *)(unsigned int)v2);
  }
}
