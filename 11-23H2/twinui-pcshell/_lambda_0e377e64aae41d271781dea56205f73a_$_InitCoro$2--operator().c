/*
 * XREFs of _lambda_0e377e64aae41d271781dea56205f73a_$_InitCoro$2::operator() @ 0x1801FE6E8
 * Callers:
 *     _lambda_0e377e64aae41d271781dea56205f73a_::operator() @ 0x1801FE9B4 (_lambda_0e377e64aae41d271781dea56205f73a_--operator().c)
 * Callees:
 *     _lambda_0e377e64aae41d271781dea56205f73a_$_ResumeCoro$1::operator() @ 0x1801FE7B0 (_lambda_0e377e64aae41d271781dea56205f73a_$_ResumeCoro$1--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0e377e64aae41d271781dea56205f73a___InitCoro_2::operator()(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  *(_QWORD *)(a2 + 66) = a5;
  *(_QWORD *)(a2 + 74) = a4;
  *(_QWORD *)a2 = lambda_0e377e64aae41d271781dea56205f73a___ResumeCoro_1::operator();
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 65) = 0;
  return lambda_0e377e64aae41d271781dea56205f73a___ResumeCoro_1::operator()(a2);
}
