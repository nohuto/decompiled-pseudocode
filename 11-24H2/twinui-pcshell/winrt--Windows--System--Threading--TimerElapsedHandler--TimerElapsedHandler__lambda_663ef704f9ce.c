/*
 * XREFs of winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___ @ 0x1806BC110
 * Callers:
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator() @ 0x180222A20 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--operator().c)
 * Callees:
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_663ef704f9ce02801a8eb52a4a423678_::__lambda_663ef704f9ce02801a8eb52a4a423678_ @ 0x1806BC788 (_lambda_663ef704f9ce02801a8eb52a4a423678_--__lambda_663ef704f9ce02801a8eb52a4a423678_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rax
  char *v7; // [rsp+30h] [rbp+8h]

  v7 = (char *)operator new(0x28uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  v4[2] = 0LL;
  v4[3] = 0LL;
  v4[2] = *a2;
  v4[3] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = a2[2];
  a2[2] = 0LL;
  v4[4] = v5;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v4 = off_1808C3688;
  *a1 = v4;
  lambda_663ef704f9ce02801a8eb52a4a423678_::__lambda_663ef704f9ce02801a8eb52a4a423678_(a2);
  return a1;
}
