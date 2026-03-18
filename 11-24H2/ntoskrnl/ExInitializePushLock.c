/*
 * XREFs of ExInitializePushLock @ 0x140456C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
