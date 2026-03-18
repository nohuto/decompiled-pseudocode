/*
 * XREFs of _lambda_98bcd3493729aa3b805c0fba161d90cc_::operator() @ 0x14027A05C
 * Callers:
 *     _lambda_98bcd3493729aa3b805c0fba161d90cc_::_lambda_invoker_cdecl_ @ 0x140279EC0 (_lambda_98bcd3493729aa3b805c0fba161d90cc_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x14038CA6C (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z.c)
 */

NTSTATUS __fastcall lambda_98bcd3493729aa3b805c0fba161d90cc_::operator()(__int64 a1, struct DXGSWAPCHAIN **a2)
{
  struct DXGSWAPCHAIN *v3; // rcx
  __int64 v4; // rdi
  NTSTATUS result; // eax
  int v6; // [rsp+28h] [rbp-70h]
  struct _D3DKMT_RELEASESWAPCHAIN v7; // [rsp+50h] [rbp-48h] BYREF

  memset(&v7, 0, 0x40uLL);
  v3 = *a2;
  v7.bProducer = 1;
  v4 = (int)SwapChainReleaseInternal(v3, &v7, 0LL, 0, 1, v6);
  result = ObfDereferenceObject(a2);
  if ( (int)v4 < 0 )
  {
    WdLogSingleEntry1(2LL, v4);
    WdLogGlobalForLineNumber = 1673;
    return DxgkLogInternalTriageEvent(
             0LL,
             0x40000,
             0xFFFFFFFFLL,
             L"Indirect display present failed to release a buffer with status: 0x%I64x",
             v4,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
