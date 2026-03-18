/*
 * XREFs of ?clear@?$vector_facade@PEBVCVisualTree@@V?$buffer_impl@PEBVCVisualTree@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180020CA0
 * Callers:
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CVisualTree const *,detail::buffer_impl<CVisualTree const *,8,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = a1[1];
  v2 = (result - *a1) >> 3;
  if ( v2 )
  {
    result -= 8 * v2;
    a1[1] = result;
  }
  return result;
}
