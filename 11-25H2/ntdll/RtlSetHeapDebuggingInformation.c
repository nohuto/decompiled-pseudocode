/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x18000116C
 * Callers:
 *     RtlSetHeapInformation @ 0x1800024D0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlpIsProtectedHeap @ 0x1800027C4 (RtlpIsProtectedHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801441D0 (RtlpSetHeapDebuggingInformation.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection(&RtlpProcessHeapsLock);
      if ( (unsigned int)RtlpIsProtectedHeap(a1) )
        v6 = -1073741811;
      else
        v6 = RtlpSetHeapDebuggingInformation(v5, a2);
      RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
      return v6;
    }
  }
  else
  {
    dword_1801D604C = *(_DWORD *)(a2 + 12);
    xmmword_1801D6060 = *(_OWORD *)(a2 + 32);
    *((_QWORD *)&xmmword_1801D6050 + 1) = *(_QWORD *)(a2 + 24);
    LODWORD(xmmword_1801D6050) = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps(RtlpSetHeapDebuggingInformation, a2, 0LL);
    return 0LL;
  }
}
