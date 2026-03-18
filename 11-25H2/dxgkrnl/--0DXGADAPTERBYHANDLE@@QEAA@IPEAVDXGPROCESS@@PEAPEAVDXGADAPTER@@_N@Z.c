/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1401A92D0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1401AA510 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkModifyVSyncWaiterInternal @ 0x1401AB5F0 (DxgkModifyVSyncWaiterInternal.c)
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401AC9B0 (DxgkOpenVerticalBlankEventInternal.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1401ACEB0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1401ADAB0 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401AFCCC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkConfirmToken @ 0x1401B5FF0 (DxgkConfirmToken.c)
 *     DxgkGetMultisampleMethodList @ 0x1401C46F0 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1401C4E00 (DxgkInvalidateActiveVidPn.c)
 *     NtDxgkIsFeatureEnabled @ 0x1401CC7A0 (NtDxgkIsFeatureEnabled.c)
 *     DxgkSetStablePowerState @ 0x1401E9AD0 (DxgkSetStablePowerState.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021CBA0 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x140283980 (DxgkGetDisplayModeList.c)
 *     DxgkGetPresentHistoryInternal @ 0x1402871A0 (DxgkGetPresentHistoryInternal.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402E5E70 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_META.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402E6144 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402E65A4 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1402FB5E4 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x140302B10 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL.c)
 *     DxgkQueryVideoMemoryInfo @ 0x140309910 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14032973C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkGetScanLine @ 0x140342C80 (DxgkGetScanLine.c)
 *     DxgkQueryClockCalibration @ 0x140385300 (DxgkQueryClockCalibration.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14038F660 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkGetPostCompositionCaps @ 0x140398610 (DxgkGetPostCompositionCaps.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x140399040 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1403A21E0 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403A37C0 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1403A5020 (DxgkFreeGpuVirtualAddress.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403B1828 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403B60A8 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkFlushHeapTransitions @ 0x1403B9B10 (DxgkFlushHeapTransitions.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1403C3D40 (DxgkCheckVidPnExclusiveOwnership.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDUPL@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1403C42F0 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDU.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403CB400 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkFlushPresentHistory @ 0x1403E6BA0 (DxgkFlushPresentHistory.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1403FF61C (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x140400520 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkCheckMonitorPowerState @ 0x14040F790 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGADAPTER **a4,
        bool a5)
{
  __int64 v5; // rbx
  char *v10; // rbp
  int v11; // edx
  int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // edi
  __int64 v15; // r13
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  __int64 v25; // r8

  v5 = 0LL;
  *(_QWORD *)this = 0LL;
  if ( a4 )
  {
    v10 = (char *)a3 + 248;
    if ( a3 != (struct DXGPROCESS *)-248LL )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      if ( *((struct _KTHREAD **)v10 + 1) == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1575;
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
              1575LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v10);
    v14 = (a2 >> 6) & 0xFFFFFF;
    if ( (*((_DWORD *)a3 + 102) & 0x100) != 0 )
    {
      v15 = *((_QWORD *)a3 + 74);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 248));
      if ( v14 < *(_DWORD *)(v15 + 296) )
      {
        v16 = *(_QWORD *)(v15 + 280) + 16LL * v14;
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
                    318LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
              }
            }
          }
        }
      }
      _InterlockedDecrement((volatile signed __int32 *)(v15 + 264));
      ExReleasePushLockSharedEx(v15 + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( v14 < *((_DWORD *)a3 + 74) )
    {
      v21 = *((_QWORD *)a3 + 35) + 16LL * v14;
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
                  318LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
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
    _InterlockedDecrement((volatile signed __int32 *)v10 + 4);
    ExReleasePushLockSharedEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  return this;
}
