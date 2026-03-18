/*
 * XREFs of DxgkAcquireGuestCpuEvent @ 0x14004BC7C
 * Callers:
 *     VidSchCreateSyncObject @ 0x1400F9A30 (VidSchCreateSyncObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 DxgkAcquireGuestCpuEvent()
{
  return ((__int64 (*)(void))DxgCoreInterface[93])();
}
