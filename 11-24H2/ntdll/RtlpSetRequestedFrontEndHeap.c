/*
 * XREFs of RtlpSetRequestedFrontEndHeap @ 0x1800970B4
 * Callers:
 *     RtlSetHeapInformation @ 0x180096E70 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpIsProtectedHeap @ 0x180097164 (RtlpIsProtectedHeap.c)
 */

__int64 __fastcall RtlpSetRequestedFrontEndHeap(__int64 a1)
{
  char v2; // di
  unsigned int v3; // esi

  v2 = 0;
  v3 = 0;
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
  if ( (unsigned int)RtlpIsProtectedHeap(a1) )
  {
    v3 = -1073741811;
  }
  else
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v2 = 1;
    if ( !*(_BYTE *)(a1 + 419) )
    {
      *(_BYTE *)(a1 + 419) = 2;
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v2 = 0;
    }
  }
  if ( v2 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  return v3;
}
