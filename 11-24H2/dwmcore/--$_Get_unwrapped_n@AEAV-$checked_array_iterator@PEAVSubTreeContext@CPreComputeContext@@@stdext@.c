/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@_J@Z @ 0x180248250
 * Callers:
 *     ?pop_back@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180175554 (-pop_back@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPr.c)
 *     ??$emplace_back@PEAVCVisualTree@@@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCVisualTree@@@Z @ 0x1801756FC (--$emplace_back@PEAVCVisualTree@@@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8

  v2 = a1 + 2;
  if ( a2 < 0 )
  {
    if ( *v2 >= (unsigned __int64)-a2 )
      return *a1 + 352LL * *v2;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
    goto LABEL_6;
  return *a1 + 352LL * *v2;
}
