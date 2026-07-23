/*
 * XREFs of PfpUpdateRepurposedByPrefetch @ 0x140938C78
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140936598 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchPrivatePages @ 0x140936C3C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchDirectoryStream @ 0x140936ED4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x140938928 (PfpPrefetchFilesTrickle.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1402623FC (MmQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_OWORD *__fastcall PfpUpdateRepurposedByPrefetch(_OWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // r9
  __m128i v5; // xmm1
  const __m128i *v6; // rax
  __int64 v7; // rcx
  __m128i v8; // xmm0
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // xmm1_8
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  _OWORD *result; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _OWORD *v22; // rbx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v26[6]; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v27[5]; // [rsp+A0h] [rbp-68h] BYREF

  memset_0(v26, 0, 0xB0uLL);
  LODWORD(v25) = 0;
  MmQueryMemoryListInformation((ULONG **)0xFFFFFFFFFFFFFFFFLL, v26, 0xB0u, v4, &v25);
  v5 = 0LL;
  v6 = (const __m128i *)((char *)v27 + 8);
  v7 = 4LL;
  do
  {
    v8 = _mm_loadu_si128(v6++);
    v5 = _mm_add_epi64(v5, v8);
    --v7;
  }
  while ( v7 );
  v9 = (_QWORD *)a1 + 13;
  v10 = 0LL;
  v11 = _mm_add_epi64(v5, _mm_srli_si128(v5, 8)).m128i_u64[0];
  v12 = 8LL;
  do
  {
    v10 += *v9++;
    --v12;
  }
  while ( v12 );
  v13 = v11 - v10;
  if ( v11 - v10 > a2 )
    v13 = a2;
  if ( v13 )
    _InterlockedAdd64(&qword_140E67120, v13);
  result = v26;
  v15 = v26[1];
  *a1 = v26[0];
  v16 = v26[2];
  a1[1] = v15;
  v17 = v26[3];
  a1[2] = v16;
  v18 = v26[4];
  a1[3] = v17;
  v19 = v26[5];
  a1[4] = v18;
  v20 = v27[0];
  a1[5] = v19;
  v21 = v27[2];
  a1[6] = v20;
  v22 = a1 + 8;
  *(v22 - 1) = v27[1];
  v23 = v27[3];
  *v22 = v21;
  v24 = v27[4];
  v22[1] = v23;
  v22[2] = v24;
  return result;
}
