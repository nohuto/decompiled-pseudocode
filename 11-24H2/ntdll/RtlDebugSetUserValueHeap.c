/*
 * XREFs of RtlDebugSetUserValueHeap @ 0x1800428AC
 * Callers:
 *     RtlSetUserValueHeap @ 0x18009BF90 (RtlSetUserValueHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003F9F0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x18003FAA0 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180040D80 (RtlpValidateHeap.c)
 *     RtlSetUserValueHeap @ 0x18009BF90 (RtlSetUserValueHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlDebugSetUserValueHeap(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v8; // di
  char v9; // r14
  unsigned int v10; // esi
  unsigned __int64 v11; // rdx

  v8 = 0;
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801CC5F0)();
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSetUserValueHeap") )
  {
    v10 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 = 1;
      v10 |= 1u;
    }
    RtlpValidateHeap(a1, 0);
    v11 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
    if ( RtlpValidateHeapEntry(a1, v11, "RtlSetUserValueHeap") )
    {
      v8 = RtlSetUserValueHeap(a1, v10, a3, a4);
      RtlpValidateHeap(a1, 0);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v8;
}
