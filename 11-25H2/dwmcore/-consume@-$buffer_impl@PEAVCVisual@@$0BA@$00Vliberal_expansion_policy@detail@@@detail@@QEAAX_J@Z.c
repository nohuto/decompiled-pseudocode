/*
 * XREFs of ?consume@?$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_J@Z @ 0x1801EC978
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>::consume(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = 8 * a2;
  *(_QWORD *)(a1 + 8) += 8 * a2;
  return result;
}
