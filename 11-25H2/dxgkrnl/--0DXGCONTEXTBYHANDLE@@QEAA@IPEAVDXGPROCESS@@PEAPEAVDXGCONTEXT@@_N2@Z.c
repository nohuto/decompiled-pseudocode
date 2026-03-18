/*
 * XREFs of ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40
 * Callers:
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEBD@Z @ 0x1401B17A0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEBD@Z.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1401BA6B0 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1401D9EF0 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1401DAA20 (DxgkPresentMultiPlaneOverlay2.c)
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401EFCAC (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140217C90 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140218A40 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140218FB0 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140290740 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14029CC80 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1402ABA40 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402B0A90 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkPresent @ 0x1402F11A0 (DxgkPresent.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x140300A14 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     OutputDuplPresent @ 0x140302BF4 (OutputDuplPresent.c)
 *     DxgkCreateHwQueueInternal @ 0x140321C88 (DxgkCreateHwQueueInternal.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x14032B360 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkRender @ 0x1403444D0 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x14035A2D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403B4660 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1403CED40 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkSetContextSchedulingPriority @ 0x1403E92A0 (DxgkSetContextSchedulingPriority.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1403FA950 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     DxgkGetContextSchedulingPriority @ 0x140407F90 (DxgkGetContextSchedulingPriority.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

DXGCONTEXTBYHANDLE *__fastcall DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
        DXGCONTEXTBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGCONTEXT **a4,
        bool a5,
        bool a6)
{
  char *v6; // rdi
  int v11; // edx
  int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v21; // rdx
  signed __int64 v22; // rax
  signed __int64 v23; // rtt

  v6 = (char *)a3 + 248;
  if ( a3 != (struct DXGPROCESS *)-248LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *((struct _KTHREAD **)v6 + 1) == KeGetCurrentThread() )
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
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v6);
  v14 = (a2 >> 6) & 0xFFFFFF;
  if ( v14 >= *((_DWORD *)a3 + 74) )
    goto LABEL_15;
  v15 = *((_QWORD *)a3 + 35) + 16LL * v14;
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v15 + 8) & 0x60) )
    goto LABEL_15;
  if ( (*(_DWORD *)(v15 + 8) & 0x2000) != 0 )
    goto LABEL_15;
  v16 = *(_DWORD *)(v15 + 8) & 0x1F;
  if ( !v16 )
    goto LABEL_15;
  if ( v16 != 7 )
  {
    if ( a6 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v18,
            v17,
            v19,
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
LABEL_15:
    *((_BYTE *)this + 8) = a5;
LABEL_16:
    *(_QWORD *)this = 0LL;
    goto LABEL_17;
  }
  v21 = *(_QWORD *)v15;
  *(_QWORD *)this = v21;
  *((_BYTE *)this + 8) = a5;
  if ( v21 && !a5 )
  {
    _m_prefetchw((const void *)(v21 + 32));
    v22 = *(_QWORD *)(v21 + 32);
    if ( !v22 )
      goto LABEL_16;
    while ( 1 )
    {
      v23 = v22;
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 32), v22 + 1, v22);
      if ( v23 == v22 )
        break;
      if ( !v22 )
        goto LABEL_16;
    }
  }
LABEL_17:
  *a4 = *(struct DXGCONTEXT **)this;
  _InterlockedDecrement((volatile signed __int32 *)v6 + 4);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
