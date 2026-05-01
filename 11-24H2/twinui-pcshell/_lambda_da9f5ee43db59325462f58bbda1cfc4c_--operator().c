/*
 * XREFs of _lambda_da9f5ee43db59325462f58bbda1cfc4c_::operator() @ 0x18034AD1C
 * Callers:
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1 @ 0x18035E080 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_da9f5ee43db59325462f58bbda1cfc4c_$_InitCoro$2::operator() @ 0x18034AA44 (_lambda_da9f5ee43db59325462f58bbda1cfc4c_$_InitCoro$2--operator().c)
 */

__int64 *__fastcall lambda_da9f5ee43db59325462f58bbda1cfc4c_::operator()(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+128h] [rbp+10h] BYREF

  v4 = operator new(0xF0uLL);
  v6 = 0;
  lambda_da9f5ee43db59325462f58bbda1cfc4c___InitCoro_2::operator()(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
