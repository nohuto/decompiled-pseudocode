/*
 * XREFs of RtlpHpVaMgrRangeDecommit @ 0x180159624
 * Callers:
 *     RtlpHpVaMgrCtxDecommit @ 0x1801595B8 (RtlpHpVaMgrCtxDecommit.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x1800BBEA0 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x1800BC9A0 (RtlpHpVaMgrRangeCommitProcess.c)
 */

int __fastcall RtlpHpVaMgrRangeDecommit(__int64 a1, _BYTE *a2, __m128i *a3)
{
  _BYTE *i; // r10
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // xmm0_8
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __m128i v13; // [rsp+30h] [rbp-18h] BYREF

  for ( i = a2; (*i & 2) != 0; i -= 32 )
    ;
  v6 = ((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7;
  v7 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[v6];
  if ( (unsigned int)v7 <= 0x100000 )
  {
    v8 = _mm_srli_si128(*a3, 8).m128i_u64[0];
    if ( (unsigned int)v7 < 0x10000 )
      v7 = 0x10000LL;
    v9 = ~(v7 - 1);
    v10 = v9 & (v7 + a3->m128i_i64[0] - 1);
    v11 = v9 & (v8 + a3->m128i_i64[0]);
    a3->m128i_i64[0] = v10;
    LODWORD(v6) = v11 - v10;
    a3->m128i_i64[1] = (v11 - v10) & -(__int64)(v10 < v11);
    if ( ((v11 - v10) & -(__int64)(v10 < v11)) != 0 )
    {
      if ( (*i & 4) != 0 || (v13 = *a3, LODWORD(v6) = RtlpHpVaMgrRangeCommitProcess(a1, &v13, 2), (_DWORD)v6 == 2) )
        LODWORD(v6) = RtlpHpEnvFreeVA(
                        (PVOID *)a3,
                        &a3->m128i_u64[1],
                        0x4000,
                        (*(unsigned __int8 *)(a1 + 46) >> 1) & 7,
                        *(_QWORD *)(a1 + 32));
    }
  }
  return v6;
}
