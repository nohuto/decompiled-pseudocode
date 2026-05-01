/*
 * XREFs of std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_d6b4118795ae303e935bbd5b6ca0014f__const___winrt::WindowsUdk::UI::MenuItem_const_&_winrt::WindowsUdk::UI::MenuItemInvokedArgs_const_&_::promise_type::await_transform_winrt::apartment_context_const_&_ @ 0x18065E7D4
 * Callers:
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1::operator() @ 0x180221B40 (_lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1--operator().c)
 *     _lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1::operator() @ 0x180256D90 (_lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1--operator().c)
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1::operator() @ 0x180257050 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_d6b4118795ae303e935bbd5b6ca0014f__const___winrt::WindowsUdk::UI::MenuItem_const___winrt::WindowsUdk::UI::MenuItemInvokedArgs_const___::promise_type::await_transform_winrt::apartment_context_const___(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *a3;
  *(_QWORD *)a2 = *a3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *(_DWORD *)(a2 + 8) = *((_DWORD *)a3 + 2);
  result = a2;
  *(_DWORD *)(a2 + 16) = 0;
  return result;
}
