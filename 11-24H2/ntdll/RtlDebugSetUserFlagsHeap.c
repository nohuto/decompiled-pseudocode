/*
 * XREFs of RtlDebugSetUserFlagsHeap @ 0x180108FCC
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x180109150 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180020320 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x1800203D0 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     RtlSetUserFlagsHeap @ 0x180109150 (RtlSetUserFlagsHeap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOLEAN __fastcall RtlDebugSetUserFlagsHeap(_QWORD *HeapHandle, int a2, char *a3, ULONG a4, ULONG UserFlagsSet)
{
  BOOLEAN v9; // di
  char v10; // r14
  ULONG v11; // esi
  unsigned __int64 v12; // rdx

  v9 = 0;
  v10 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(_QWORD *))qword_1801CB600)(HeapHandle);
  if ( ((UserFlagsSet | a4) & 0xFFFFF1FF) != 0 )
    return 0;
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlSetUserFlagsHeap") )
  {
    v11 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)HeapHandle[44]);
      v10 = 1;
      v11 |= 1u;
    }
    RtlpValidateHeap(HeapHandle, 0);
    v12 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
    if ( RtlpValidateHeapEntry((unsigned __int64)HeapHandle, v12, "RtlSetUserFlagsHeap") )
    {
      v9 = RtlSetUserFlagsHeap(HeapHandle, v11, a3, a4, UserFlagsSet);
      RtlpValidateHeap(HeapHandle, 0);
    }
  }
  if ( v10 )
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)HeapHandle[44]);
  return v9;
}
