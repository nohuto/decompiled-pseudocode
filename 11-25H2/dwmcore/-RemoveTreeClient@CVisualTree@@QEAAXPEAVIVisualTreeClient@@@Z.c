/*
 * XREFs of ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x1800C196C
 * Callers:
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x1800C1918 (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1802DC6EC (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801CE750 (-clear_region@-$vector_facade@PEAVIVisualTreeClient@@V-$buffer_impl@PEAVIVisualTreeClient@@$03$0.c)
 */

void __fastcall CVisualTree::RemoveTreeClient(CVisualTree *this, struct IVisualTreeClient *a2)
{
  struct IVisualTreeClient ***v4; // rcx
  struct IVisualTreeClient **i; // rdx

  v4 = (struct IVisualTreeClient ***)((char *)this + 2448);
  for ( i = *v4; i != *((struct IVisualTreeClient ***)this + 307); ++i )
  {
    if ( *i == a2 )
    {
      detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::clear_region(
        v4,
        i - *v4,
        1LL);
      *((_BYTE *)this + 2628) = 1;
      return;
    }
  }
}
