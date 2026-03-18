/*
 * XREFs of ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x140079348
 * Callers:
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1401FEC30 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Init(DXGFIXEDQUEUE *this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+20h] [rbp-38h]

  v2 = 4LL * *((unsigned int *)this + 1);
  if ( !is_mul_ok(*((unsigned int *)this + 1), 4uLL) )
    v2 = -1LL;
  v3 = operator new[](v2, 0x4B677844u, 256LL);
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
    return 0LL;
  WdLogSingleEntry1(6LL, *((unsigned int *)this + 1));
  v5 = *((unsigned int *)this + 1);
  WdLogGlobalForLineNumber = 41;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Out of memory allocating memory for queue, size 0x%I64x",
    v5,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
