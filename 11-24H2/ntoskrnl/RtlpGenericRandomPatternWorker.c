/*
 * XREFs of RtlpGenericRandomPatternWorker @ 0x1403EC730
 * Callers:
 *     RtlScrubMemory @ 0x1403EBF40 (RtlScrubMemory.c)
 * Callees:
 *     RtlpSeedGlfsr @ 0x1403ECAD0 (RtlpSeedGlfsr.c)
 */

char __fastcall RtlpGenericRandomPatternWorker(unsigned __int64 *a1)
{
  __int64 v2; // rsi
  __int64 *v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 *v5; // rdx
  unsigned __int64 *v6; // r10
  unsigned __int64 i; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 CFlushSize; // r9
  char *j; // r8
  unsigned __int64 *v11; // r9
  unsigned __int64 v12; // rcx
  struct _KPRCB *v14; // rcx
  __int64 v15; // r9
  char *k; // r8
  unsigned __int64 *v17; // r10
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // r10
  unsigned __int64 m; // r9
  struct _KPRCB *v21; // rcx
  __int64 v22; // r9
  char *n; // r8
  unsigned __int64 *v24; // r10
  unsigned __int64 ii; // r9
  struct _KPRCB *v26; // rcx
  __int64 v27; // r9
  char *jj; // r8
  unsigned __int64 *v29; // r10
  unsigned __int64 v30; // rcx
  unsigned __int64 *v31; // r10
  unsigned __int64 v32; // r9
  struct _KPRCB *v33; // rcx
  __int64 v34; // r9
  char *kk; // r8
  unsigned __int64 *v36; // r10
  unsigned __int64 v37; // r9
  struct _KPRCB *v38; // rcx
  __int64 v39; // r9
  char *mm; // r8
  signed __int32 v41[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0LL;
LABEL_2:
  if ( (unsigned int)v2 >= 5 )
    return 1;
  v3 = GlfsrXorLookupTables[v2];
  v4 = RtlpSeedGlfsr();
  v5 = a1 + 512;
  v6 = a1;
  for ( i = v4; v6 < v5; i = v3[i & 0xF] ^ (i >> 4) )
    *v6++ = i;
  CurrentPrcb = KeGetCurrentPrcb();
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( j = (char *)((unsigned __int64)a1 & ~(CFlushSize - 1)); j < (char *)v5; j += CFlushSize )
      _mm_clflush(j);
  }
  v11 = a1;
  v12 = v4;
  while ( v11 < v5 )
  {
    if ( *(_DWORD *)v11 != (_DWORD)v12 )
      return 0;
    *(_DWORD *)v11 = v12;
    if ( *((_DWORD *)v11 + 1) != HIDWORD(v12) )
      return 0;
    *((_DWORD *)v11++ + 1) = HIDWORD(v12);
    v12 = v3[v12 & 0xF] ^ (v12 >> 4);
  }
  v14 = KeGetCurrentPrcb();
  v15 = v14->CFlushSize;
  if ( v14->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( k = (char *)((unsigned __int64)a1 & ~(v15 - 1)); k < (char *)v5; k += v15 )
      _mm_clflush(k);
  }
  v17 = a1;
  v18 = v4;
  while ( v17 < v5 )
  {
    if ( *v17 != v18 )
      return 0;
    ++v17;
    v18 = v3[v18 & 0xF] ^ (v18 >> 4);
  }
  v19 = a1;
  for ( m = v4; v19 < v5; m = v3[m & 0xF] ^ (m >> 4) )
    *v19++ = ~m;
  v21 = KeGetCurrentPrcb();
  v22 = v21->CFlushSize;
  if ( v21->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( n = (char *)((unsigned __int64)a1 & ~(v22 - 1)); n < (char *)v5; n += v22 )
      _mm_clflush(n);
  }
  v24 = a1;
  for ( ii = v4; v24 < v5; ii = v3[ii & 0xF] ^ (ii >> 4) )
    *v24++ = ii;
  v26 = KeGetCurrentPrcb();
  v27 = v26->CFlushSize;
  if ( v26->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( jj = (char *)((unsigned __int64)a1 & ~(v27 - 1)); jj < (char *)v5; jj += v27 )
      _mm_clflush(jj);
  }
  v29 = a1;
  v30 = v4;
  while ( v29 < v5 )
  {
    if ( *v29 != v30 )
      return 0;
    ++v29;
    v30 = v3[v30 & 0xF] ^ (v30 >> 4);
  }
  v31 = a1 + 512;
  v32 = v4;
  do
  {
    *--v31 = ~v32;
    v32 = v3[v32 & 0xF] ^ (v32 >> 4);
  }
  while ( v31 != a1 );
  v33 = KeGetCurrentPrcb();
  v34 = v33->CFlushSize;
  if ( v33->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( kk = (char *)((unsigned __int64)a1 & ~(v34 - 1)); kk < (char *)v5; kk += v34 )
      _mm_clflush(kk);
  }
  v36 = a1 + 512;
  v37 = v4;
  do
  {
    *--v36 = v37;
    v37 = v3[v37 & 0xF] ^ (v37 >> 4);
  }
  while ( v36 != a1 );
  v38 = KeGetCurrentPrcb();
  v39 = v38->CFlushSize;
  if ( v38->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( mm = (char *)((unsigned __int64)a1 & ~(v39 - 1)); mm < (char *)v5; mm += v39 )
      _mm_clflush(mm);
  }
  while ( *((_DWORD *)v5 - 1) == HIDWORD(v4) )
  {
    if ( *(_DWORD *)--v5 != (_DWORD)v4 )
      break;
    v4 = v3[v4 & 0xF] ^ (v4 >> 4);
    if ( v5 == a1 )
    {
      v2 = (unsigned int)(v2 + 1);
      goto LABEL_2;
    }
  }
  return 0;
}
