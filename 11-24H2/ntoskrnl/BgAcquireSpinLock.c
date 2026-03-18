/*
 * XREFs of BgAcquireSpinLock @ 0x140BB05B4
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140590050 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
