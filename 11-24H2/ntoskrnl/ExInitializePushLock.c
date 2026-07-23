/*
 * XREFs of ExInitializePushLock @ 0x14044BBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
