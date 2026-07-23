/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x140655500
 * Callers:
 *     DifExReleaseResourceAndLeavePriorityRegionWrapper @ 0x14061F260 (DifExReleaseResourceAndLeavePriorityRegionWrapper.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall ExReleaseResourceAndLeavePriorityRegion(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  ExReleaseResourceLite(a1);
  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
