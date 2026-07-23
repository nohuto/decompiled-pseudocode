/*
 * XREFs of RtlDebugQueryTagHeap @ 0x180142EC8
 * Callers:
 *     RtlQueryTagHeap @ 0x18013FCC0 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180020320 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     RtlQueryTagHeap @ 0x18013FCC0 (RtlQueryTagHeap.c)
 */

PWSTR __fastcall RtlDebugQueryTagHeap(_QWORD *HeapHandle, int a2, USHORT a3, BOOLEAN a4, PRTL_HEAP_TAG_INFO TagInfo)
{
  char v9; // si
  PWSTR TagHeap; // r14
  ULONG v11; // ebx

  v9 = 0;
  TagHeap = 0LL;
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlQueryTagHeap") )
  {
    v11 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)HeapHandle[44]);
      v9 = 1;
      v11 |= 1u;
    }
    if ( RtlpValidateHeap(HeapHandle, 0) )
      TagHeap = RtlQueryTagHeap(HeapHandle, v11, a3, a4, TagInfo);
  }
  if ( v9 )
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)HeapHandle[44]);
  return TagHeap;
}
