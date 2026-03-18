/*
 * XREFs of ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10
 * Callers:
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x140022978 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x140022E74 (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14005DD8C (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x14005E2E4 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x14006CED4 (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x140094030 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     _lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_ @ 0x140186B20 (_lambda_d61da4d51b31b33ef5e605a1dd45d7b4_--_lambda_invoker_cdecl_.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x140189958 (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFI.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x14018A110 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14018A170 (-StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     OutputDuplRemoteSessionReconnected @ 0x14018B268 (OutputDuplRemoteSessionReconnected.c)
 *     OutputDuplRemoteSessionDisconnected @ 0x14018BB18 (OutputDuplRemoteSessionDisconnected.c)
 *     ?CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ @ 0x14019BF1C (-CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x14019CD40 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1401BB658 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     _lambda_ab20bd11cb5e847b50387722fd71407e_::operator() @ 0x1401BD670 (_lambda_ab20bd11cb5e847b50387722fd71407e_--operator().c)
 *     ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1401F3C6C (-AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1401F3E94 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ?FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1401F3F20 (-FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z.c)
 *     ?FindMappingFromHostId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1401F3FA0 (-FindMappingFromHostId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER.c)
 *     ?GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1401FE8E0 (-GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x14020D13C (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x140281928 (-CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU.c)
 *     ?DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z @ 0x140281C94 (-DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x14028222C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x140282508 (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1402830F0 (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14028320C (-StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1402834E0 (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 *     DxgkGetPresentHistoryInternal @ 0x140293760 (DxgkGetPresentHistoryInternal.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x14029F130 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403A620C (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1403BFCE0 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1403C54B8 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1403CDFD0 (-DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1403D14C4 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403DBB1C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1403EF064 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1403F1670 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1403FA510 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x140410784 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     DxgkGetDisplayModeList @ 0x140415680 (DxgkGetDisplayModeList.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DXGAUTOPUSHLOCK *__fastcall DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(DXGAUTOPUSHLOCK *this, struct _KTHREAD **a2, char a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = 0;
  if ( !a3 )
  {
    if ( a2 )
    {
      if ( a2[1] == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1512;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v5,
              v4,
              v6,
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
    }
  }
  return this;
}
