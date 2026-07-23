/*
 * XREFs of RtlpHpVaMgrRangeDecommit @ 0x1406033B0
 * Callers:
 *     RtlpHpVaMgrCtxDecommit @ 0x140603130 (RtlpHpVaMgrCtxDecommit.c)
 * Callees:
 *     MmFreePoolMemory @ 0x14020C540 (MmFreePoolMemory.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x1404892C4 (RtlpHpVaMgrRangeCommitProcess.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeDecommit(__int64 a1, _BYTE *a2, ULONG_PTR *a3)
{
  _BYTE *i; // r10
  __int64 result; // rax
  __int64 v7; // rcx
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // xmm0_8
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  __m128i v16; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a2; (*i & 2) != 0; i -= 32 )
    ;
  result = ((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7;
  v7 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[result];
  if ( (unsigned int)v7 <= 0x100000 )
  {
    v8 = *(__m128i *)a3;
    if ( (unsigned int)v7 < 0x10000 )
      v7 = 0x10000LL;
    v9 = (unsigned int)v7;
    v10 = v7 - 1;
    v11 = v8.m128i_i64[0];
    v12 = ~v10;
    v13 = _mm_srli_si128(v8, 8).m128i_u64[0];
    v14 = v12 & (v9 + v11 - 1);
    result = (v12 & (v11 + v13)) - v14;
    *a3 = v14;
    v15 = result & -(__int64)(v14 < (v12 & (v11 + v13)));
    a3[1] = v15;
    if ( v15 )
    {
      if ( (*i & 4) != 0 )
        return MmFreePoolMemory(a3, a3 + 1);
      v16 = *(__m128i *)a3;
      result = RtlpHpVaMgrRangeCommitProcess(a1, &v16, 2);
      if ( (_DWORD)result == 2 )
        return MmFreePoolMemory(a3, a3 + 1);
    }
  }
  return result;
}
