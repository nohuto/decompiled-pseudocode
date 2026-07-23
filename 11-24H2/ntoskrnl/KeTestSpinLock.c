/*
 * XREFs of KeTestSpinLock @ 0x1404087F0
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x140408768 (EtwpLockUnlockBufferList.c)
 *     HalpDmaMarkHiberAdapter @ 0x1404C9FDC (HalpDmaMarkHiberAdapter.c)
 *     KiDecodeMcaFault @ 0x1405059B0 (KiDecodeMcaFault.c)
 *     BvgaAcquireLock @ 0x14058D4C0 (BvgaAcquireLock.c)
 *     EtwpBugCheckMultiPartCallback @ 0x14064E610 (EtwpBugCheckMultiPartCallback.c)
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
