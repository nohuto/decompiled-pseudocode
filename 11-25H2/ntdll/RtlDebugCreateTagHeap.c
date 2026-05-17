/*
 * XREFs of RtlDebugCreateTagHeap @ 0x180145F94
 * Callers:
 *     RtlCreateTagHeap @ 0x1800341B0 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlCreateTagHeap @ 0x1800341B0 (RtlCreateTagHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x1800933E0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180094DAC (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCreateTagHeap(_DWORD *Src, int a2, __int64 a3, _WORD *a4)
{
  char v8; // si
  unsigned int TagHeap; // r14d
  int v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(Src, "RtlCreateTagHeap") )
  {
    v10 = Src[29] | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v8 = 1;
      v10 |= 1u;
    }
    if ( RtlpValidateHeap((__int64)Src, 0) )
      TagHeap = RtlCreateTagHeap(Src, v10, a3, a4);
    RtlpValidateHeapHeaders(Src, 1);
  }
  if ( v8 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return TagHeap;
}
