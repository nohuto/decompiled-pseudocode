/*
 * XREFs of RtlpHpVaMgrRangeCommit @ 0x18011B378
 * Callers:
 *     RtlpHpVaMgrCtxCommit @ 0x18011B2FC (RtlpHpVaMgrCtxCommit.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x18009CF20 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x18009E1B0 (RtlpHpVaMgrRangeCommitProcess.c)
 */

NTSTATUS __fastcall RtlpHpVaMgrRangeCommit(__int64 a1, _BYTE *a2, __m128i *a3, ULONG a4)
{
  _BYTE *i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // r8
  NTSTATUS result; // eax
  int v13; // [rsp+28h] [rbp-50h]
  __m128i v14; // [rsp+50h] [rbp-28h] BYREF

  for ( i = a2; (*i & 2) != 0; i -= 32 )
    ;
  v8 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7];
  if ( (unsigned int)v8 <= 0x100000 )
  {
    v9 = a3->m128i_i64[0];
    v10 = _mm_srli_si128(*a3, 8).m128i_u64[0];
    if ( (unsigned int)v8 < 0x10000 )
      v8 = 0x10000LL;
    v11 = a3->m128i_i64[0] & -(__int64)(unsigned int)v8;
    a3->m128i_i64[0] = v11;
    a3->m128i_i64[1] = (~(v8 - 1) & ((unsigned int)v8 + v10 + v9 - 1)) - v11;
    if ( (*i & 4) != 0 || (v14 = *a3, (unsigned int)RtlpHpVaMgrRangeCommitProcess(a1, &v14, 0) == 1) )
    {
      result = RtlpHpEnvAllocVA(
                 (PVOID *)a3,
                 &a3->m128i_u64[1],
                 0LL,
                 `RtlpHpMemoryTypeAllocFlags'::`2'::AllocFlags[((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7] | 0x1000,
                 a4,
                 v13,
                 (*(unsigned __int8 *)(a1 + 46) >> 1) & 7,
                 *(_QWORD *)(a1 + 32));
      if ( result < 0 )
        return result;
      if ( (*i & 4) == 0 )
      {
        v14 = *a3;
        RtlpHpVaMgrRangeCommitProcess(a1, &v14, 1);
      }
    }
  }
  return 0;
}
