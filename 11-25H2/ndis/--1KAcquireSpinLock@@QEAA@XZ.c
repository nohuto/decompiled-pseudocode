/*
 * XREFs of ??1KAcquireSpinLock@@QEAA@XZ @ 0x140069420
 * Callers:
 *     TrackNblContextVerifierFailure @ 0x1400AAB20 (TrackNblContextVerifierFailure.c)
 *     NdisFreeNetBufferPool @ 0x1400CDDD0 (NdisFreeNetBufferPool.c)
 * Callees:
 *     <none>
 */

void __fastcall KAcquireSpinLock::~KAcquireSpinLock(KAcquireSpinLock *this)
{
  if ( this->m_oldIrql != 0xFF )
  {
    KeReleaseSpinLock(&this->m_lock->m_lock, this->m_oldIrql);
    this->m_oldIrql = -1;
  }
}
