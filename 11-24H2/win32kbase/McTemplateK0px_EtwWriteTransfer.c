/*
 * XREFs of McTemplateK0px_EtwWriteTransfer @ 0x1400ED870
 * Callers:
 *     EtwDwmSpriteDestroyEvent @ 0x1400ED6F0 (EtwDwmSpriteDestroyEvent.c)
 *     EtwLogicalSurfPhysSurfUnbindEvent @ 0x1400ED720 (EtwLogicalSurfPhysSurfUnbindEvent.c)
 *     EtwDwmSpriteCreateEvent @ 0x1400ED750 (EtwDwmSpriteCreateEvent.c)
 *     EtwLogicalSurfEnableDirtyNotificationEvent @ 0x1400ED780 (EtwLogicalSurfEnableDirtyNotificationEvent.c)
 *     EtwLogicalSurfPhysSurfBindEvent @ 0x1400ED7B0 (EtwLogicalSurfPhysSurfBindEvent.c)
 *     EtwDwmSpriteLogicalSurfBindEvent @ 0x1400ED7E0 (EtwDwmSpriteLogicalSurfBindEvent.c)
 *     EtwDwmSpriteLogicalSurfUnBindEvent @ 0x1400ED810 (EtwDwmSpriteLogicalSurfUnBindEvent.c)
 *     EtwTraceDCompBeginFrameEvent @ 0x1400ED840 (EtwTraceDCompBeginFrameEvent.c)
 *     EtwTraceTransformAgeDecay @ 0x1400FEEC0 (EtwTraceTransformAgeDecay.c)
 *     EtwBindSwapChain @ 0x1401480F0 (EtwBindSwapChain.c)
 *     EtwTraceFlipManagerContentUnbind @ 0x1401B45B0 (EtwTraceFlipManagerContentUnbind.c)
 *     EtwTraceFlipManagerFlipAwayFenceCreate @ 0x1401B4610 (EtwTraceFlipManagerFlipAwayFenceCreate.c)
 *     EtwTraceFlipManagerFlipAwayFenceDestroy @ 0x1401B4640 (EtwTraceFlipManagerFlipAwayFenceDestroy.c)
 *     EtwTraceTokenManagerDisableScanoutToken @ 0x1401B4E00 (EtwTraceTokenManagerDisableScanoutToken.c)
 *     EtwBindLogicalSurfaceRHEvent @ 0x1401CD7A0 (EtwBindLogicalSurfaceRHEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140033530 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0px_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 8;
  return McGenEventWrite_EtwWriteTransfer(8LL, a2, &W32kControlGuid, 3u, &v4);
}
