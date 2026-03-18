/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x140656E00
 * Callers:
 *     DifExReleaseResourceAndLeavePriorityRegionWrapper @ 0x140620CA0 (DifExReleaseResourceAndLeavePriorityRegionWrapper.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall ExReleaseResourceAndLeavePriorityRegion(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  ExReleaseResourceLite(a1);
  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 1, 0LL, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v2, v3, v4);
}
