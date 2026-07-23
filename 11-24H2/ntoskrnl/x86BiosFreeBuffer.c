/*
 * XREFs of x86BiosFreeBuffer @ 0x140543DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall x86BiosFreeBuffer(unsigned __int16 a1, unsigned __int16 a2)
{
  _mm_lfence();
  if ( x86BiosInitialized != 1 || x86BiosBufferAllocated != 1 || ((a2 + 16 * a1) & 0xFFFFF) != 0x20000 )
    return 3221225485LL;
  x86BiosBufferAllocated = 0;
  return 0LL;
}
