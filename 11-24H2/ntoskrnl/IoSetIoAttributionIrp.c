/*
 * XREFs of IoSetIoAttributionIrp @ 0x1404A3090
 * Callers:
 *     <none>
 * Callees:
 *     IoSetDiskIoAttributionFromThread @ 0x14025CAE0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14025D350 (IopSetDiskIoAttributionFromProcess.c)
 */

__int64 __fastcall IoSetIoAttributionIrp(__int64 a1, struct _KTHREAD *a2, int a3)
{
  if ( !a3 || (a3 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (a3 & 1) == 0 )
    return IopSetDiskIoAttributionFromProcess(a1, (__int64)a2);
  if ( (a3 & 2) != 0 )
    return 3221225485LL;
  return IoSetDiskIoAttributionFromThread(a1, a2);
}
