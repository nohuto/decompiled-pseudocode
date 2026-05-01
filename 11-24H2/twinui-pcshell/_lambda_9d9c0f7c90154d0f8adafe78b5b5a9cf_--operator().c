/*
 * XREFs of _lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_::operator() @ 0x18034A614
 * Callers:
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1 @ 0x18035D290 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_InitCoro$2::operator() @ 0x18034A344 (_lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_InitCoro$2--operator().c)
 */

__int64 *__fastcall lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_::operator()(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+118h] [rbp+10h] BYREF

  v4 = operator new(0xE0uLL);
  v6 = 0;
  lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf___InitCoro_2::operator()(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
