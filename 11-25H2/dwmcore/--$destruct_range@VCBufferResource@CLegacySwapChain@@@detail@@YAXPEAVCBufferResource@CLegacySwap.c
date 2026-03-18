/*
 * XREFs of ??$destruct_range@VCBufferResource@CLegacySwapChain@@@detail@@YAXPEAVCBufferResource@CLegacySwapChain@@0@Z @ 0x1801C68F4
 * Callers:
 *     ?clear_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801C5D14 (-clear_region@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResource.c)
 *     ?reserve_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCBufferResource@CLegacySwapChain@@_K0@Z @ 0x1801C63F8 (-reserve_region@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResour.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801C69A0 (-ensure_extra_capacity@-$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion.c)
 * Callees:
 *     ??1CBufferResource@CLegacySwapChain@@QEAA@XZ @ 0x1801C6B50 (--1CBufferResource@CLegacySwapChain@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<CLegacySwapChain::CBufferResource>(
        CLegacySwapChain::CBufferResource *this,
        CLegacySwapChain::CBufferResource *a2)
{
  CLegacySwapChain::CBufferResource *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CLegacySwapChain::CBufferResource::~CBufferResource(v3);
      v3 = (CLegacySwapChain::CBufferResource *)((char *)v3 + 16);
    }
    while ( v3 != a2 );
  }
}
