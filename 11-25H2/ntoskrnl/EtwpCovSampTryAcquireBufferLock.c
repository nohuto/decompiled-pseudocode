/*
 * XREFs of EtwpCovSampTryAcquireBufferLock @ 0x140457A74
 * Callers:
 *     EtwpCovSampSampleBufferReserve @ 0x14043E7E0 (EtwpCovSampSampleBufferReserve.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1404BCA64 (EtwpCovSampCaptureFlushSampleBuffers.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140464068 (KxTryToAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall EtwpCovSampTryAcquireBufferLock(PKSPIN_LOCK SpinLock, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al
  __int64 v5; // rcx

  CurrentIrql = KeGetCurrentIrql();
  *a2 = CurrentIrql;
  if ( !CurrentIrql || CurrentIrql == 1 )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v5);
    goto LABEL_4;
  }
  if ( CurrentIrql == 2 )
  {
LABEL_4:
    KxAcquireSpinLock(SpinLock);
    return 1LL;
  }
  return (unsigned __int8)KxTryToAcquireSpinLock(SpinLock);
}
