/*
 * XREFs of _lambda_6f0ec96f73276b26c622c449cb3cd9b5_::operator() @ 0x18034A2B8
 * Callers:
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync$_ResumeCoro$1 @ 0x18035DC20 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_6f0ec96f73276b26c622c449cb3cd9b5_$_InitCoro$2::operator() @ 0x180349FFC (_lambda_6f0ec96f73276b26c622c449cb3cd9b5_$_InitCoro$2--operator().c)
 */

__int64 *__fastcall lambda_6f0ec96f73276b26c622c449cb3cd9b5_::operator()(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+128h] [rbp+10h] BYREF

  v4 = operator new(0xF0uLL);
  v6 = 0;
  lambda_6f0ec96f73276b26c622c449cb3cd9b5___InitCoro_2::operator()(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
