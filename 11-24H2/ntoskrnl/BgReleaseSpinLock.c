/*
 * XREFs of BgReleaseSpinLock @ 0x140BB07FC
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140590050 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 */

__int64 __fastcall BgReleaseSpinLock(__int64 a1, __int64 a2)
{
  return BgpFwReleaseLock(a1, a2);
}
