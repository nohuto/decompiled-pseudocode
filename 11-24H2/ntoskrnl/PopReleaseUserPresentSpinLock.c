/*
 * XREFs of PopReleaseUserPresentSpinLock @ 0x1404AD400
 * Callers:
 *     PopSetSystemAwayMode @ 0x140753DC0 (PopSetSystemAwayMode.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 */

void __fastcall PopReleaseUserPresentSpinLock(KIRQL a1)
{
  KeReleaseSpinLock(&PopUserPresentLock, a1);
}
