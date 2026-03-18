/*
 * XREFs of KeTestSpinLock @ 0x14041D2F0
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x14041D264 (EtwpLockUnlockBufferList.c)
 *     HalpDmaMarkHiberAdapter @ 0x1404D0ECC (HalpDmaMarkHiberAdapter.c)
 *     KiDecodeMcaFault @ 0x140505970 (KiDecodeMcaFault.c)
 *     BvgaAcquireLock @ 0x14058CCC0 (BvgaAcquireLock.c)
 *     EtwpBugCheckMultiPartCallback @ 0x140643FC0 (EtwpBugCheckMultiPartCallback.c)
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
