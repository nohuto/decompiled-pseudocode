/*
 * XREFs of ??$move@V?$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@std@@V?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@V?$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@0@0V12@@Z @ 0x180263C18
 * Callers:
 *     ?clear_region@?$vector_facade@VCTempOcclusionRect@COcclusionContext@@V?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180265CC4 (-clear_region@-$vector_facade@VCTempOcclusionRect@COcclusionContext@@V-$buffer_impl@VCTempOcclus.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18027B160 (-ensure_extra_capacity@-$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expan.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@_J@Z @ 0x180263ACC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stde.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall std::move<std::move_iterator<COcclusionContext::CTempOcclusionRect *>,stdext::checked_array_iterator<COcclusionContext::CTempOcclusionRect *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rsi
  void *v8; // rdi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<COcclusionContext::CTempOcclusionRect *> &,__int64>(
                 a4,
                 0xCCCCCCCCCCCCCCCDuLL * ((a3 - (__int64)a2) >> 2));
  memmove_0(v8, a2, v5);
  result = a1;
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)((__int64)v8 + v5 - *a4) >> 2);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
