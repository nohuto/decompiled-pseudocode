/*
 * XREFs of ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x1401F6E08
 * Callers:
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1401FA224 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 *     DxgkAcquireSwapChain @ 0x1404261C0 (DxgkAcquireSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1400411CC (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x140047644 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z @ 0x140048F30 (-Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z.c)
 *     McTemplateK0pqddqq_EtwWriteTransfer @ 0x140053928 (McTemplateK0pqddqq_EtwWriteTransfer.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z @ 0x1401F89CC (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x1401F9514 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140309198 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x14038CD38 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AcquireBuffer(
        struct _KTHREAD **this,
        struct _D3DKMT_ACQUIRESWAPCHAIN *a2,
        unsigned int *a3,
        int a4)
{
  int inserted; // ebx
  unsigned int *v5; // r12
  struct _KTHREAD **v7; // rdi
  char *v8; // rsi
  void *v9; // r8
  unsigned int v10; // r12d
  int v11; // eax
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v12; // r15
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v13; // r13
  __int64 v14; // rax
  struct _KTHREAD *v15; // rcx
  unsigned __int64 v16; // r9
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **v18; // [rsp+20h] [rbp-50h]
  int v19[2]; // [rsp+28h] [rbp-48h]
  __int64 v20; // [rsp+30h] [rbp-40h]
  __int64 v21; // [rsp+38h] [rbp-38h]
  __int64 v22; // [rsp+40h] [rbp-30h]
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v23; // [rsp+50h] [rbp-20h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v24; // [rsp+58h] [rbp-18h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v25; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+40h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v27; // [rsp+B8h] [rbp+48h] BYREF
  int v28; // [rsp+C8h] [rbp+58h]

  v28 = a4;
  inserted = 0;
  v5 = a3;
  v7 = this;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3057;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 3057LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = (char *)v7 + (a2->bProducer ? 144LL : 96LL);
  if ( a2->bReleaseBeforeAcquire )
  {
    if ( *((_DWORD *)v8 + 7) != 1 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3069;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Release before acquire is only supported for consumers",
        3069LL,
        0LL,
        0LL,
        0LL,
        0LL);
      inserted = -1073741637;
      goto LABEL_39;
    }
    this = (struct _KTHREAD **)v7[27];
    if ( *((_DWORD *)this + 2) == *((_DWORD *)this + 3) )
      goto LABEL_7;
    v9 = *(void **)&a2->AcquiredBufferIdx;
    *(_QWORD *)&a2->AcquiredBufferIdx = 0LL;
    inserted = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)v7, &a2->ReleaseInfo, v9, 1, 0);
    if ( inserted < 0 )
      goto LABEL_9;
    inserted = 0;
  }
  if ( *((_DWORD *)v8 + 10) != -1 )
    goto LABEL_7;
  v26 = 0;
  if ( *((_DWORD *)v8 + 7) )
  {
    v11 = DXGFIXEDQUEUE::Remove(v7[27], &v26);
    inserted = v11;
    if ( v11 == -2147483622 )
      goto LABEL_7;
    if ( v11 < 0 )
      goto LABEL_9;
    v10 = v26;
    inserted = 0;
  }
  else
  {
    if ( !v5 )
      v5 = (unsigned int *)v7[28];
    v10 = *v5;
    v26 = v10;
  }
  v27 = 0LL;
  v23 = 0LL;
  DXGSWAPCHAIN::GetClientSurfaceInfo(
    (DXGSWAPCHAIN *)v7,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v8,
    v10,
    &v27,
    &v23);
  v12 = v27;
  v13 = v23;
  if ( *((_DWORD *)v7 + 58) && !*(_BYTE *)v23 )
  {
    inserted = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener((DXGSWAPCHAIN *)v7, v27, 0, 0LL, v8[44], v28);
    if ( inserted < 0 )
      goto LABEL_9;
    inserted = 0;
  }
  if ( *(_DWORD *)v12 == 2 )
  {
    *(_DWORD *)v12 = 0;
    goto LABEL_27;
  }
  if ( *(_DWORD *)v12 )
  {
LABEL_7:
    inserted = 259;
    goto LABEL_39;
  }
LABEL_27:
  if ( *((_DWORD *)v12 + 1) != *((_DWORD *)v8 + 7) )
    goto LABEL_7;
  *(_DWORD *)v12 = 1;
  *((_DWORD *)v8 + 10) = v10;
  *((_DWORD *)v12 + 6) = 0;
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() && v8[44] )
  {
    if ( !a2->bProducer && !*((_QWORD *)v13 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3192;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pSurfaceClientInfo->NextWaitFenceId",
        3192LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_QWORD *)v13 + 3) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3194;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pSurfaceClientInfo->hFenceUserModeDuplicated",
        3194LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v14 = *((_QWORD *)v13 + 3);
    v25 = 0LL;
    v24 = 0LL;
    *(_QWORD *)&a2[1].ReleaseInfo.bProducer = v14;
    a2[1].ReleaseInfo.pMetaData = (PVOID)*((_QWORD *)v13 + 1);
    *(_QWORD *)&a2[1].ReleaseInfo.DeferredFreeListSize = v7[24];
    DXGSWAPCHAIN::GetOtherClientSurfaceInfo(
      (DXGSWAPCHAIN *)v7,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v8,
      *((_DWORD *)v8 + 10),
      &v25,
      &v24);
    v15 = v7[24];
    v7[24] = (struct _KTHREAD *)((char *)v15 + 1);
    *((_QWORD *)v24 + 1) = v15;
    goto LABEL_38;
  }
  v16 = *((_QWORD *)v13 + 1);
  if ( v16 )
  {
    inserted = DXGSWAPCHAIN::InsertGPUWait(
                 (DXGSWAPCHAIN *)v7,
                 (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v8,
                 v12,
                 v16);
    if ( inserted < 0 )
    {
LABEL_9:
      DXGSWAPCHAIN::MarkAbandoned((DXGSWAPCHAIN *)v7, (bool)a2);
      goto LABEL_39;
    }
  }
LABEL_38:
  LODWORD(a2[1].hNtSwapChain) = v10;
  *(_QWORD *)&a2[1].bReleaseBeforeAcquire = *((_QWORD *)v13 + 5);
  this = (struct _KTHREAD **)*(unsigned int *)(*((_QWORD *)v12 + 2) + 8LL);
  LODWORD(a2[1].ReleaseInfo.hNtSwapChain) = (_DWORD)this;
LABEL_39:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
  {
    LODWORD(v22) = a2[1].ReleaseInfo.hNtSwapChain;
    LODWORD(v21) = a2[1].hNtSwapChain;
    LODWORD(v20) = a2->bReleaseBeforeAcquire;
    v19[0] = a2->bProducer;
    LODWORD(v18) = inserted;
    McTemplateK0pqddqq_EtwWriteTransfer((__int64)this, (__int64)a2, (__int64)a3, v7, v18, *(_QWORD *)v19, v20, v21, v22);
  }
  return (unsigned int)inserted;
}
