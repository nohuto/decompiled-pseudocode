/*
 * XREFs of ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002B430
 * Callers:
 *     ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1401D37A0 (-DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z.c)
 *     ?NtDxgkGetNativeFenceLogDetailInternal@@YAJPEAU_D3DKMT_GETNATIVEFENCELOGDETAIL@@_N@Z @ 0x1401D5BA0 (-NtDxgkGetNativeFenceLogDetailInternal@@YAJPEAU_D3DKMT_GETNATIVEFENCELOGDETAIL@@_N@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140217C90 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140218A40 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140298C68 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x14029B670 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14029CC80 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402B81C0 (DxgkSubmitCommandToHwQueueInternal.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x140300A14 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1403886A4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1403FA950 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x140420F70 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

DXGHWQUEUEBYHANDLE *__fastcall DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
        DXGHWQUEUEBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGHWQUEUE **a4,
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
  if ( v16 != 15 )
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
    _m_prefetchw((const void *)(v21 + 104));
    v22 = *(_QWORD *)(v21 + 104);
    if ( !v22 )
      goto LABEL_16;
    while ( 1 )
    {
      v23 = v22;
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 104), v22 + 1, v22);
      if ( v23 == v22 )
        break;
      if ( !v22 )
        goto LABEL_16;
    }
  }
LABEL_17:
  *a4 = *(struct DXGHWQUEUE **)this;
  _InterlockedDecrement((volatile signed __int32 *)v6 + 4);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
