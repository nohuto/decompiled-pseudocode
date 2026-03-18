/*
 * XREFs of ?clear@?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180243C40
 * Callers:
 *     ?SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplayScanout@Core@Display@Devices@Windows@@_NW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180066B38 (-SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@.c)
 *     ??1?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180243C1C (--1-$vector_facade@URectInt32@Graphics@Windows@@V-$buffer_impl@URectInt32@Graphics@Windows@@$07$.c)
 * Callees:
 *     ?clear_region@?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180243C68 (-clear_region@-$vector_facade@URectInt32@Graphics@Windows@@V-$buffer_impl@URectInt32@Graphics@Wi.c)
 */

__int64 __fastcall detail::vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( (__int64)(a1[1] - *a1) >> 4 )
    return detail::vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>::clear_region();
  return result;
}
