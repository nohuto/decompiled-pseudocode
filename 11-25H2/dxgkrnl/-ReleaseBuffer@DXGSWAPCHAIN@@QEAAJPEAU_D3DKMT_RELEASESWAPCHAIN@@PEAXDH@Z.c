/*
 * XREFs of ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x14038CD38
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x1401F6E08 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1401FA224 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x14038CA6C (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1400411CC (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x140047644 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x140047710 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x1400482E0 (-Add@DXGFIXEDQUEUE@@QEAAJI@Z.c)
 *     McTemplateK0pqddpqqqqqq_EtwWriteTransfer @ 0x1400546D8 (McTemplateK0pqddpqqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqdqp_EtwWriteTransfer @ 0x1400558F0 (McTemplateK0pqdqp_EtwWriteTransfer.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1401F79B4 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z @ 0x1401F876C (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x140300638 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x140308180 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140309198 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ReleaseBuffer(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4,
        int a5)
{
  char v5; // r15
  __int64 v8; // rsi
  __int64 v9; // r14
  BOOL bProducer; // eax
  char *v11; // rbx
  char *v12; // r12
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 pDeferredFreeList_low; // rcx
  int *v17; // r8
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v18; // r14
  const wchar_t *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rax
  struct _WORK_QUEUE_ITEM *v25; // rax
  struct _WORK_QUEUE_ITEM *v26; // r15
  struct _LIST_ENTRY *v27; // rax
  unsigned int v28; // r8d
  __int64 v29; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v30; // r14
  __int64 v31; // r9
  BOOL v32; // eax
  struct AUTOEXPANDALLOCATION *v33; // rdx
  __int64 v34; // rax
  int v35; // eax
  int v36; // ecx
  size_t Size; // [rsp+20h] [rbp-A1h]
  size_t Sizea; // [rsp+20h] [rbp-A1h]
  void *v39; // [rsp+28h] [rbp-99h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v40; // [rsp+30h] [rbp-91h]
  int v41; // [rsp+38h] [rbp-89h]
  __int64 v42; // [rsp+40h] [rbp-81h]
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v44; // [rsp+80h] [rbp-41h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v45; // [rsp+88h] [rbp-39h] BYREF
  void *v46; // [rsp+90h] [rbp-31h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v47; // [rsp+98h] [rbp-29h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v48; // [rsp+A0h] [rbp-21h] BYREF
  void *v49; // [rsp+A8h] [rbp-19h]
  BOOL v50; // [rsp+B0h] [rbp-11h] BYREF
  int v51; // [rsp+B4h] [rbp-Dh]
  __int128 v52; // [rsp+B8h] [rbp-9h]
  __int128 v53; // [rsp+C8h] [rbp+7h]

  v5 = a4;
  v49 = a3;
  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3308;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 3308LL, 0LL, 0LL, 0LL, 0LL);
  }
  LODWORD(v8) = 0;
  v9 = 0LL;
  if ( a2[1].hNtSwapChain )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3315;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pRelease->pMetaData == nullptr", 3315LL, 0LL, 0LL, 0LL, 0LL);
  }
  bProducer = a2->bProducer;
  if ( bProducer )
  {
    v11 = (char *)this + 144;
    v12 = (char *)this + 96;
  }
  else
  {
    v11 = (char *)this + 96;
    v12 = (char *)this + 144;
  }
  if ( *((_DWORD *)this + 58) && !bProducer && LODWORD(a2->pDeferredFreeList) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3323;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Non-sequential swapchain client cannot provided metadata when releasing",
      3323LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  v14 = *((_DWORD *)v11 + 10);
  if ( v14 == -1 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)v11 + 2), this);
    WdLogGlobalForLineNumber = 3330;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ReleaseBuffer caller (0x%I64x) does not own the swapchain 0x%I64x",
      *((_QWORD *)v11 + 2),
      (__int64)this,
      0LL,
      0LL,
      0LL);
LABEL_59:
    LODWORD(v8) = -1073741811;
    goto LABEL_60;
  }
  v45 = 0LL;
  v48 = 0LL;
  DXGSWAPCHAIN::GetClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11, v14, &v45, &v48);
  v18 = v45;
  if ( *(_DWORD *)v45 != 1 || *((_DWORD *)v45 + 1) != *((_DWORD *)v11 + 7) )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)v11 + 2), this);
    WdLogGlobalForLineNumber = 3343;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ReleaseBuffer caller (0x%I64x) does not own the swapchain 0x%I64x",
      *((_QWORD *)v11 + 2),
      (__int64)this,
      0LL,
      0LL,
      0LL);
    v9 = 0LL;
    goto LABEL_59;
  }
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v11[44] || a5 )
    {
      LODWORD(v8) = DXGSWAPCHAIN::InsertGPUSignal(
                      this,
                      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11,
                      v18,
                      *((_QWORD *)this + 24),
                      a5);
      if ( (int)v8 < 0 )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 3356;
LABEL_21:
        v19 = L"Failed to insert GPU signal, swapchain 0x%I64x";
LABEL_22:
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v19, (__int64)this, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_31;
      }
    }
  }
  else
  {
    LODWORD(v8) = DXGSWAPCHAIN::InsertGPUSignal(
                    this,
                    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11,
                    v18,
                    *((_QWORD *)this + 24),
                    a5);
    if ( (int)v8 < 0 )
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 3368;
      goto LABEL_21;
    }
  }
  if ( *((_DWORD *)v11 + 7) == 1 )
  {
    if ( *((_DWORD *)this + 58) )
    {
      v20 = *((_QWORD *)v18 + 6);
      if ( v20 )
      {
        v21 = *((_QWORD *)v11 + 2);
        LOBYTE(v41) = 1;
        LODWORD(Sizea) = 0;
        v46 = 0LL;
        v22 = ObDuplicateObject(*((_QWORD *)v12 + 2), v20, v21, &v46, Sizea, 0, 6, v41);
        v8 = v22;
        if ( v22 < 0 )
        {
          WdLogSingleEntry2(2LL, *((_QWORD *)v18 + 6), v22);
          v24 = *((_QWORD *)v18 + 6);
          WdLogGlobalForLineNumber = 3390;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to duplicate Fence Nt handle 0x%I64x, error 0x%I64x",
            v24,
            v8,
            0LL,
            0LL,
            0LL);
          goto LABEL_31;
        }
        a2->pMetaData = v46;
        *(_QWORD *)&a2->DeferredFreeListSize = *((_QWORD *)v18 + 7);
        v25 = (struct _WORK_QUEUE_ITEM *)operator new(0x30uLL, 0x4B677844u, 64LL, v23);
        v26 = v25;
        if ( !v25 )
        {
          WdLogSingleEntry1(2LL, *((_QWORD *)v18 + 6));
          WdLogGlobalForLineNumber = 3403;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to allocate WorkItem to delayed close Nt Handle 0x%I64x",
            *((_QWORD *)v18 + 6),
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_31;
        }
        v25->List = 0LL;
        *(_OWORD *)&v25->WorkerRoutine = 0LL;
        v25[1].List = 0LL;
        LODWORD(v8) = ObReferenceObjectByPointer(*((PVOID *)v12 + 2), 0x10000000u, (POBJECT_TYPE)PsProcessType, 0);
        if ( (int)v8 < 0 )
        {
          WdLogSingleEntry1(2LL, *((_QWORD *)v12 + 2));
          WdLogGlobalForLineNumber = 3416;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to increment refcount on Process 0x%I64x",
            *((_QWORD *)v12 + 2),
            0LL,
            0LL,
            0LL,
            0LL);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
          goto LABEL_31;
        }
        v26[1].List.Blink = (struct _LIST_ENTRY *)*((_QWORD *)v18 + 6);
        v27 = (struct _LIST_ENTRY *)*((_QWORD *)v12 + 2);
        v26->List.Flink = 0LL;
        v26[1].List.Flink = v27;
        v26->WorkerRoutine = (PWORKER_THREAD_ROUTINE)DXGSWAPCHAIN::AsyncCloseNtHandle;
        v26->Parameter = v26;
        ExQueueWorkItem(v26, DelayedWorkQueue);
        v5 = a4;
        *((_QWORD *)v18 + 6) = 0LL;
        *((_QWORD *)v18 + 7) = 0LL;
      }
    }
  }
  v28 = *((_DWORD *)v11 + 10);
  v47 = 0LL;
  v44 = 0LL;
  DXGSWAPCHAIN::GetOtherClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11, v28, &v47, &v44);
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() || !v11[44] )
  {
    v29 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = v29 + 1;
    *((_QWORD *)v44 + 1) = v29;
  }
  v30 = v47;
  *(_DWORD *)v47 = 2;
  *((_DWORD *)v30 + 1) = DXGSWAPCHAIN::SwitchClient(v29, *((_DWORD *)v11 + 7));
  pDeferredFreeList_low = LODWORD(a2->pDeferredFreeList);
  if ( !(_DWORD)pDeferredFreeList_low )
    goto LABEL_65;
  v32 = a2->bProducer;
  v33 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v30 + 2);
  v51 = 0;
  v50 = v32;
  LODWORD(Size) = pDeferredFreeList_low;
  v52 = 0LL;
  v53 = 0LL;
  LODWORD(v8) = DXGSWAPCHAIN::SetMetaDataInternal(
                  (struct _KTHREAD **)this,
                  v33,
                  (int *)v30 + 6,
                  0LL,
                  Size,
                  (char *)v49,
                  (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v50,
                  v5);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
  {
    LODWORD(v42) = DWORD2(v52);
    LODWORD(v40) = v51;
    LODWORD(v39) = v50;
    LODWORD(Size) = v8;
    McTemplateK0pqddpqqqqqq_EtwWriteTransfer(
      pDeferredFreeList_low,
      v15,
      (__int64)v17,
      this,
      Size,
      v39,
      v40,
      (_QWORD)v52,
      v42,
      HIDWORD(v52),
      (_DWORD)v53,
      DWORD1(v53),
      DWORD2(v53),
      HIDWORD(v53));
  }
  if ( (int)v8 >= 0 )
  {
LABEL_65:
    if ( !*((_DWORD *)v30 + 6) )
      AUTOEXPANDALLOCATION::GetBuffer(*((AUTOEXPANDALLOCATION **)v30 + 2), 0, 0, v31);
    v35 = *((_DWORD *)this + 58);
    if ( *((_DWORD *)v11 + 7) )
    {
      if ( v35 )
      {
        LODWORD(v8) = DXGSWAPCHAIN::ConsumerCheckForSurfacesToFree((unsigned __int64)this, a2);
        if ( (int)v8 < 0 )
          goto LABEL_31;
      }
    }
    else
    {
      if ( !v35 )
      {
        v17 = (int *)*((_QWORD *)this + 28);
        v36 = *v17 + 1;
        if ( *v17 == v17[1] )
          v36 = 0;
        *v17 = v36;
      }
      LODWORD(v8) = DXGFIXEDQUEUE::Add(*((DXGFIXEDQUEUE **)this + 27), *((_DWORD *)v11 + 10), (__int64)v17, v31);
      if ( (int)v8 < 0 )
      {
        WdLogSingleEntry1(2LL, this);
        v19 = L"Failed to add to surface to process queue, swapchain 0x%I64x";
        WdLogGlobalForLineNumber = 3494;
        goto LABEL_22;
      }
    }
    *((_DWORD *)v11 + 10) = -1;
    v9 = *((_QWORD *)v12 + 4);
    if ( v9 )
      KeSetEvent(*((PRKEVENT *)v12 + 4), 2, 0);
    goto LABEL_60;
  }
  WdLogSingleEntry2(2LL, *((_QWORD *)v11 + 2), this);
  v34 = *((_QWORD *)v11 + 2);
  WdLogGlobalForLineNumber = 3470;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"ReleaseBuffer could not store the caller's (0x%I64x) metadata for swapchain (0x%I64x)",
    v34,
    (__int64)this,
    0LL,
    0LL,
    0LL);
LABEL_31:
  DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v15, (__int64)v17);
  v9 = 0LL;
LABEL_60:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
  {
    LODWORD(v40) = a2->pDeferredFreeList;
    LODWORD(v39) = a2->bProducer;
    LODWORD(Size) = v8;
    McTemplateK0pqdqp_EtwWriteTransfer(pDeferredFreeList_low, v15, (__int64)v17, this, Size, v39, v40, v9);
  }
  return (unsigned int)v8;
}
