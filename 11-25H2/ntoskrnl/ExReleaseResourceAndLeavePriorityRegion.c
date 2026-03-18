/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x14064AF00
 * Callers:
 *     DifExReleaseResourceAndLeavePriorityRegionWrapper @ 0x140614CE0 (DifExReleaseResourceAndLeavePriorityRegionWrapper.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsBoostThreadIoEx @ 0x1402EA7E0 (PsBoostThreadIoEx.c)
 */

_QWORD *__fastcall ExReleaseResourceAndLeavePriorityRegion(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  ExReleaseResourceLite(a1);
  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v2, v3, v4);
}
