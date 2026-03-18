/*
 * XREFs of ?clear@?$vector_facade@W4Type@IRenderTarget@@V?$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18021FEEC
 * Callers:
 *     ?ResetDrawing@CRenderPerf@@IEAAXXZ @ 0x18021FE7C (-ResetDrawing@CRenderPerf@@IEAAXXZ.c)
 *     ??1?$vector_facade@W4Type@IRenderTarget@@V?$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180259E28 (--1-$vector_facade@W4Type@IRenderTarget@@V-$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_exp.c)
 * Callees:
 *     ?clear_region@?$vector_facade@W4Type@IRenderTarget@@V?$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1802127F0 (-clear_region@-$vector_facade@W4Type@IRenderTarget@@V-$buffer_impl@W4Type@IRenderTarget@@$03$00V.c)
 */

__int64 __fastcall detail::vector_facade<enum IRenderTarget::Type,detail::buffer_impl<enum IRenderTarget::Type,4,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = (a1[1] - *a1) >> 2;
  if ( v1 )
    return detail::vector_facade<enum IRenderTarget::Type,detail::buffer_impl<enum IRenderTarget::Type,4,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL,
             v1);
  return result;
}
