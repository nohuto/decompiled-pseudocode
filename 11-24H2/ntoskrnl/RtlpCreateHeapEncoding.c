/*
 * XREFs of RtlpCreateHeapEncoding @ 0x1405E8C68
 * Callers:
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 */

__int64 __fastcall RtlpCreateHeapEncoding(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  result = *(unsigned int *)(a1 + 120);
  if ( (result & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) = 16;
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) |= ExGenRandom(1, a2, a3, a4);
    result = ExGenRandom(1, v6, v7, v8);
    *(_DWORD *)(a1 + 140) = (unsigned __int16)result;
  }
  return result;
}
