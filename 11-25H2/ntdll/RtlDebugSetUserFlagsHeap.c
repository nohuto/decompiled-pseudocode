/*
 * XREFs of RtlDebugSetUserFlagsHeap @ 0x180110BBC
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x180110D40 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x1800933E0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x180093490 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 *     RtlSetUserFlagsHeap @ 0x180110D40 (RtlSetUserFlagsHeap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlDebugSetUserFlagsHeap(unsigned __int64 a1, int a2, __int64 a3, int a4, int a5)
{
  char v9; // di
  char v10; // r14
  int v11; // esi
  unsigned __int64 v12; // rdx

  v9 = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_1801CE600)(a1);
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    return 0;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSetUserFlagsHeap") )
  {
    v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v10 = 1;
      v11 |= 1u;
    }
    RtlpValidateHeap(a1, 0);
    v12 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
    if ( RtlpValidateHeapEntry(a1, v12, "RtlSetUserFlagsHeap") )
    {
      v9 = RtlSetUserFlagsHeap(a1, v11, a3, a4, a5);
      RtlpValidateHeap(a1, 0);
    }
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v9;
}
