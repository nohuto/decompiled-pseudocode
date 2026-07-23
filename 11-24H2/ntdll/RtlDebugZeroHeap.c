/*
 * XREFs of RtlDebugZeroHeap @ 0x180142FC4
 * Callers:
 *     RtlZeroHeap @ 0x180142320 (RtlZeroHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180020320 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     RtlZeroHeap @ 0x180142320 (RtlZeroHeap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugZeroHeap(_QWORD *HeapHandle, int a2)
{
  char v4; // si
  ULONG v6; // ebx
  unsigned __int32 v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(_QWORD *))qword_1801CB620)(HeapHandle);
  if ( !RtlpCheckHeapSignature(HeapHandle, "RtlZeroHeap") )
    goto LABEL_7;
  v6 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)HeapHandle[44]);
    v4 = 1;
    v6 |= 1u;
  }
  if ( RtlpValidateHeap(HeapHandle, 0) )
    v7 = RtlZeroHeap(HeapHandle, v6);
  else
LABEL_7:
    v7 = -1073741811;
  if ( v4 )
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)HeapHandle[44]);
  return v7;
}
