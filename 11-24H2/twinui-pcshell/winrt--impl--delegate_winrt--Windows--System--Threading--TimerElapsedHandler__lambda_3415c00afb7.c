/*
 * XREFs of winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___::Invoke @ 0x18059F460
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_::operator() @ 0x18059D6F0 (_lambda_3415c00afb736d6d54203eb8c7c58983_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = a1 + 16;
  try
  {
    lambda_3415c00afb736d6d54203eb8c7c58983_::operator()(v2, &v4, (__int64)&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
