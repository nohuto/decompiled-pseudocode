/*
 * XREFs of BgAcquireSpinLock @ 0x140BB25B4
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14058D070 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 */

void __fastcall BgAcquireSpinLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  BgpFwAcquireLock(a1, a2, a3, a4);
}
