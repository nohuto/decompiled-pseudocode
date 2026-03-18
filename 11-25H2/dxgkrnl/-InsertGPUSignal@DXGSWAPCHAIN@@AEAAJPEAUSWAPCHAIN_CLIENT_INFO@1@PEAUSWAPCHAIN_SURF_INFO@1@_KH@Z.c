/*
 * XREFs of ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z @ 0x1401F876C
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x14038CD38 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1402AA44C (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140309198 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x14039A1B4 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUSignal(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        __int64 a4,
        int a5)
{
  DXGDEVICE *v8; // rcx
  __int64 v9; // rsi
  bool v10; // dl
  int IsEnabledDeviceUsageNoInline; // eax
  char *v13; // rdx
  __int64 v14; // [rsp+28h] [rbp-180h]
  int v15; // [rsp+48h] [rbp-160h]
  unsigned int v16; // [rsp+50h] [rbp-158h] BYREF
  __int64 v17; // [rsp+58h] [rbp-150h] BYREF
  unsigned int v18[64]; // [rsp+60h] [rbp-148h] BYREF

  v17 = a4;
  if ( !*((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3833;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pClientInfo->pTempDevice", 3833LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline()
    && *((_BYTE *)a2 + 44)
    && !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3836;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!pClientInfo->bUserModeFences || IddPresent",
      3836LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  v9 = *((_QWORD *)v8 + 5);
  if ( v9 )
  {
    v16 = 0;
    DXGDEVICE::GetContexts(v8, &v16, v18);
    if ( v16 )
    {
      IsEnabledDeviceUsageNoInline = Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline();
      v15 = a5 != 0 ? 10 : 2;
      v13 = (char *)a3 + 48 * *((int *)a2 + 7) + 80;
      if ( IsEnabledDeviceUsageNoInline )
        return SignalSynchronizationObjectInternal(1LL, v13, 0LL, v16, v18, &v17, v17, 0LL, v9, v15);
      else
        return SignalSynchronizationObjectInternal(1LL, v13, 0LL, v16, v18, 0LL, v17, 0LL, v9, v15);
    }
    else
    {
      WdLogSingleEntry2(2LL, this, *((_QWORD *)a2 + 1));
      v14 = *((_QWORD *)a2 + 1);
      WdLogGlobalForLineNumber = 3856;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Swapchain 0x%I64x Failed to get context count for device 0x%I64x",
        (__int64)this,
        v14,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3843;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid process context", 3843LL, 0LL, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned(this, v10);
    return 3221225485LL;
  }
}
