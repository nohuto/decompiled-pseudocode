/*
 * XREFs of RtlDebugSetUserValueHeap @ 0x18010C554
 * Callers:
 *     RtlSetUserValueHeap @ 0x18001FB40 (RtlSetUserValueHeap.c)
 * Callees:
 *     RtlSetUserValueHeap @ 0x18001FB40 (RtlSetUserValueHeap.c)
 *     RtlpCheckHeapSignature @ 0x180020320 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x1800203D0 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOLEAN __fastcall RtlDebugSetUserValueHeap(_QWORD *HeapHandle, int a2, char *a3, void *a4)
{
  BOOLEAN v8; // di
  char v9; // r14
  ULONG v10; // esi
  unsigned __int64 v11; // rdx

  v8 = 0;
  v9 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801CB5F0)();
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlSetUserValueHeap") )
  {
    v10 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)HeapHandle[44]);
      v9 = 1;
      v10 |= 1u;
    }
    RtlpValidateHeap(HeapHandle, 0);
    v11 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
    if ( RtlpValidateHeapEntry((unsigned __int64)HeapHandle, v11, "RtlSetUserValueHeap") )
    {
      v8 = RtlSetUserValueHeap(HeapHandle, v10, a3, a4);
      RtlpValidateHeap(HeapHandle, 0);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v9 )
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)HeapHandle[44]);
  return v8;
}
