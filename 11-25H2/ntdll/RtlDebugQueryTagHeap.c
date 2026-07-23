/*
 * XREFs of RtlDebugQueryTagHeap @ 0x180146088
 * Callers:
 *     RtlQueryTagHeap @ 0x1801431D0 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x1800933E0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 *     RtlQueryTagHeap @ 0x1801431D0 (RtlQueryTagHeap.c)
 */

PWSTR __fastcall RtlDebugQueryTagHeap(__int64 a1, int a2, USHORT a3, BOOLEAN a4, PRTL_HEAP_TAG_INFO TagInfo)
{
  char v9; // si
  PWSTR TagHeap; // r14
  ULONG v11; // ebx

  v9 = 0;
  TagHeap = 0LL;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlQueryTagHeap") )
  {
    v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v9 = 1;
      v11 |= 1u;
    }
    if ( RtlpValidateHeap(a1, 0) )
      TagHeap = RtlQueryTagHeap((PVOID)a1, v11, a3, a4, TagInfo);
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return TagHeap;
}
