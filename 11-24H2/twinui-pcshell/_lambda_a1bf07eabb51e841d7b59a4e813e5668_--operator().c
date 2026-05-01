/*
 * XREFs of _lambda_a1bf07eabb51e841d7b59a4e813e5668_::operator() @ 0x18063F830
 * Callers:
 *     wistd::__function::__func__lambda_a1bf07eabb51e841d7b59a4e813e5668__void___cdecl(void)_::operator() @ 0x18063F8E0 (wistd--__function--__func__lambda_a1bf07eabb51e841d7b59a4e813e5668__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_a1bf07eabb51e841d7b59a4e813e5668_$_InitCoro$2::operator() @ 0x18063F38C (_lambda_a1bf07eabb51e841d7b59a4e813e5668_$_InitCoro$2--operator().c)
 */

_BYTE *__fastcall lambda_a1bf07eabb51e841d7b59a4e813e5668_::operator()(__int64 a1, _BYTE *a2)
{
  char *v4; // rax
  int v6; // [rsp+F8h] [rbp+10h] BYREF

  v4 = (char *)operator new(0xC0uLL);
  v6 = 0;
  lambda_a1bf07eabb51e841d7b59a4e813e5668___InitCoro_2::operator()(&v6, v4, a2, a1);
  return a2;
}
