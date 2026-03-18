/*
 * XREFs of DpiCancelSuspendAdapterTimer @ 0x14002B244
 * Callers:
 *     DpiRequestDevicePowerState @ 0x14002AC88 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14002B120 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall DpiCancelSuspendAdapterTimer(__int64 a1)
{
  char v2; // di
  __int64 v3; // r8
  BOOLEAN v4; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4224), &LockHandle);
    v2 = 1;
  }
  WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
  WdLogGlobalForLineNumber = 4819;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&Dxgk_DevicePowerRequiredTimer,
      v3,
      *(_QWORD *)(a1 + 4032),
      0);
  v4 = KeCancelTimer((PKTIMER)(a1 + 4304));
  if ( v2 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v4 )
      KeFlushQueuedDpcs();
  }
}
