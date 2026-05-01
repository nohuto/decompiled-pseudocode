/*
 * XREFs of wil::details::ScopeExitFn__lambda_83ede6adccbf4be7aa794f49e3019896___::_ScopeExitFn__lambda_83ede6adccbf4be7aa794f49e3019896___ @ 0x1807677AC
 * Callers:
 *     _TaskViewHost::Show_::_1_::dtor$9 @ 0x1802C32F5 (_TaskViewHost--Show_--_1_--dtor$9.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_83ede6adccbf4be7aa794f49e3019896___::_ScopeExitFn__lambda_83ede6adccbf4be7aa794f49e3019896___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a1 + 232LL));
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1);
  }
  return result;
}
