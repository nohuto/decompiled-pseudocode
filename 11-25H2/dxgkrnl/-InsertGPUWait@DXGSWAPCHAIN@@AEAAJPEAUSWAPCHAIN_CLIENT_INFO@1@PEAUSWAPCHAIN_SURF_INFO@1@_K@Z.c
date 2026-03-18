/*
 * XREFs of ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z @ 0x1401F89CC
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x1401F6E08 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1402ABA40 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140309198 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x14039A1B4 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUWait(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        unsigned __int64 a4)
{
  DXGDEVICE *v7; // rcx
  struct DXGPROCESS *v8; // rbp
  bool v9; // dl
  __int64 result; // rax
  unsigned int i; // ebx
  unsigned __int64 *v12; // r8
  struct DXGPROCESS *v13; // [rsp+28h] [rbp-180h]
  unsigned int v14; // [rsp+60h] [rbp-148h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-140h] BYREF
  unsigned int v16[64]; // [rsp+70h] [rbp-138h] BYREF

  v15 = a4;
  if ( !*((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3912;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pClientInfo->pTempDevice", 3912LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() && *((_BYTE *)a2 + 44) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3915;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!pClientInfo->bUserModeFences", 3915LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  v8 = (struct DXGPROCESS *)*((_QWORD *)v7 + 5);
  if ( v8 )
  {
    v14 = 0;
    DXGDEVICE::GetContexts(v7, &v14, v16);
    if ( v14 )
    {
      for ( i = 0; i < v14; ++i )
      {
        if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
          v12 = &v15;
        else
          v12 = 0LL;
        result = WaitForSynchronizationObjectFromGpu(
                   1u,
                   (const unsigned int *)a3 + 12 * *((int *)a2 + 7) + 20,
                   v12,
                   v15,
                   v16[i],
                   v8,
                   0,
                   1,
                   0,
                   0,
                   0);
        if ( (int)result < 0 )
          break;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, this, *((_QWORD *)a2 + 1));
      v13 = (struct DXGPROCESS *)*((_QWORD *)a2 + 1);
      WdLogGlobalForLineNumber = 3935;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Swapchain 0x%I64x Failed to get context count for device 0x%I64x",
        (__int64)this,
        (__int64)v13,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3922;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid process context", 3922LL, 0LL, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned(this, v9);
    return 3221225485LL;
  }
  return result;
}
