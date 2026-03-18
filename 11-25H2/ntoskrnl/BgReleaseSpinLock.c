/*
 * XREFs of BgReleaseSpinLock @ 0x140BA07FC
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14058C870 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 */

__int64 __fastcall BgReleaseSpinLock(__int64 a1, __int64 a2)
{
  return BgpFwReleaseLock(a1, a2);
}
