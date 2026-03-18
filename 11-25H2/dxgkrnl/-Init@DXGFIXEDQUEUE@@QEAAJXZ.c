/*
 * XREFs of ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x140078E14
 * Callers:
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1401F8554 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Init(DXGFIXEDQUEUE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-38h]

  v5 = 4LL * *((unsigned int *)this + 1);
  if ( !is_mul_ok(*((unsigned int *)this + 1), 4uLL) )
    v5 = -1LL;
  v6 = operator new[](v5, 0x4B677844u, 256LL, a4);
  *((_QWORD *)this + 2) = v6;
  if ( v6 )
    return 0LL;
  WdLogSingleEntry1(6LL, *((unsigned int *)this + 1));
  v8 = *((unsigned int *)this + 1);
  WdLogGlobalForLineNumber = 41;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Out of memory allocating memory for queue, size 0x%I64x",
    v8,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
