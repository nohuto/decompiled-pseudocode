/*
 * XREFs of ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x14021E260
 * Callers:
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402AE7C0 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402C57F0 (-VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140330B80 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403A2940 (-VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403E3320 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403E7B90 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426D90 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14000EB90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002BC70 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     DxgkMarkDeviceAsError @ 0x1403F7B50 (DxgkMarkDeviceAsError.c)
 */

void __fastcall HandleAsyncCommandError(_QWORD *a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // r14d
  struct _KTHREAD **v10; // r8
  struct _KTHREAD **v11; // r8
  struct _KTHREAD **v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15[8]; // [rsp+20h] [rbp-40h]
  __int64 v16; // [rsp+28h] [rbp-38h]
  bool v17[8]; // [rsp+28h] [rbp-38h]
  _BYTE v18[16]; // [rsp+50h] [rbp-10h] BYREF
  struct DXGDEVICE *v19; // [rsp+90h] [rbp+30h] BYREF

  v5 = a2;
  if ( *(_BYTE *)(a1[13] + 339LL) )
  {
    v7 = a1[17];
    v8 = *(unsigned int *)(v7 + 16);
    if ( (*(_DWORD *)(v7 + 12) & 0x100) != 0 )
    {
      v9 = 0;
      switch ( a4 )
      {
        case 1:
          v10 = (struct _KTHREAD **)a1[11];
          v19 = 0LL;
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v18, a3, v10, &v19, 0, 1);
          if ( !v19 )
          {
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v18);
            return;
          }
          v9 = *(_DWORD *)(*((_QWORD *)v19 + 2) + 468LL);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v18);
          break;
        case 2:
          v11 = (struct _KTHREAD **)a1[11];
          v19 = 0LL;
          DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v18, a3, v11, &v19, 0, 1);
          if ( !v19 )
          {
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v18);
            return;
          }
          v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 468LL);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v18);
          break;
        case 0:
          v12 = (struct _KTHREAD **)a1[11];
          v19 = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v18, a3, v12, &v19);
          if ( !v19 )
          {
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v18);
            return;
          }
          v9 = a3;
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v18);
          break;
      }
      WdLogSingleEntry4(2LL, v5, a1[11], v9, v8);
      v16 = a1[11];
      WdLogGlobalForLineNumber = 1006;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Async command failed: 0x%I64x, 0x%I64x, 0x%I64x 0x%I64x",
        v5,
        v16,
        v9,
        v8,
        0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        *(_DWORD *)v17 = v5;
        *(_DWORD *)v15 = v9;
        McTemplateK0pqq_EtwWriteTransfer(
          v13,
          (__int64)&EventVmBusAsyncCommandFailure,
          v14,
          a1[11],
          *(_QWORD *)v15,
          *(_QWORD *)v17);
      }
      if ( v9 )
      {
        v19 = (struct DXGDEVICE *)(v9 | 0x1900000000LL);
        DxgkMarkDeviceAsError(&v19);
      }
    }
  }
}
