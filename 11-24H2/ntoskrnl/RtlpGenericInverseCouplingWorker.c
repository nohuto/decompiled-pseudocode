/*
 * XREFs of RtlpGenericInverseCouplingWorker @ 0x1403EC188
 * Callers:
 *     RtlScrubMemory @ 0x1403EBF40 (RtlScrubMemory.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpGenericInverseCouplingWorker(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r10
  void *v6; // r11
  unsigned __int64 v7; // r9
  struct _KPRCB *CurrentPrcb; // rax
  char v9; // r9
  __int64 CFlushSize; // rdx
  char *i; // rcx
  char *v12; // rcx
  char *v13; // r11
  struct _KPRCB *v14; // rax
  __int64 v15; // rdx
  char *j; // rcx
  char *k; // rcx
  char *v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rbx
  struct _KPRCB *v22; // rax
  __int64 v23; // rdx
  char *m; // rcx
  void *v25; // rbx
  unsigned __int64 v26; // r11
  struct _KPRCB *v27; // rax
  __int64 v28; // rdx
  char *n; // rcx
  _DWORD *ii; // rcx
  void *v31; // r11
  struct _KPRCB *v32; // rax
  __int64 v33; // rdx
  char *jj; // rcx
  _DWORD *v35; // rax
  struct _KPRCB *v36; // rax
  __int64 v37; // rdx
  char *kk; // rcx
  _DWORD *v39; // rax
  signed __int32 v41[8]; // [rsp+0h] [rbp-20h] BYREF

  v3 = 1024LL;
  v4 = a2;
  v5 = a1;
  v6 = (void *)a3;
  v7 = 1024LL;
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)a3 = a1;
    v6 = (void *)(a3 + 4);
    v7 = 1023LL;
  }
  memset64(v6, a1 | ((unsigned __int64)a1 << 32), v7 >> 1);
  if ( (v7 & 1) != 0 )
    *((_DWORD *)v6 + v7 - 1) = a1;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( i = (char *)(a3 & ~(CFlushSize - 1)); (unsigned __int64)i < a3 + 4096; i += CFlushSize )
      _mm_clflush(i);
  }
  v12 = (char *)a3;
  v13 = (char *)(a3 + 4096);
  while ( v12 < v13 )
  {
    if ( *(_DWORD *)v12 != (_DWORD)v5 )
      return 0;
    *(_DWORD *)v12 = v5;
    v12 += 4;
  }
  v14 = KeGetCurrentPrcb();
  v15 = v14->CFlushSize;
  if ( v14->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( j = (char *)(a3 & ~(v15 - 1)); j < v13; j += v15 )
      _mm_clflush(j);
  }
  for ( k = (char *)a3; k < v13; k += 4 )
  {
    if ( *(_DWORD *)k != (_DWORD)v5 )
      return 0;
  }
  v18 = (char *)a3;
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)a3 = v5;
    v18 = (char *)(a3 + 4);
    v19 = 511LL;
    v20 = 1LL;
    v21 = 4088LL;
  }
  else
  {
    v19 = 512LL;
    v20 = 0LL;
    v21 = 4092LL;
  }
  memset64(v18, v5 | (v5 << 32), v19);
  if ( v20 )
    *(_DWORD *)&v18[v21] = v5;
  v22 = KeGetCurrentPrcb();
  v23 = v22->CFlushSize;
  if ( v22->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( m = (char *)(a3 & ~(v23 - 1)); m < v13; m += v23 )
      _mm_clflush(m);
  }
  v25 = (void *)a3;
  v26 = 1024LL;
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)a3 = v4;
    v25 = (void *)(a3 + 4);
    v26 = 1023LL;
  }
  memset64(v25, v4 | (v4 << 32), v26 >> 1);
  if ( (v26 & 1) != 0 )
    *((_DWORD *)v25 + v26 - 1) = v4;
  v27 = KeGetCurrentPrcb();
  v28 = v27->CFlushSize;
  if ( v27->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( n = (char *)(a3 & ~(v28 - 1)); (unsigned __int64)n < a3 + 4096; n += v28 )
      _mm_clflush(n);
  }
  for ( ii = (_DWORD *)a3; (unsigned __int64)ii < a3 + 4096; ++ii )
  {
    if ( *ii != (_DWORD)v4 )
      return 0;
  }
  v31 = (void *)a3;
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)a3 = v5;
    v31 = (void *)(a3 + 4);
    v3 = 1023LL;
  }
  memset64(v31, v5 | (v5 << 32), v3 >> 1);
  if ( (v3 & 1) != 0 )
    *((_DWORD *)v31 + v3 - 1) = v5;
  v32 = KeGetCurrentPrcb();
  v33 = v32->CFlushSize;
  if ( v32->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( jj = (char *)(a3 & ~(v33 - 1)); (unsigned __int64)jj < a3 + 4096; jj += v33 )
      _mm_clflush(jj);
  }
  v35 = (_DWORD *)(a3 + 4096);
  do
    *--v35 = v4;
  while ( v35 != (_DWORD *)a3 );
  v36 = KeGetCurrentPrcb();
  v37 = v36->CFlushSize;
  if ( v36->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( kk = (char *)(a3 & ~(v37 - 1)); (unsigned __int64)kk < a3 + 4096; kk += v37 )
      _mm_clflush(kk);
  }
  v39 = (_DWORD *)(a3 + 4096);
  while ( a3 < (unsigned __int64)v39 )
  {
    if ( *(_DWORD *)a3 != (_DWORD)v4 )
      return v9;
    a3 += 4LL;
  }
  return 1;
}
