/*
 * XREFs of RtlpHpVaMgrRangeCommit @ 0x140603268
 * Callers:
 *     RtlpHpVaMgrCtxCommit @ 0x1406030B4 (RtlpHpVaMgrCtxCommit.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x14034C090 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x1404892C4 (RtlpHpVaMgrRangeCommitProcess.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeCommit(__int64 a1, _BYTE *a2, __m128i *a3, int a4)
{
  _BYTE *i; // rbx
  unsigned int v8; // ecx
  __m128i v9; // xmm0
  __int64 v10; // r8
  __int64 result; // rax
  ULONG_PTR v12; // [rsp+20h] [rbp-58h]
  int v13; // [rsp+28h] [rbp-50h]
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]
  __m128i v15; // [rsp+50h] [rbp-28h] BYREF

  for ( i = a2; (*i & 2) != 0; i -= 32 )
    ;
  v8 = `RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7];
  if ( v8 <= 0x100000 )
  {
    v9 = *a3;
    if ( v8 < 0x10000 )
      v8 = 0x10000;
    v10 = v9.m128i_i64[0] & -(__int64)v8;
    a3->m128i_i64[0] = v10;
    a3->m128i_i64[1] = (~(v8 - 1LL) & (v8 + v9.m128i_i64[0] + _mm_srli_si128(v9, 8).m128i_u64[0] - 1)) - v10;
    if ( (*i & 4) != 0 || (v15 = *a3, (unsigned int)RtlpHpVaMgrRangeCommitProcess(a1, &v15, 0) == 1) )
    {
      LODWORD(v12) = a4;
      result = RtlpHpEnvAllocVA(
                 (ULONG_PTR *)a3,
                 &a3->m128i_i64[1],
                 0LL,
                 `RtlpHpMemoryTypeAllocFlags'::`2'::AllocFlags[((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7] | 0x1000u,
                 v12,
                 v13,
                 (*(unsigned __int8 *)(a1 + 46) >> 1) & 7,
                 v14,
                 *(unsigned __int8 *)(a1 + 45));
      if ( (int)result < 0 )
        return result;
      if ( (*i & 4) == 0 )
      {
        v15 = *a3;
        RtlpHpVaMgrRangeCommitProcess(a1, &v15, 1);
      }
    }
  }
  return 0LL;
}
