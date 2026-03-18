/*
 * XREFs of DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1400109F0
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiPowerArbiterThread @ 0x1402C9300 (DpiPowerArbiterThread.c)
 *     DpiGetDxgAdapterSafe @ 0x14034F7AC (DpiGetDxgAdapterSafe.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(__int64 a1)
{
  __int64 v2; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4224), &LockHandle);
  if ( *(_DWORD *)(a1 + 4288) != 4 && *(_DWORD *)(a1 + 4292) == 1 )
  {
    WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 4733;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(
        &DxgkControlGuid_Context,
        &Dxgk_DevicePowerRequiredTimer,
        v2,
        *(_QWORD *)(a1 + 4032),
        1);
    if ( !*(_DWORD *)(a1 + 4232) )
      KeSetTimer((PKTIMER)(a1 + 4304), DueTime, (PKDPC)(a1 + 4368));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
