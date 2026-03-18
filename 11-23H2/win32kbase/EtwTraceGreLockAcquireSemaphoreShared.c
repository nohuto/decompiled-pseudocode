/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0041790
 * Callers:
 *     DxgkEngVisRgnUniq @ 0x1C000EDA0 (DxgkEngVisRgnUniq.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C001B11C (DrvNotifyModeChangeStartStop.c)
 *     GreSfmOpenTokenEvent @ 0x1C001B440 (GreSfmOpenTokenEvent.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C001E59C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C005D92C (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1C00CBC90 (GreSfmGetNotificationTokens.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C01665A0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DxEngLockShareSem @ 0x1C01693B0 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C0169A50 (EngAcquireSemaphoreShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C016A600 (GreLockVisRgnSharedOrExclusive.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BC80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreShared(__int64 a1, int a2)
{
  __int64 result; // rax
  int v5; // r8d
  __int64 v6; // rcx

  result = SGDGetSessionState(a1);
  v6 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v6 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz_EtwWriteTransfer(v6, (unsigned int)&LockAcquireShared, v5, a2, a1);
  }
  return result;
}
