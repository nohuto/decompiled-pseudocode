/*
 * XREFs of _lambda_37ce3c0886db64cd36632e83c34f1ff5_::operator() @ 0x1804DCE54
 * Callers:
 *     wil::details::ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___::_ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___ @ 0x1804DCCF4 (wil--details--ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___--_ScopeExitFn__lambda_37ce.c)
 *     _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x1804DCF5C (_lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804EABCC (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_37ce3c0886db64cd36632e83c34f1ff5_::operator()(__int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)a1 + 288LL) + 200LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 288LL),
    &SRWLock);
  WindowWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0LL);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
