/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x14060319C
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x140658BE8 (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140602F30 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapStart @ 0x140604674 (RtlCSparseBitmapStart.c)
 */

int __fastcall RtlpHpVaMgrCtxStart(__int64 a1)
{
  unsigned int v2; // eax
  int result; // eax
  unsigned int v4; // r9d
  int v5; // ebx
  _DWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  ULONGLONG pullResult; // [rsp+68h] [rbp+20h] BYREF

  pullResult = 0LL;
  _BitScanForward(&v2, 0x20u);
  *(_DWORD *)(a1 + 24) = v2;
  result = RtlULongLongMult(0x8000000uLL, 8uLL, &pullResult);
  if ( result >= 0 )
  {
    result = RtlULongLongMult(pullResult, v4, &pullResult);
    if ( result >= 0 )
    {
      result = RtlCSparseBitmapStart((int)a1 + 32);
      if ( result >= 0 )
      {
        v6[0] = -1;
        *(_QWORD *)(a1 + 8) = 0xFFFF800000000000uLL;
        v7 = 0LL;
        v5 = 0;
        *(_DWORD *)a1 = 1;
        *(_DWORD *)(a1 + 2152) = 0x1000000;
        while ( v5 < 6 )
        {
          v6[1] = v5;
          result = RtlpHpVaMgrCtxAllocatorReference((int *)a1, (__int64)v6);
          if ( result < 0 )
            return result;
          ++v5;
        }
        return 0;
      }
    }
  }
  return result;
}
