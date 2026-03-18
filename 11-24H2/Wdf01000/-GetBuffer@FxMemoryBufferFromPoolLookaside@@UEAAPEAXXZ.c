/*
 * XREFs of ?GetBuffer@FxMemoryBufferFromPoolLookaside@@UEAAPEAXXZ @ 0x14006B680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall FxMemoryBufferFromPoolLookaside::GetBuffer(FxMemoryBufferFromPoolLookaside *this)
{
  return *(void **)&this->m_ObjectFlags;
}
