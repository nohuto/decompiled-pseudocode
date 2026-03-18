/*
 * XREFs of ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x1401FD758
 * Callers:
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1402008D4 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 *     DxgkAcquireSwapChain @ 0x1404241F0 (DxgkAcquireSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x140040C7C (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x140047064 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z @ 0x140048770 (-Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z.c)
 *     McTemplateK0pqddqq_EtwWriteTransfer @ 0x1400535D8 (McTemplateK0pqddqq_EtwWriteTransfer.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140079400 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z @ 0x1401FF0A8 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x1401FFBD8 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1402E52F0 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140379498 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AcquireBuffer(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_ACQUIRESWAPCHAIN *a2,
        unsigned int *a3,
        int a4)
{
  int inserted; // ebx
  struct _KTHREAD *v6; // r8
  DXGSWAPCHAIN *v8; // rdi
  char *v9; // rsi
  void *v10; // r8
  unsigned int v11; // r12d
  int v12; // eax
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v13; // r15
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **v19; // [rsp+20h] [rbp-50h]
  int v20[2]; // [rsp+28h] [rbp-48h]
  __int64 v21; // [rsp+30h] [rbp-40h]
  __int64 v22; // [rsp+38h] [rbp-38h]
  __int64 v23; // [rsp+40h] [rbp-30h]
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v24; // [rsp+50h] [rbp-20h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v25; // [rsp+58h] [rbp-18h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v26; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+40h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v28; // [rsp+B8h] [rbp+48h] BYREF
  int v29; // [rsp+C8h] [rbp+58h]

  v29 = a4;
  inserted = 0;
  v6 = (struct _KTHREAD *)*((_QWORD *)this + 3);
  v8 = this;
  if ( v6 != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3081;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 3081LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = (char *)v8 + (a2->bProducer ? 144LL : 96LL);
  if ( a2->bReleaseBeforeAcquire )
  {
    if ( *((_DWORD *)v9 + 7) != 1 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3093;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Release before acquire is only supported for consumers",
        3093LL,
        0LL,
        0LL,
        0LL,
        0LL);
      inserted = -1073741637;
      goto LABEL_39;
    }
    this = (DXGSWAPCHAIN *)*((_QWORD *)v8 + 27);
    if ( *((_DWORD *)this + 2) == *((_DWORD *)this + 3) )
      goto LABEL_7;
    v10 = *(void **)&a2->AcquiredBufferIdx;
    *(_QWORD *)&a2->AcquiredBufferIdx = 0LL;
    inserted = DXGSWAPCHAIN::ReleaseBuffer(v8, &a2->ReleaseInfo, v10, 1, 0);
    if ( inserted < 0 )
      goto LABEL_9;
    inserted = 0;
  }
  if ( *((_DWORD *)v9 + 10) != -1 )
    goto LABEL_7;
  v27 = 0;
  if ( *((_DWORD *)v9 + 7) )
  {
    v12 = DXGFIXEDQUEUE::Remove(*((DXGFIXEDQUEUE **)v8 + 27), &v27);
    inserted = v12;
    if ( v12 == -2147483622 )
      goto LABEL_7;
    if ( v12 < 0 )
      goto LABEL_9;
    v11 = v27;
    inserted = 0;
  }
  else
  {
    if ( !a3 )
      a3 = (unsigned int *)*((_QWORD *)v8 + 28);
    v11 = *a3;
    v27 = v11;
  }
  v28 = 0LL;
  v24 = 0LL;
  DXGSWAPCHAIN::GetClientSurfaceInfo(v8, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v9, v11, &v28, &v24);
  v13 = v28;
  v14 = v24;
  if ( *((_DWORD *)v8 + 58) && !*(_BYTE *)v24 )
  {
    inserted = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(v8, v28, 0, 0LL, v9[44], v29);
    if ( inserted < 0 )
      goto LABEL_9;
    inserted = 0;
  }
  if ( *(_DWORD *)v13 == 2 )
  {
    *(_DWORD *)v13 = 0;
    goto LABEL_27;
  }
  if ( *(_DWORD *)v13 )
  {
LABEL_7:
    inserted = 259;
    goto LABEL_39;
  }
LABEL_27:
  if ( *((_DWORD *)v13 + 1) != *((_DWORD *)v9 + 7) )
    goto LABEL_7;
  *(_DWORD *)v13 = 1;
  *((_DWORD *)v9 + 10) = v11;
  *((_DWORD *)v13 + 6) = 0;
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() && v9[44] )
  {
    if ( !a2->bProducer && !*((_QWORD *)v14 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3216;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pSurfaceClientInfo->NextWaitFenceId",
        3216LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_QWORD *)v14 + 3) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3218;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pSurfaceClientInfo->hFenceUserModeDuplicated",
        3218LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v15 = *((_QWORD *)v14 + 3);
    v26 = 0LL;
    v25 = 0LL;
    *(_QWORD *)&a2[1].ReleaseInfo.bProducer = v15;
    a2[1].ReleaseInfo.pMetaData = (PVOID)*((_QWORD *)v14 + 1);
    *(_QWORD *)&a2[1].ReleaseInfo.DeferredFreeListSize = *((_QWORD *)v8 + 24);
    DXGSWAPCHAIN::GetOtherClientSurfaceInfo(
      v8,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v9,
      *((_DWORD *)v9 + 10),
      &v26,
      &v25);
    v16 = *((_QWORD *)v8 + 24);
    *((_QWORD *)v8 + 24) = v16 + 1;
    *((_QWORD *)v25 + 1) = v16;
    goto LABEL_38;
  }
  v17 = *((_QWORD *)v14 + 1);
  if ( v17 )
  {
    inserted = DXGSWAPCHAIN::InsertGPUWait(v8, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v9, v13, v17);
    if ( inserted < 0 )
    {
LABEL_9:
      DXGSWAPCHAIN::MarkAbandoned(v8, (bool)a2);
      goto LABEL_39;
    }
  }
LABEL_38:
  LODWORD(a2[1].hNtSwapChain) = v11;
  *(_QWORD *)&a2[1].bReleaseBeforeAcquire = *((_QWORD *)v14 + 5);
  this = (DXGSWAPCHAIN *)*(unsigned int *)(*((_QWORD *)v13 + 2) + 8LL);
  LODWORD(a2[1].ReleaseInfo.hNtSwapChain) = (_DWORD)this;
LABEL_39:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
  {
    LODWORD(v23) = a2[1].ReleaseInfo.hNtSwapChain;
    LODWORD(v22) = a2[1].hNtSwapChain;
    LODWORD(v21) = a2->bReleaseBeforeAcquire;
    v20[0] = a2->bProducer;
    LODWORD(v19) = inserted;
    McTemplateK0pqddqq_EtwWriteTransfer((__int64)this, (__int64)a2, (__int64)v6, v8, v19, *(_QWORD *)v20, v21, v22, v23);
  }
  return (unsigned int)inserted;
}
