/*
 * XREFs of RtlpCreateHeapEncoding @ 0x1405EB6F8
 * Callers:
 *     RtlpCreateHeap @ 0x1404D7334 (RtlpCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 */

__int64 __fastcall RtlpCreateHeapEncoding(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 120);
  if ( (result & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) = 16;
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) |= ExGenRandom(1);
    result = ExGenRandom(1);
    *(_DWORD *)(a1 + 140) = (unsigned __int16)result;
  }
  return result;
}
