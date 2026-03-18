/*
 * XREFs of ??$_Emplace_front_internal@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802B8E1C
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1800ADF98 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x18006BDB0 (-_Growmap@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??0?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z @ 0x1801B8A70 (--0-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z.c)
 */

CMILRefCountImpl **__fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Emplace_front_internal<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &>(
        __int64 a1,
        CMILRefCountImpl **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  CMILRefCountImpl **result; // rax

  if ( (*(_BYTE *)(a1 + 24) & 1) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(*(_QWORD *)(a1 + 32) + 2LL) >> 1 )
    std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Growmap((_QWORD *)a1);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 24) & (2 * v4 - 1);
  *(_QWORD *)(a1 + 24) = v5;
  if ( !v5 )
    v5 = 2 * v4;
  v6 = v5 - 1;
  v7 = (v6 >> 1) & (v4 - 1);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) )
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  result = wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::com_ptr_t<CManipulation,wil::err_returncode_policy>(
             (CMILRefCountImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) + 8 * (v6 & 1)),
             *a2);
  *(_QWORD *)(a1 + 24) = v6;
  ++*(_QWORD *)(a1 + 32);
  return result;
}
