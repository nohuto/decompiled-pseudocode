/*
 * XREFs of RtlDebugCompactHeap @ 0x18011EBF8
 * Callers:
 *     RtlCompactHeap @ 0x180043EC0 (RtlCompactHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003F9F0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180040D80 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800413BC (RtlpValidateHeapHeaders.c)
 *     RtlCompactHeap @ 0x180043EC0 (RtlCompactHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugCompactHeap(_QWORD *Src, int a2)
{
  char v4; // si
  __int64 v6; // rbx
  int v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(_QWORD *))qword_1801CC618)(Src);
  if ( RtlpCheckHeapSignature(Src, "RtlCompactHeap") )
  {
    v7 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(Src[44]);
      v4 = 1;
      v7 |= 1u;
    }
    RtlpValidateHeap((__int64)Src, 0);
    v6 = RtlCompactHeap((char *)Src, v7);
    RtlpValidateHeapHeaders(Src, 1);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(Src[44]);
  return v6;
}
