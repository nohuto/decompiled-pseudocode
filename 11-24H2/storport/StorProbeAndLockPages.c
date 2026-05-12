/*
 * XREFs of StorProbeAndLockPages @ 0x14000D428
 * Callers:
 *     StorBuildSynchronousScsiRequest @ 0x14000C61C (StorBuildSynchronousScsiRequest.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x14000CE9C (RaidUnitSendSrbIoControlSynchronously.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorProbeAndLockPages(struct _MDL *a1, __int64 a2, LOCK_OPERATION a3)
{
  MmProbeAndLockPages(a1, 0, a3);
  return 0LL;
}
