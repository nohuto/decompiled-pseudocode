/*
 * XREFs of _lambda_a46c03df8e345f39007d0c0666af0d28_::operator() @ 0x18034A938
 * Callers:
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1 @ 0x18035D290 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_a46c03df8e345f39007d0c0666af0d28_$_InitCoro$2::operator() @ 0x18034A678 (_lambda_a46c03df8e345f39007d0c0666af0d28_$_InitCoro$2--operator().c)
 */

__int64 *__fastcall lambda_a46c03df8e345f39007d0c0666af0d28_::operator()(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+128h] [rbp+10h] BYREF

  v4 = operator new(0xF0uLL);
  v6 = 0;
  lambda_a46c03df8e345f39007d0c0666af0d28___InitCoro_2::operator()(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
