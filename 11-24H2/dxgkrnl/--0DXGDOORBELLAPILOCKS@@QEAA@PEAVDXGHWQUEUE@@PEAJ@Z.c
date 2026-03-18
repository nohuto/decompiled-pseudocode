/*
 * XREFs of ??0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z @ 0x140073C48
 * Callers:
 *     ?DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z @ 0x1401D846C (-DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z.c)
 *     ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1401D8A50 (-DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z.c)
 *     ?DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z @ 0x1401D9494 (-DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z.c)
 *     ?DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z @ 0x1401D98CC (-DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 */

DXGDOORBELLAPILOCKS *__fastcall DXGDOORBELLAPILOCKS::DXGDOORBELLAPILOCKS(
        DXGDOORBELLAPILOCKS *this,
        struct DXGHWQUEUE *a2,
        int *a3)
{
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rax
  __int64 v10; // [rsp+28h] [rbp-30h]

  *(_QWORD *)this = a2;
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDOORBELLAPILOCKS *)((char *)this + 8),
    *(struct DXGDEVICE **)(*((_QWORD *)a2 + 2) + 16LL));
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGDOORBELLAPILOCKS *)((char *)this + 24),
    *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)this + 48, *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL), 0, v6, 0);
  *a3 = 0;
  v7 = COREDEVICEACCESS::AcquireShared((DXGDOORBELLAPILOCKS *)((char *)this + 48), 0LL);
  *a3 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 16LL), v7);
    v8 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    v10 = *a3;
    WdLogGlobalForLineNumber = 430;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"CoreDeviceAccess for DXGDEVICE 0x%I64x failed with NTSTATUS 0x%I64x",
      *(_QWORD *)(v8 + 16),
      v10,
      0LL,
      0LL,
      0LL);
  }
  return this;
}
