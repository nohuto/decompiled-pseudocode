/*
 * XREFs of _lambda_a1bf07eabb51e841d7b59a4e813e5668_$_InitCoro$2::operator() @ 0x18063F38C
 * Callers:
 *     _lambda_a1bf07eabb51e841d7b59a4e813e5668_::operator() @ 0x18063F830 (_lambda_a1bf07eabb51e841d7b59a4e813e5668_--operator().c)
 * Callees:
 *     _lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator() @ 0x18063F3E0 (_lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1--operator().c)
 */

__int64 __fastcall lambda_a1bf07eabb51e841d7b59a4e813e5668___InitCoro_2::operator()(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 177) = a4;
  *(_QWORD *)a2 = lambda_a1bf07eabb51e841d7b59a4e813e5668___ResumeCoro_1::operator();
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[176] = 0;
  return lambda_a1bf07eabb51e841d7b59a4e813e5668___ResumeCoro_1::operator()(a2);
}
