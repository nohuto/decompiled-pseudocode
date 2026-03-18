/*
 * XREFs of ??$move@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@0@0V12@@Z @ 0x1802D278C
 * Callers:
 *     ?clear_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801C5D14 (-clear_region@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResource.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@Z @ 0x18012504C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J.c)
 *     ??4CBufferResource@CLegacySwapChain@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802D2D70 (--4CBufferResource@CLegacySwapChain@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::move<std::move_iterator<CLegacySwapChain::CBufferResource *>,stdext::checked_array_iterator<CLegacySwapChain::CBufferResource *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a2;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *> &,__int64>(
         a4,
         (a3 - a2) >> 4);
  while ( v4 != a3 )
  {
    CLegacySwapChain::CBufferResource::operator=(v8, v4);
    v8 += 16LL;
    v4 += 16LL;
  }
  result = a1;
  a4[2] = (v8 - *a4) >> 4;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
