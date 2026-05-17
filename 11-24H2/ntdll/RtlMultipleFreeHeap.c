/*
 * XREFs of RtlMultipleFreeHeap @ 0x180141A70
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlMultipleFreeHeap(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    if ( !(unsigned int)RtlFreeHeap(a1, a2, *(_QWORD *)(a4 + 8 * i)) )
      return (unsigned int)i;
  }
  return a3;
}
