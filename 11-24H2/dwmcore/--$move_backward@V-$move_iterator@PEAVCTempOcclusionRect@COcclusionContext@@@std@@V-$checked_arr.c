/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@std@@V?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@V?$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@0@0V12@@Z @ 0x18027AB78
 * Callers:
 *     ?reserve_region@?$vector_facade@VCTempOcclusionRect@COcclusionContext@@V?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCTempOcclusionRect@COcclusionContext@@_K0@Z @ 0x18027B29C (-reserve_region@-$vector_facade@VCTempOcclusionRect@COcclusionContext@@V-$buffer_impl@VCTempOccl.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@_J@Z @ 0x180263ACC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stde.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<COcclusionContext::CTempOcclusionRect *>,stdext::checked_array_iterator<COcclusionContext::CTempOcclusionRect *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rdi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<COcclusionContext::CTempOcclusionRect *> &,__int64>(
         a4,
         0x3333333333333333LL * ((a3 - (__int64)a2) >> 2));
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL * (((__int64)memmove_0((void *)(v8 - v5), a2, v5) - *a4) >> 2);
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
