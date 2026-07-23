/*
 * XREFs of x86BiosAllocateBuffer @ 0x140543CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall x86BiosAllocateBuffer(int *a1, _WORD *a2, _WORD *a3)
{
  int v3; // eax
  __int64 result; // rax

  _mm_lfence();
  if ( x86BiosInitialized != 1 )
    return 3221225626LL;
  if ( x86BiosBufferAllocated )
    return 3221225626LL;
  v3 = x86BiosTransferLength;
  if ( *a1 > (unsigned int)x86BiosTransferLength )
    return 3221225626LL;
  *a2 = 0x2000;
  *a3 = 0;
  *a1 = v3;
  result = 0LL;
  x86BiosBufferAllocated = 1;
  return result;
}
