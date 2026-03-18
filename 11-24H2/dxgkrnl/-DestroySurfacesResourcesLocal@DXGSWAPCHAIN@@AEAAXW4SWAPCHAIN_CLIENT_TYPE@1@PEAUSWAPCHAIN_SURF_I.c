/*
 * XREFs of ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140423DEC
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401FDB34 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1401FE3F8 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1401FE870 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1401FF300 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x140200638 (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Feature_4234972473__private_IsEnabledDeviceUsageNoInline @ 0x140079100 (Feature_4234972473__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline @ 0x140079454 (Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1402E52F0 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesLocal(struct _KTHREAD **a1, int a2, __int64 a3)
{
  __int64 v6; // rdi
  struct _WORK_QUEUE_ITEM *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _LIST_ENTRY *v10; // rbp
  NTSTATUS v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // r15d
  struct DXGPROCESS *Current; // rbp
  unsigned int v17; // r14d
  unsigned int v18; // r9d
  __int64 v19; // r8
  unsigned int v20; // edx
  int v21; // edx
  struct DXGSYNCOBJECT *v22; // rbx
  unsigned int v23; // edx
  __int64 v24; // r8
  unsigned int v25; // edx
  int v26; // edx
  PERESOURCE *Global; // rax
  __int64 v28; // [rsp+20h] [rbp-78h]
  _BYTE v29[32]; // [rsp+50h] [rbp-48h] BYREF

  v6 = 6LL * a2;
  if ( *(_QWORD *)(a3 + 48LL * a2 + 104) )
  {
    if ( (unsigned int)Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline() )
    {
      v7 = (struct _WORK_QUEUE_ITEM *)operator new(0x30uLL, 0x4B677844u, 64LL);
      if ( !v7 )
      {
        WdLogSingleEntry1(2LL, *(_QWORD *)(a3 + 8 * v6 + 104));
        v28 = *(_QWORD *)(a3 + 8 * v6 + 104);
        WdLogGlobalForLineNumber = 2026;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to allocate WorkItem to delayed close Nt Handle 0x%I64x",
          v28,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGSWAPCHAIN::MarkAbandoned(a1, v8, v9);
        return;
      }
      v10 = *(struct _LIST_ENTRY **)((char *)a1 + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + 160);
      v11 = ObReferenceObjectByPointer(v10, 0x10000000u, (POBJECT_TYPE)PsProcessType, 0);
      if ( v11 < 0 )
      {
        v12 = v11;
        WdLogSingleEntry2(2LL, v10, v11);
        WdLogGlobalForLineNumber = 2041;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to increment refcount on Process 0x%I64x (Status 0x%I64x)",
          (__int64)v10,
          v12,
          0LL,
          0LL,
          0LL);
        DXGSWAPCHAIN::MarkAbandoned(a1, v13, v14);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
        return;
      }
      v7[1].List.Blink = *(struct _LIST_ENTRY **)(a3 + 8 * v6 + 104);
      v7[1].List.Flink = v10;
      v7->WorkerRoutine = (PWORKER_THREAD_ROUTINE)DXGSWAPCHAIN::AsyncCloseNtHandle;
      v7->Parameter = v7;
      v7->List.Flink = 0LL;
      ExQueueWorkItem(v7, DelayedWorkQueue);
    }
    else
    {
      ObCloseHandle(*(HANDLE *)(a3 + 8 * v6 + 104), 1);
    }
    *(_QWORD *)(a3 + 8 * v6 + 104) = 0LL;
    *(_QWORD *)(a3 + 8 * v6 + 96) = 0LL;
  }
  v15 = *(_DWORD *)(a3 + 8 * v6 + 80);
  if ( v15 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)a1);
    if ( !Current )
    {
LABEL_37:
      *(_DWORD *)(a3 + 8 * v6 + 80) = 0;
      return;
    }
    v17 = (v15 >> 6) & 0xFFFFFF;
    if ( (unsigned int)Feature_4234972473__private_IsEnabledDeviceUsageNoInline() )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v29, Current);
      v18 = v15 >> 30;
      if ( v17 < *((_DWORD *)Current + 74) )
      {
        v19 = *((_QWORD *)Current + 35);
        v20 = *(_DWORD *)(v19 + 16LL * v17 + 8);
        if ( v18 == ((v20 >> 5) & 3) && (v20 & 0x2000) == 0 )
        {
          v21 = v20 & 0x1F;
          if ( v21 )
          {
            if ( v21 == 8 )
            {
              v22 = *(struct DXGSYNCOBJECT **)(v19 + 16LL * v17);
              if ( v22 )
              {
                if ( v17 < *((_DWORD *)Current + 74) )
                {
                  v23 = *(_DWORD *)(v19 + 16LL * v17 + 8);
                  if ( v18 == ((v23 >> 5) & 3) && (v23 & 0x2000) == 0 && (v23 & 0x1F) != 0 )
                    *(_DWORD *)(v19 + 16 * (((unsigned __int64)v15 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
              }
              goto LABEL_20;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v22 = 0LL;
LABEL_20:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
      goto LABEL_35;
    }
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    if ( v17 < *((_DWORD *)Current + 74) )
    {
      v24 = *((_QWORD *)Current + 35);
      v25 = *(_DWORD *)(v24 + 16LL * v17 + 8);
      if ( v15 >> 30 == ((v25 >> 5) & 3) && (v25 & 0x2000) == 0 )
      {
        v26 = v25 & 0x1F;
        if ( v26 )
        {
          if ( v26 == 8 )
          {
            v22 = *(struct DXGSYNCOBJECT **)(v24 + 16LL * v17);
            goto LABEL_34;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v22 = 0LL;
LABEL_34:
    _InterlockedDecrement((volatile signed __int32 *)Current + 66);
    ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
LABEL_35:
    if ( v22 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::DestroySyncObject(Global, v22, v15, 0);
    }
    goto LABEL_37;
  }
}
