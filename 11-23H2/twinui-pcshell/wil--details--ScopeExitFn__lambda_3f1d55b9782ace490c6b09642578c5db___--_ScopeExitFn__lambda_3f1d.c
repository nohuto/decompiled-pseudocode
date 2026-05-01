/*
 * XREFs of wil::details::ScopeExitFn__lambda_3f1d55b9782ace490c6b09642578c5db___::_ScopeExitFn__lambda_3f1d55b9782ace490c6b09642578c5db___ @ 0x1805A1764
 * Callers:
 *     __lambda_fd32c1b568db692c2b9aba787b88bf18_::operator()_::_1_::dtor$1 @ 0x1802BE188 (__lambda_fd32c1b568db692c2b9aba787b88bf18_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_3f1d55b9782ace490c6b09642578c5db___::_ScopeExitFn__lambda_3f1d55b9782ace490c6b09642578c5db___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 128LL) + 32LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 128LL),
             **((_QWORD **)a1 + 1));
  }
  return result;
}
