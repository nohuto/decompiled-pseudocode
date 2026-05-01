/*
 * XREFs of AslGuidToString_UStr @ 0x18009DF5C
 * Callers:
 *     SdbResolveDatabaseEx @ 0x180095BCC (SdbResolveDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     RtlStringCchPrintfW @ 0x180091BA4 (RtlStringCchPrintfW.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 */

__int64 __fastcall AslGuidToString_UStr(__int64 a1, unsigned int *a2)
{
  _WORD *Heap; // r14
  int v5; // ebx

  *(_DWORD *)a1 = 5111884;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x4EuLL);
  if ( Heap )
  {
    v5 = RtlStringCchPrintfW(
           Heap,
           (unsigned __int64)*(unsigned __int16 *)(a1 + 2) >> 1,
           (__int64)L"{%08lx-%04hx-%04hx-%02hx%02hx-%02hx%02hx%02hx%02hx%02hx%02hx}",
           *a2,
           *((unsigned __int16 *)a2 + 2),
           *((unsigned __int16 *)a2 + 3),
           *((unsigned __int8 *)a2 + 8),
           *((unsigned __int8 *)a2 + 9),
           *((unsigned __int8 *)a2 + 10),
           *((unsigned __int8 *)a2 + 11),
           *((unsigned __int8 *)a2 + 12),
           *((unsigned __int8 *)a2 + 13),
           *((unsigned __int8 *)a2 + 14),
           *((unsigned __int8 *)a2 + 15));
    if ( v5 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = Heap;
      Heap = 0LL;
      v5 = 0;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
    v5 = -1073741801;
  }
  AslFree(NtCurrentPeb()->ProcessHeap, Heap);
  return (unsigned int)v5;
}
