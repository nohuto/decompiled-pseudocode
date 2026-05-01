/*
 * XREFs of _lambda_2320bd44a73cf61b834c52aa86463e4d_::operator() @ 0x1803498EC
 * Callers:
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1 @ 0x18035D780 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_2320bd44a73cf61b834c52aa86463e4d_$_InitCoro$2::operator() @ 0x180349618 (_lambda_2320bd44a73cf61b834c52aa86463e4d_$_InitCoro$2--operator().c)
 */

__int64 *__fastcall lambda_2320bd44a73cf61b834c52aa86463e4d_::operator()(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+118h] [rbp+10h] BYREF

  v4 = operator new(0xE0uLL);
  v6 = 0;
  lambda_2320bd44a73cf61b834c52aa86463e4d___InitCoro_2::operator()(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
