/*
 * XREFs of ?clear_region@?$vector_facade@VCTempOcclusionRect@COcclusionContext@@V?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180265CC4
 * Callers:
 *     ?clear@?$vector_facade@VCTempOcclusionRect@COcclusionContext@@V?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180265C90 (-clear@-$vector_facade@VCTempOcclusionRect@COcclusionContext@@V-$buffer_impl@VCTempOcclusionRect.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@std@@V?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@V?$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@0@0V12@@Z @ 0x180263C18 (--$move@V-$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@std@@V-$checked_array_iterat.c)
 */

__int64 __fastcall detail::vector_facade<COcclusionContext::CTempOcclusionRect,detail::buffer_impl<COcclusionContext::CTempOcclusionRect,10,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-68h]
  __int128 v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+50h] [rbp-38h]
  _BYTE v11[40]; // [rsp+60h] [rbp-28h] BYREF

  v4 = *a1;
  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - v4) >> 2);
  if ( a3 > v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v6 = 20 * a3;
  result = 5 * v5;
  if ( a3 != v5 )
  {
    *(_QWORD *)&v8 = v4;
    *((_QWORD *)&v8 + 1) = v5;
    v10 = 0LL;
    v9 = v8;
    result = std::move<std::move_iterator<COcclusionContext::CTempOcclusionRect *>,stdext::checked_array_iterator<COcclusionContext::CTempOcclusionRect *>>(
               (__int64)v11,
               (const void *)(v6 + v4),
               v4 + 20 * v5,
               &v9);
  }
  a1[1] -= v6;
  return result;
}
