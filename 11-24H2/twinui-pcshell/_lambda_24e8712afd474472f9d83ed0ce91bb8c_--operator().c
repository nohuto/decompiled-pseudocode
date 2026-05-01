/*
 * XREFs of _lambda_24e8712afd474472f9d83ed0ce91bb8c_::operator() @ 0x1803B6088
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24e8712afd474472f9d83ed0ce91bb8c___::Run @ 0x1803BF440 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_24e8712afd474472f9d83ed0ce91bb8c___--Run.c)
 * Callees:
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18007CC04 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_24e8712afd474472f9d83ed0ce91bb8c_::operator()(_QWORD *a1)
{
  char result; // al
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1, &v3);
  if ( result )
  {
    if ( a1[1] )
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 112LL))(*a1);
    if ( a1[2] )
      return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 88LL))(*a1);
  }
  return result;
}
