/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAXXZ @ 0x180104B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::_Do_call(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8));
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
