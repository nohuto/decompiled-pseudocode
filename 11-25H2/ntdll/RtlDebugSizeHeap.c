/*
 * XREFs of RtlDebugSizeHeap @ 0x180093080
 * Callers:
 *     RtlSizeHeap @ 0x1800940C0 (RtlSizeHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x1800933E0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x180093490 (RtlpValidateHeapEntry.c)
 *     RtlSizeHeap @ 0x1800940C0 (RtlSizeHeap.c)
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugSizeHeap(__int64 a1, int a2, __int64 a3)
{
  char v6; // r14
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rdx

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(__int64))qword_1801CE610)(a1);
  v7 = -1LL;
  if ( (unsigned __int8)RtlpCheckHeapSignature(a1, "RtlSizeHeap") )
  {
    v8 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v8 |= 1u;
      v6 = 1;
    }
    RtlpValidateHeap(a1, 0LL);
    v9 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    if ( (unsigned __int8)RtlpValidateHeapEntry(a1, v9, "RtlSizeHeap") )
      v7 = RtlSizeHeap(a1, v8, a3);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v7;
}
