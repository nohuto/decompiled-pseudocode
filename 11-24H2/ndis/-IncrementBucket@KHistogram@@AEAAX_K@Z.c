/*
 * XREFs of ?IncrementBucket@KHistogram@@AEAAX_K@Z @ 0x140001B6C
 * Callers:
 *     ndisDmaAllocationHistogramAddEntry @ 0x140135300 (ndisDmaAllocationHistogramAddEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall KHistogram::IncrementBucket(KHistogram *this, __int64 a2)
{
  if ( (unsigned __int16)_InterlockedIncrement16((volatile signed __int16 *)this + a2 + 10) > 0xFF00u )
    _InterlockedDecrement16((volatile signed __int16 *)this + a2 + 10);
}
