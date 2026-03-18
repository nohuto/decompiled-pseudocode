/*
 * XREFs of ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1401AF390 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkGetAllocationPriority @ 0x1401B29A0 (DxgkGetAllocationPriority.c)
 *     DxgkQueryAllocationResidency @ 0x1401B3220 (DxgkQueryAllocationResidency.c)
 *     DxgkInvalidateCache @ 0x1401B35A0 (DxgkInvalidateCache.c)
 *     DxgkCreateContext @ 0x1401B8760 (DxgkCreateContext.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401B9E28 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1401BC260 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1401BC920 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401E15EC (-NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z.c)
 *     DxgkCreateOverlay @ 0x1401E8580 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1401E8BE0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1401E9130 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1401E9630 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1401E9BD0 (DxgkUpdateOverlay.c)
 *     DxgkCreateProtectedSession @ 0x1401F0700 (DxgkCreateProtectedSession.c)
 *     NtDxgkCreateNativeFenceInternal @ 0x1401F8C68 (NtDxgkCreateNativeFenceInternal.c)
 *     DxgkCreateSwapChain @ 0x140201340 (DxgkCreateSwapChain.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x14021E260 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021EFC0 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402233B0 (-VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140225AD0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022F9C0 (-VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemPages@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022FDF0 (-VmBusSetExistingSysMemPages@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402302F0 (-VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSetQueuedLimit @ 0x14029A720 (DxgkSetQueuedLimit.c)
 *     DxgkOfferAllocations @ 0x14029B100 (DxgkOfferAllocations.c)
 *     DxgkUnlock2 @ 0x1402A21C0 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x1402A3430 (DxgkLock2.c)
 *     DxgkUnlock @ 0x1402A90D0 (DxgkUnlock.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1402A9490 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1402A9A9C (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 *     DxgkGetDeviceStateInternal @ 0x1402AB150 (DxgkGetDeviceStateInternal.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1402AC610 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1402B0900 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1402B97E0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402BCA10 (DxgkWaitForVerticalBlankEventInternal.c)
 *     DxgkShutdownBootGraphics @ 0x1402C9DC0 (DxgkShutdownBootGraphics.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1402CC920 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1402D17A0 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1402F7A50 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkPresentRedirected @ 0x140300910 (DxgkPresentRedirected.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x140304ED8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14030BDEC (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkSetAllocationPriority @ 0x140328FE0 (DxgkSetAllocationPriority.c)
 *     DxgkConfigureSharedResource @ 0x1403293B0 (DxgkConfigureSharedResource.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x140329770 (DxgkGetResourcePresentPrivateDriverData.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x14032BC18 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1403506F4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x140351948 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x140353EC0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x140354890 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z @ 0x14035E31C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z.c)
 *     DxgkLock @ 0x140365AD0 (DxgkLock.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x14036E2F0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403708E8 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkWaitForIdle @ 0x140376090 (DxgkWaitForIdle.c)
 *     DxgkSetDisplayMode @ 0x14037ECD0 (DxgkSetDisplayMode.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x14038A1B0 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkQueryResourceInfo @ 0x14038A4D0 (DxgkQueryResourceInfo.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x14038C440 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x14038C890 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkReclaimAllocations @ 0x1403937A0 (DxgkReclaimAllocations.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1403967CC (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     DxgkEnableUnorderedWaitsForDevice @ 0x140398BC0 (DxgkEnableUnorderedWaitsForDevice.c)
 *     NtDxgkUnpinResources @ 0x1403AD560 (NtDxgkUnpinResources.c)
 *     ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403BAD80 (-VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     NtDxgkCancelPresents @ 0x1403BE860 (NtDxgkCancelPresents.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C9B44 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkCheckSinglePlaneForMultiPlaneOverlaySupport @ 0x1403CE770 (DxgkCheckSinglePlaneForMultiPlaneOverlaySupport.c)
 *     DxgkOpenSwapChain @ 0x1403DDD30 (DxgkOpenSwapChain.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403EA4F0 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 *     DxgkMarkDeviceAsError @ 0x1403F7B50 (DxgkMarkDeviceAsError.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1403F960C (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkSetGammaRamp @ 0x1403FCA30 (DxgkSetGammaRamp.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x14040CC00 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEBD@Z @ 0x14040DD20 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEBD@Z.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x14040E800 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEBD@Z @ 0x14040ECA0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEBD@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x14041D400 (DxgkSubmitPresentToHwQueue.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140425E60 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426500 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426D90 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

DXGDEVICEBYHANDLE *__fastcall DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        DXGDEVICEBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGDEVICE **a4)
{
  volatile signed __int32 *v4; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax

  v4 = (volatile signed __int32 *)(a3 + 31);
  if ( a3 != (struct _KTHREAD **)-248LL && a3[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v10,
          v9,
          v11,
          0LL,
          2,
          -1,
          L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          232,
          0,
          0,
          0,
          0);
    }
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v4);
  v12 = (a2 >> 6) & 0xFFFFFF;
  if ( v12 >= *((_DWORD *)a3 + 74) )
    goto LABEL_14;
  v13 = (__int64)a3[35] + 16 * v12;
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v13 + 8) & 0x60) )
    goto LABEL_14;
  if ( (*(_DWORD *)(v13 + 8) & 0x2000) != 0 )
    goto LABEL_14;
  v14 = *(_DWORD *)(v13 + 8) & 0x1F;
  if ( !v14 )
    goto LABEL_14;
  if ( v14 != 3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(v16, v15, v17, 0LL, 0, -1, L"Handle type mismatch", 62, 0, 0, 0, 0);
LABEL_14:
    *(_QWORD *)this = 0LL;
    goto LABEL_15;
  }
  v19 = *(_QWORD *)v13;
  *(_QWORD *)this = *(_QWORD *)v13;
  if ( v19 )
    _InterlockedIncrement64((volatile signed __int64 *)(v19 + 64));
LABEL_15:
  *a4 = *(struct DXGDEVICE **)this;
  _InterlockedDecrement(v4 + 4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
