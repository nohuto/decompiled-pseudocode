/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x180095C6C
 * Callers:
 *     RtlSetHeapInformation @ 0x180096E70 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x1800469B0 (RtlpEnumProcessHeaps.c)
 *     RtlpIsProtectedHeap @ 0x180097164 (RtlpIsProtectedHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x180142AE0 (RtlpSetHeapDebuggingInformation.c)
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
      RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
      if ( (unsigned int)RtlpIsProtectedHeap(a1) )
        v6 = -1073741811;
      else
        v6 = RtlpSetHeapDebuggingInformation(v5, a2);
      RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
      return v6;
    }
  }
  else
  {
    dword_1801D3FEC = *(_DWORD *)(a2 + 12);
    xmmword_1801D4000 = *(_OWORD *)(a2 + 32);
    *((_QWORD *)&xmmword_1801D3FF0 + 1) = *(_QWORD *)(a2 + 24);
    LODWORD(xmmword_1801D3FF0) = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
