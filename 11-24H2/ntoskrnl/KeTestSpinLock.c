/*
 * XREFs of KeTestSpinLock @ 0x140418A40
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x1404189B8 (EtwpLockUnlockBufferList.c)
 *     HalpDmaMarkHiberAdapter @ 0x1404D0F9C (HalpDmaMarkHiberAdapter.c)
 *     KiDecodeMcaFault @ 0x1405080F0 (KiDecodeMcaFault.c)
 *     BvgaAcquireLock @ 0x1405904A0 (BvgaAcquireLock.c)
 *     EtwpBugCheckMultiPartCallback @ 0x14064FFD0 (EtwpBugCheckMultiPartCallback.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeTestSpinLock(PKSPIN_LOCK SpinLock)
{
  if ( !*SpinLock )
    return 1;
  _mm_pause();
  return 0;
}
