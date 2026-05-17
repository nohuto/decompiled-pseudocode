/*
 * XREFs of RtlDebugCreateTagHeap @ 0x180144A24
 * Callers:
 *     RtlCreateTagHeap @ 0x1800A5370 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003F9F0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180040D80 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800413BC (RtlpValidateHeapHeaders.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlCreateTagHeap @ 0x1800A5370 (RtlCreateTagHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCreateTagHeap(_QWORD *Src, int a2, __int64 a3, _WORD *a4)
{
  char v8; // si
  unsigned int TagHeap; // r14d
  int v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(Src, "RtlCreateTagHeap") )
  {
    v10 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(Src[44]);
      v8 = 1;
      v10 |= 1u;
    }
    if ( RtlpValidateHeap((__int64)Src, 0) )
      TagHeap = RtlCreateTagHeap(Src, v10, a3, a4);
    RtlpValidateHeapHeaders(Src, 1);
  }
  if ( v8 )
    RtlLeaveCriticalSection(Src[44]);
  return TagHeap;
}
