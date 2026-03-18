/*
 * XREFs of ?_Tidy@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800F5BA8
 * Callers:
 *     ??1?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800F5D44 (--1-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1800F5D70 (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?pop_back@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180234938 (-pop_back@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

void __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy(_QWORD *a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // r14
  __int64 v4; // rsi
  _QWORD *v5; // rcx

  while ( a1[4] )
    std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::pop_back(a1);
  v2 = (_QWORD **)(a1 + 1);
  v3 = a1 + 1;
  if ( a1[1] )
  {
    v4 = a1[2];
    if ( v4 )
    {
      do
      {
        v5 = (_QWORD *)(*v2)[--v4];
        if ( v5 )
          std::_Deallocate<16,0>(v5, 0x10uLL);
      }
      while ( v4 );
      v3 = a1 + 1;
    }
    std::_Deallocate<16,0>(*v2, 8LL * a1[2]);
  }
  a1[2] = 0LL;
  *v3 = 0LL;
}
