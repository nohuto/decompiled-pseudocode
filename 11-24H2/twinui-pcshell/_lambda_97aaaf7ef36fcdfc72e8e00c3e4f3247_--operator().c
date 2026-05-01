/*
 * XREFs of _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_::operator() @ 0x1801EA9C4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x18026E2D0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 * Callees:
 *     _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_InitCoro$2::operator() @ 0x18026D708 (_lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_InitCoro$2--operator().c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_::operator()(__int64 a1, __int64 a2)
{
  char *v4; // rax
  int v6; // [rsp+138h] [rbp+10h] BYREF

  v4 = (char *)operator new(0x100uLL);
  v6 = 0;
  lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247___InitCoro_2::operator()(&v6, v4 + 112, a2, a1);
  return a2;
}
