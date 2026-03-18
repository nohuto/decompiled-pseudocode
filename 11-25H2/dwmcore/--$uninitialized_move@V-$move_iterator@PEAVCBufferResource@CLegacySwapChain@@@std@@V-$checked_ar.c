/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@0@0V12@@Z @ 0x1802D295C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801C69A0 (-ensure_extra_capacity@-$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@Z @ 0x18012504C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CLegacySwapChain::CBufferResource *>,stdext::checked_array_iterator<CLegacySwapChain::CBufferResource *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  char *v4; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v8 = (_QWORD *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *> &,__int64>(
                   a4,
                   (a3 - a2) >> 4);
  while ( v4 != a3 )
  {
    v9 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0LL;
    *v8 = v9;
    v10 = *((_QWORD *)v4 + 1);
    *((_QWORD *)v4 + 1) = 0LL;
    v8[1] = v10;
    v8 += 2;
    v4 += 16;
  }
  a4[2] = ((__int64)v8 - *a4) >> 4;
  result = a1;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
