/*
 * XREFs of _lambda_40fb1581da804d2ea8e9861d525112d3_::operator() @ 0x180349DBC
 * Callers:
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1 @ 0x18035D780 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_40fb1581da804d2ea8e9861d525112d3_$_InitCoro$2::operator() @ 0x180349AE4 (_lambda_40fb1581da804d2ea8e9861d525112d3_$_InitCoro$2--operator().c)
 */

__int64 *__fastcall lambda_40fb1581da804d2ea8e9861d525112d3_::operator()(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+128h] [rbp+10h] BYREF

  v4 = operator new(0xF0uLL);
  v6 = 0;
  lambda_40fb1581da804d2ea8e9861d525112d3___InitCoro_2::operator()(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
