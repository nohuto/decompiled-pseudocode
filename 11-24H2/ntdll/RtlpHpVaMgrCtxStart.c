/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x18009B830
 * Callers:
 *     RtlHpHeapManagerStart @ 0x18009B698 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlCSparseBitmapStart @ 0x18009B6FC (RtlCSparseBitmapStart.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x18009B8F4 (RtlpHpVaMgrCtxAllocatorReference.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // kr00_8
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  int v11; // ebx
  _DWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+28h] [rbp-20h]

  _BitScanForward(&v6, 0x20u);
  *(_DWORD *)(a1 + 24) = v6;
  v7 = (a5 >> 20) + 1;
  if ( (a5 & 0xFFFFF) == 0 )
    v7 = a5 >> 20;
  v8 = v7;
  v9 = 8 * v7;
  if ( !is_mul_ok(v8, 8uLL) || !is_mul_ok(v9, 0x20uLL) )
    return 3221225621LL;
  result = RtlCSparseBitmapStart((PVOID *)(a1 + 32), (void *)(32 * v9), 32LL, 1);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
    v12[0] = -1;
    v13 = 0LL;
    v11 = 0;
    *(_DWORD *)(a1 + 2152) = 0x1000000;
    while ( v11 < 6 )
    {
      v12[1] = v11;
      result = RtlpHpVaMgrCtxAllocatorReference(a1, v12);
      if ( (int)result < 0 )
        return result;
      ++v11;
    }
    return 0LL;
  }
  return result;
}
