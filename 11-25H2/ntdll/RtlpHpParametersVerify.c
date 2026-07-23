/*
 * XREFs of RtlpHpParametersVerify @ 0x18010D058
 * Callers:
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 * Callees:
 *     RtlCompareMemoryUlong @ 0x180167520 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall RtlpHpParametersVerify(__int64 a1)
{
  int v2; // ebx
  bool v3; // zf
  bool v5; // zf

  v2 = *(_DWORD *)(a1 + 12);
  if ( *(_WORD *)a1 == 3
    && *(_WORD *)(a1 + 2) == 80
    && (*(_DWORD *)(a1 + 4) & 0xFFFFFFFC) == 0
    && RtlCompareMemoryUlong((PVOID)(a1 + 48), 0x20uLL, 0) == 32 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      v5 = RtlCompareMemoryUlong((PVOID)(a1 + 8), 0x28uLL, 0) == 40;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8)
        || (unsigned int)(v2 - 1) > 0x3E
        || (v2 & 2) != 0
        || *(_DWORD *)(a1 + 16) != -1
        || RtlCompareMemoryUlong((PVOID)(a1 + 32), 0x10uLL, 0) != 16 )
      {
        return 0LL;
      }
      v3 = *(_QWORD *)(a1 + 24) ? (v2 & 0xFFFFFFC3) == 0 : (v2 & 0x20) == 0;
      if ( !v3 || (v2 & 0x18) == 0x10 || (v2 & 4) != 0 && (v2 & 0x18) != 0 )
        return 0LL;
      if ( (v2 & 0x3C) == 0 )
        return 1LL;
      v5 = (v2 & 0xFFFFFFC3) == 0;
    }
    if ( v5 )
      return 1LL;
  }
  return 0LL;
}
