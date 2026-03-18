/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x14003F6CC
 * Callers:
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x14002D850 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchEnableLatencyToleranceTimer @ 0x1400489B0 (VidSchEnableLatencyToleranceTimer.c)
 *     Upgrade64KBWork @ 0x140098C60 (Upgrade64KBWork.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000DC70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, a3, 1u, &v4);
}
