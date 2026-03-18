/*
 * XREFs of PopReleaseUserPresentSpinLock @ 0x1404ABF50
 * Callers:
 *     PopSetSystemAwayMode @ 0x140747CD0 (PopSetSystemAwayMode.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void __fastcall PopReleaseUserPresentSpinLock(KIRQL a1)
{
  KeReleaseSpinLock(&PopUserPresentLock, a1);
}
