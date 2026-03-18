/*
 * XREFs of BgAcquireSpinLock @ 0x140BA05B4
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14058C870 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
