/*
 * XREFs of RtlDebugSizeHeap @ 0x18001FFC0
 * Callers:
 *     RtlSizeHeap @ 0x180021000 (RtlSizeHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180020320 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x1800203D0 (RtlpValidateHeapEntry.c)
 *     RtlSizeHeap @ 0x180021000 (RtlSizeHeap.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

SIZE_T __fastcall RtlDebugSizeHeap(PVOID HeapHandle, int a2, char *a3)
{
  char v6; // r14
  SIZE_T v7; // rdi
  ULONG v8; // esi
  char *v9; // rdx

  v6 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PVOID))qword_1801CB610)(HeapHandle);
  v7 = -1LL;
  if ( (unsigned __int8)RtlpCheckHeapSignature(HeapHandle, "RtlSizeHeap") )
  {
    v8 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v8 |= 1u;
      v6 = 1;
    }
    RtlpValidateHeap(HeapHandle);
    v9 = a3 - 16;
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v9 -= 16 * (unsigned __int8)v9[14];
    if ( (unsigned __int8)RtlpValidateHeapEntry(HeapHandle, v9, "RtlSizeHeap") )
      v7 = RtlSizeHeap(HeapHandle, v8, a3);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return v7;
}
