/*
 * XREFs of _lambda_ca9df4dcfe6d5cd8540c8434d0f06187_::operator() @ 0x180349308
 * Callers:
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync$_ResumeCoro$1 @ 0x18035DC20 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1 @ 0x18035E080 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_InitCoro$2::operator() @ 0x18034905C (_lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_InitCoro$2--operator().c)
 */

__int64 *__fastcall lambda_ca9df4dcfe6d5cd8540c8434d0f06187_::operator()(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+128h] [rbp+10h] BYREF

  v4 = operator new(0xF0uLL);
  v6 = 0;
  lambda_ca9df4dcfe6d5cd8540c8434d0f06187___InitCoro_2::operator()(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
