/*
 * XREFs of RtlMultipleFreeHeap @ 0x180143160
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlMultipleFreeHeap(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    if ( !(unsigned int)RtlFreeHeap(a1, a2, *(_QWORD *)(a4 + 8 * i), a4) )
      return (unsigned int)i;
  }
  return a3;
}
