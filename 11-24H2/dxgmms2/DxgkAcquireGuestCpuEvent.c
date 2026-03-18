/*
 * XREFs of DxgkAcquireGuestCpuEvent @ 0x14004B38C
 * Callers:
 *     VidSchCreateSyncObject @ 0x1400F8AD0 (VidSchCreateSyncObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 DxgkAcquireGuestCpuEvent()
{
  return ((__int64 (*)(void))DxgCoreInterface[93])();
}
