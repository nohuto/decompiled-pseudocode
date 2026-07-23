/*
 * XREFs of PopReleaseUserPresentSpinLock @ 0x1404A7AE0
 * Callers:
 *     PopSetSystemAwayMode @ 0x1407520E0 (PopSetSystemAwayMode.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 */

void __fastcall PopReleaseUserPresentSpinLock(KIRQL a1)
{
  KeReleaseSpinLock(&PopUserPresentLock, a1);
}
