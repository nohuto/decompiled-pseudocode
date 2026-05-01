/*
 * XREFs of _lambda_e7bb90a6b8bac423fd1716c72f93d12a_::operator() @ 0x1801E9BE8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e7bb90a6b8bac423fd1716c72f93d12a___::Run @ 0x1801EF120 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e7bb90a6b8bac423fd1716c72f93d12a___--Run.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall lambda_e7bb90a6b8bac423fd1716c72f93d12a_::operator()(_QWORD *a1)
{
  char result; // al
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1, &v3);
  if ( !result )
  {
    if ( a1[1] )
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 112LL))(*a1);
    if ( a1[2] )
      return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 88LL))(*a1);
  }
  return result;
}
