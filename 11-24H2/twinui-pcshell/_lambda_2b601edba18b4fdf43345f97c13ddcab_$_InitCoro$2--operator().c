/*
 * XREFs of _lambda_2b601edba18b4fdf43345f97c13ddcab_$_InitCoro$2::operator() @ 0x1804A26EC
 * Callers:
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator() @ 0x1804A28AC (_lambda_2b601edba18b4fdf43345f97c13ddcab_--operator().c)
 * Callees:
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator() @ 0x1804A2750 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_2b601edba18b4fdf43345f97c13ddcab___InitCoro_2::operator()(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 97) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 105) = v5;
  *(_QWORD *)a2 = lambda_2b601edba18b4fdf43345f97c13ddcab___ResumeCoro_1::operator();
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 96) = 0;
  return lambda_2b601edba18b4fdf43345f97c13ddcab___ResumeCoro_1::operator()(a2);
}
