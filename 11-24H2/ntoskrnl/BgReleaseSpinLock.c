/*
 * XREFs of BgReleaseSpinLock @ 0x140BB27FC
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14058D070 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 */

__int64 __fastcall BgReleaseSpinLock(__int64 a1, __int64 a2)
{
  return BgpFwReleaseLock(a1, a2);
}
