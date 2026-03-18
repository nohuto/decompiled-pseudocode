/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1401AB7D0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1401AC9A0 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkModifyVSyncWaiterInternal @ 0x1401ADA80 (DxgkModifyVSyncWaiterInternal.c)
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401AEE90 (DxgkOpenVerticalBlankEventInternal.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1401AF390 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1401AFF60 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401B227C (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkConfirmToken @ 0x1401B85A0 (DxgkConfirmToken.c)
 *     DxgkGetMultisampleMethodList @ 0x1401C9940 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1401CA050 (DxgkInvalidateActiveVidPn.c)
 *     NtDxgkIsFeatureEnabled @ 0x1401D1A40 (NtDxgkIsFeatureEnabled.c)
 *     DxgkSetStablePowerState @ 0x1401EF550 (DxgkSetStablePowerState.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223000 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x140293760 (DxgkGetPresentHistoryInternal.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402BA3A0 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL.c)
 *     DxgkGetScanLine @ 0x1402D3070 (DxgkGetScanLine.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402D5848 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402D5B14 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14030BDEC (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x14034FC90 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryClockCalibration @ 0x14036C6F0 (DxgkQueryClockCalibration.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403708E8 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkGetPostCompositionCaps @ 0x140372140 (DxgkGetPostCompositionCaps.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1403728C0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x140399110 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x14039AA10 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkFreeGpuVirtualAddress @ 0x14039BD40 (DxgkFreeGpuVirtualAddress.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403A23C0 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1403A4B50 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_META.c)
 *     DxgkFlushHeapTransitions @ 0x1403AE250 (DxgkFlushHeapTransitions.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1403B8780 (DxgkCheckVidPnExclusiveOwnership.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDUPL@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1403B8D30 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDU.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403BE1F0 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1403D14C4 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     DxgkFlushPresentHistory @ 0x1403DE5A0 (DxgkFlushPresentHistory.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1403F960C (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1403FA510 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkCheckMonitorPowerState @ 0x140408DE0 (DxgkCheckMonitorPowerState.c)
 *     DxgkGetDisplayModeList @ 0x140415680 (DxgkGetDisplayModeList.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGADAPTER **a4,
        bool a5)
{
  __int64 v5; // rbx
  volatile signed __int32 *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // esi
  struct _KTHREAD *v15; // r13
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8

  v5 = 0LL;
  *(_QWORD *)this = 0LL;
  if ( a4 )
  {
    v10 = (volatile signed __int32 *)(a3 + 31);
    if ( a3 != (struct _KTHREAD **)-248LL && a3[32] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1512;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v12,
            v11,
            v13,
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
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v10);
    v14 = (a2 >> 6) & 0xFFFFFF;
    if ( ((_DWORD)a3[51] & 0x100) != 0 )
    {
      v15 = a3[74];
      DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v15 + 248));
      if ( v14 < *((_DWORD *)v15 + 74) )
      {
        v16 = *((_QWORD *)v15 + 35) + 16LL * v14;
        if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v16 + 8) & 0x60) && (*(_DWORD *)(v16 + 8) & 0x2000) == 0 )
        {
          v17 = *(_DWORD *)(v16 + 8) & 0x1F;
          if ( v17 )
          {
            if ( v17 == 1 )
            {
              v5 = *(_QWORD *)v16;
            }
            else if ( a5 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 318;
              if ( bTracingEnabled )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                  McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                    v19,
                    v18,
                    v20,
                    0LL,
                    0,
                    -1,
                    L"Handle type mismatch",
                    62,
                    0,
                    0,
                    0,
                    0);
              }
            }
          }
        }
      }
      _InterlockedDecrement((volatile signed __int32 *)v15 + 66);
      ExReleasePushLockSharedEx((char *)v15 + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( v14 < *((_DWORD *)a3 + 74) )
    {
      v21 = (__int64)a3[35] + 16 * v14;
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v21 + 8) & 0x60) && (*(_DWORD *)(v21 + 8) & 0x2000) == 0 )
      {
        v22 = *(_DWORD *)(v21 + 8) & 0x1F;
        if ( v22 )
        {
          if ( v22 == 1 )
          {
            v5 = *(_QWORD *)v21;
          }
          else if ( a5 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v24,
                  v23,
                  v25,
                  0LL,
                  0,
                  -1,
                  L"Handle type mismatch",
                  62,
                  0,
                  0,
                  0,
                  0);
            }
          }
        }
      }
    }
    *(_QWORD *)this = v5;
    if ( v5 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24));
      *((_QWORD *)this + 1) = -1LL;
    }
    *a4 = *(struct DXGADAPTER **)this;
    _InterlockedDecrement(v10 + 4);
    ExReleasePushLockSharedEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  return this;
}
