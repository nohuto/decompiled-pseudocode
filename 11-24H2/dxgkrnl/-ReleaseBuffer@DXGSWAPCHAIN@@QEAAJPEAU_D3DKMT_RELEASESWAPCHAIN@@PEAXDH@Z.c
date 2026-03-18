/*
 * XREFs of ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140379498
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x1401FD758 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1402008D4 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x1403791CC (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x140040C7C (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x140047064 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x140047130 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x140047BBC (-Add@DXGFIXEDQUEUE@@QEAAJI@Z.c)
 *     McTemplateK0pqddpqqqqqq_EtwWriteTransfer @ 0x140054328 (McTemplateK0pqddpqqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqdqp_EtwWriteTransfer @ 0x1400550A0 (McTemplateK0pqdqp_EtwWriteTransfer.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140079400 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline @ 0x140079454 (Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1401FE3F8 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z @ 0x1401FEE48 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1402B72BC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1402E49D8 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1402E52F0 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ReleaseBuffer(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4,
        int a5)
{
  struct _KTHREAD *v6; // rcx
  __int64 v8; // rbx
  __int64 v9; // r14
  BOOL bProducer; // eax
  char *v11; // rsi
  char *v12; // r12
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 pDeferredFreeList_low; // rcx
  __int64 v17; // r8
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _WORK_QUEUE_ITEM *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int v29; // r8d
  __int64 v30; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v31; // rbx
  struct AUTOEXPANDALLOCATION *v32; // rdx
  struct _WORK_QUEUE_ITEM *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // eax
  int *v37; // r8
  int v38; // ecx
  size_t Size; // [rsp+20h] [rbp-A1h]
  size_t Sizea; // [rsp+20h] [rbp-A1h]
  size_t Sizeb; // [rsp+20h] [rbp-A1h]
  void *v42; // [rsp+28h] [rbp-99h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v43; // [rsp+30h] [rbp-91h]
  int v44; // [rsp+38h] [rbp-89h]
  __int64 v45; // [rsp+40h] [rbp-81h]
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v47; // [rsp+80h] [rbp-41h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v48; // [rsp+88h] [rbp-39h] BYREF
  void *v49; // [rsp+90h] [rbp-31h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v50; // [rsp+98h] [rbp-29h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v51; // [rsp+A0h] [rbp-21h] BYREF
  void *v52; // [rsp+A8h] [rbp-19h]
  BOOL v53; // [rsp+B0h] [rbp-11h] BYREF
  int v54; // [rsp+B4h] [rbp-Dh]
  __int128 v55; // [rsp+B8h] [rbp-9h]
  __int128 v56; // [rsp+C8h] [rbp+7h]

  v6 = (struct _KTHREAD *)*((_QWORD *)this + 3);
  v52 = a3;
  if ( v6 != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3350;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 3350LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( a2[1].hNtSwapChain )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3357;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pRelease->pMetaData == nullptr",
      3357LL,
      0LL,
      0LL,
      0LL,
      0LL);
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
    WdLogGlobalForLineNumber = 3365;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Non-sequential swapchain client cannot provided metadata when releasing",
      3365LL,
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
    WdLogGlobalForLineNumber = 3372;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"ReleaseBuffer caller (0x%I64x) does not own the swapchain 0x%I64x",
      *((_QWORD *)v11 + 2),
      (__int64)this,
      0LL,
      0LL,
      0LL);
LABEL_65:
    LODWORD(v9) = -1073741811;
    goto LABEL_66;
  }
  v48 = 0LL;
  v51 = 0LL;
  DXGSWAPCHAIN::GetClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11, v14, &v48, &v51);
  v18 = v48;
  if ( *(_DWORD *)v48 != 1 || *((_DWORD *)v48 + 1) != *((_DWORD *)v11 + 7) )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)v11 + 2), this);
    WdLogGlobalForLineNumber = 3385;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"ReleaseBuffer caller (0x%I64x) does not own the swapchain 0x%I64x",
      *((_QWORD *)v11 + 2),
      (__int64)this,
      0LL,
      0LL,
      0LL);
    goto LABEL_65;
  }
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    LODWORD(v9) = DXGSWAPCHAIN::InsertGPUSignal(
                    this,
                    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11,
                    v18,
                    *((_QWORD *)this + 24),
                    a5);
    if ( (int)v9 < 0 )
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 3410;
      goto LABEL_21;
    }
LABEL_24:
    if ( *((_DWORD *)v11 + 7) == 1 )
    {
      if ( *((_DWORD *)this + 58) )
      {
        v21 = *((_QWORD *)v18 + 6);
        if ( v21 )
        {
          v22 = *((_QWORD *)v11 + 2);
          LOBYTE(v44) = 1;
          LODWORD(Sizea) = 0;
          v49 = 0LL;
          v23 = ObDuplicateObject(*((_QWORD *)v12 + 2), v21, v22, &v49, Sizea, 0, 6, v44);
          v9 = v23;
          if ( v23 < 0 )
          {
            WdLogSingleEntry2(2LL, *((_QWORD *)v18 + 6), v23);
            WdLogGlobalForLineNumber = 3432;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to duplicate Fence Nt handle 0x%I64x, error 0x%I64x",
              *((_QWORD *)v18 + 6),
              v9,
              0LL,
              0LL,
              0LL);
            DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v24, v25);
            goto LABEL_66;
          }
          a2->pMetaData = v49;
          *(_QWORD *)&a2->DeferredFreeListSize = *((_QWORD *)v18 + 7);
          if ( (unsigned int)Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline() )
          {
            v26 = (struct _WORK_QUEUE_ITEM *)operator new(0x30uLL, 0x4B677844u, 64LL);
            if ( !v26 )
            {
              WdLogSingleEntry1(2LL, *((_QWORD *)v18 + 6));
              WdLogGlobalForLineNumber = 3447;
LABEL_49:
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Failed to allocate WorkItem to delayed close Nt Handle 0x%I64x",
                *((_QWORD *)v18 + 6),
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_50;
            }
            LODWORD(v9) = ObReferenceObjectByPointer(*((PVOID *)v12 + 2), 0x10000000u, (POBJECT_TYPE)PsProcessType, 0);
            if ( (int)v9 < 0 )
            {
              WdLogSingleEntry1(2LL, *((_QWORD *)v12 + 2));
              WdLogGlobalForLineNumber = 3460;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Failed to increment refcount on Process 0x%I64x",
                *((_QWORD *)v12 + 2),
                0LL,
                0LL,
                0LL,
                0LL);
              DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v27, v28);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
LABEL_34:
              v8 = 0LL;
              goto LABEL_66;
            }
          }
          else
          {
            v33 = (struct _WORK_QUEUE_ITEM *)operator new(0x30uLL, 0x4B677844u, 64LL);
            v26 = v33;
            if ( !v33 )
            {
              WdLogSingleEntry1(2LL, *((_QWORD *)v18 + 6));
              WdLogGlobalForLineNumber = 3481;
              goto LABEL_49;
            }
            v33->List = 0LL;
            *(_OWORD *)&v33->WorkerRoutine = 0LL;
            v33[1].List = 0LL;
            LODWORD(v9) = ObReferenceObjectByPointer(*((PVOID *)v12 + 2), 0x10000000u, (POBJECT_TYPE)PsProcessType, 0);
            if ( (int)v9 < 0 )
            {
              WdLogSingleEntry1(2LL, *((_QWORD *)v12 + 2));
              WdLogGlobalForLineNumber = 3494;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Failed to increment refcount on Process 0x%I64x",
                *((_QWORD *)v12 + 2),
                0LL,
                0LL,
                0LL,
                0LL);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
LABEL_50:
              DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v34, v35);
              goto LABEL_34;
            }
          }
          v26[1].List.Blink = (struct _LIST_ENTRY *)*((_QWORD *)v18 + 6);
          v26[1].List.Flink = (struct _LIST_ENTRY *)*((_QWORD *)v12 + 2);
          v26->WorkerRoutine = (PWORKER_THREAD_ROUTINE)DXGSWAPCHAIN::AsyncCloseNtHandle;
          v26->Parameter = v26;
          v26->List.Flink = 0LL;
          ExQueueWorkItem(v26, DelayedWorkQueue);
          *((_QWORD *)v18 + 6) = 0LL;
          *((_QWORD *)v18 + 7) = 0LL;
        }
      }
    }
    v29 = *((_DWORD *)v11 + 10);
    v50 = 0LL;
    v47 = 0LL;
    DXGSWAPCHAIN::GetOtherClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11, v29, &v50, &v47);
    if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() || !v11[44] )
    {
      v30 = *((_QWORD *)this + 24);
      *((_QWORD *)this + 24) = v30 + 1;
      *((_QWORD *)v47 + 1) = v30;
    }
    v31 = v50;
    *(_DWORD *)v50 = 2;
    *((_DWORD *)v31 + 1) = DXGSWAPCHAIN::SwitchClient(v30, *((_DWORD *)v11 + 7));
    pDeferredFreeList_low = LODWORD(a2->pDeferredFreeList);
    if ( (_DWORD)pDeferredFreeList_low )
    {
      v32 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v31 + 2);
      v53 = a2->bProducer;
      LODWORD(Size) = pDeferredFreeList_low;
      v55 = 0LL;
      v54 = 0;
      v56 = 0LL;
      LODWORD(v9) = DXGSWAPCHAIN::SetMetaDataInternal(
                      (struct _KTHREAD **)this,
                      v32,
                      (int *)v31 + 6,
                      0,
                      Size,
                      (char *)v52,
                      (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v53,
                      a4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
      {
        LODWORD(v45) = DWORD2(v55);
        LODWORD(v43) = v54;
        LODWORD(v42) = v53;
        LODWORD(Size) = v9;
        McTemplateK0pqddpqqqqqq_EtwWriteTransfer(
          pDeferredFreeList_low,
          v15,
          v17,
          this,
          Size,
          v42,
          v43,
          (_QWORD)v55,
          v45,
          HIDWORD(v55),
          (_DWORD)v56,
          DWORD1(v56),
          DWORD2(v56),
          HIDWORD(v56));
      }
      if ( (int)v9 < 0 )
      {
        WdLogSingleEntry2(2LL, *((_QWORD *)v11 + 2), this);
        Sizeb = *((_QWORD *)v11 + 2);
        WdLogGlobalForLineNumber = 3549;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"ReleaseBuffer could not store the caller's (0x%I64x) metadata for swapchain (0x%I64x)",
          Sizeb,
          (__int64)this,
          0LL,
          0LL,
          0LL);
LABEL_44:
        DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v15, v17);
        v8 = 0LL;
        goto LABEL_66;
      }
    }
    if ( !*((_DWORD *)v31 + 6) )
      AUTOEXPANDALLOCATION::GetBuffer(*((AUTOEXPANDALLOCATION **)v31 + 2), 0, 0);
    v36 = *((_DWORD *)this + 58);
    if ( *((_DWORD *)v11 + 7) )
    {
      if ( v36 )
      {
        LODWORD(v9) = DXGSWAPCHAIN::ConsumerCheckForSurfacesToFree((struct _KTHREAD **)this, a2);
        if ( (int)v9 < 0 )
          goto LABEL_44;
      }
    }
    else
    {
      if ( !v36 )
      {
        v37 = (int *)*((_QWORD *)this + 28);
        v38 = *v37 + 1;
        if ( *v37 == v37[1] )
          v38 = 0;
        *v37 = v38;
      }
      LODWORD(v9) = DXGFIXEDQUEUE::Add(*((DXGFIXEDQUEUE **)this + 27), *((_DWORD *)v11 + 10));
      if ( (int)v9 < 0 )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 3573;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to add to surface to process queue, swapchain 0x%I64x",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_44;
      }
    }
    *((_DWORD *)v11 + 10) = -1;
    v8 = *((_QWORD *)v12 + 4);
    if ( v8 )
      KeSetEvent(*((PRKEVENT *)v12 + 4), 2, 0);
    goto LABEL_66;
  }
  if ( v11[44] && !a5 )
    goto LABEL_24;
  LODWORD(v9) = DXGSWAPCHAIN::InsertGPUSignal(
                  this,
                  (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11,
                  v18,
                  *((_QWORD *)this + 24),
                  a5);
  if ( (int)v9 >= 0 )
    goto LABEL_24;
  WdLogSingleEntry1(2LL, this);
  WdLogGlobalForLineNumber = 3398;
LABEL_21:
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to insert GPU signal, swapchain 0x%I64x",
    (__int64)this,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v19, v20);
LABEL_66:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
  {
    LODWORD(v43) = a2->pDeferredFreeList;
    LODWORD(v42) = a2->bProducer;
    LODWORD(Size) = v9;
    McTemplateK0pqdqp_EtwWriteTransfer(pDeferredFreeList_low, v15, v17, this, Size, v42, v43, v8);
  }
  return (unsigned int)v9;
}
