/*
 * XREFs of RtlpGenericStrideWorker @ 0x1403EC4A8
 * Callers:
 *     RtlScrubMemory @ 0x1403EBF40 (RtlScrubMemory.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpGenericStrideWorker(int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int i; // r14d
  unsigned int v8; // r13d
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rcx
  _DWORD *j; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CFlushSize; // rdx
  char *k; // rcx
  __int64 v17; // rcx
  __int64 v18; // r10
  char *v19; // r8
  __int64 v20; // rcx
  char *v21; // r10
  unsigned __int64 v22; // rax
  _DWORD *v23; // r8
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rcx
  struct _KPRCB *v26; // rax
  __int64 v27; // rdx
  char *ii; // rcx
  _DWORD *jj; // rcx
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  _DWORD *v34; // rdi
  unsigned __int64 n; // rcx
  unsigned __int64 v36; // rdx
  _DWORD *v37; // rdi
  unsigned __int64 m; // rcx
  _DWORD *v39; // rdi
  signed __int32 v40[8]; // [rsp+0h] [rbp-20h] BYREF

  for ( i = 0; i < 6; ++i )
  {
    v8 = 2 * i;
    v9 = a4 + 4096;
    v10 = (a4 >> 2) - 12 * ((unsigned __int64)(((a4 >> 2) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64) >> 3);
    v11 = 2 * i - (unsigned int)v10;
    v12 = (unsigned int)v11;
    if ( (unsigned int)v10 > 2 * i )
      v12 = (unsigned int)(v11 + 12);
    for ( j = (_DWORD *)(a4 + 4 * v12); (unsigned __int64)j < v9; j += 12 )
    {
      *j = a1;
      j[1] = a1;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CFlushSize = CurrentPrcb->CFlushSize;
    if ( CurrentPrcb->CFlushSize )
    {
      _InterlockedOr(v40, 0);
      for ( k = (char *)(a4 & ~(CFlushSize - 1)); (unsigned __int64)k < v9; k += CFlushSize )
        _mm_clflush(k);
    }
    v17 = (unsigned int)v11;
    v18 = 4096LL;
    if ( (unsigned int)v10 > v8 )
      v17 = (unsigned int)(v11 + 12);
    v19 = (char *)a4;
    v20 = 4 * v17;
    if ( v20 + a4 <= v9 )
      v18 = v20;
    v21 = (char *)(a4 + v18);
    v22 = (unsigned __int64)&v21[-a4 + 3] >> 2;
    if ( a4 > (unsigned __int64)v21 )
      v22 = 0LL;
    if ( v22 )
    {
      v36 = (unsigned __int64)&v21[-a4 + 3] & 0xFFFFFFFFFFFFFFFCuLL;
      if ( a4 > (unsigned __int64)v21 )
        v36 = 0LL;
      v37 = (_DWORD *)a4;
      for ( m = v36 >> 2; m; --m )
        *v37++ = a2;
      v19 = (char *)(v36 + a4);
    }
    v23 = v19 + 8;
    if ( (unsigned __int64)v21 < v9 )
    {
      v24 = v9 - 4LL * ((unsigned int)((__int64)(v9 - (_QWORD)v21) >> 2) % 0xC);
      if ( v21 != (char *)v24 )
      {
        v31 = (unsigned __int64)(v21 + 48);
        if ( (unsigned __int64)v23 < v24 )
        {
          do
          {
            v32 = (v31 - (unsigned __int64)v23 + 3) >> 2;
            if ( (unsigned __int64)v23 > v31 )
              v32 = 0LL;
            if ( v32 )
            {
              v33 = (v31 - (_QWORD)v23 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
              v34 = v23;
              if ( (unsigned __int64)v23 > v31 )
                v33 = 0LL;
              for ( n = v33 >> 2; n; --n )
                *v34++ = a2;
              v23 = (_DWORD *)((char *)v23 + v33);
            }
            v23 += 2;
            v31 += 48LL;
          }
          while ( (unsigned __int64)v23 < v24 );
          v8 = 2 * i;
        }
      }
    }
    v25 = (v9 - (unsigned __int64)v23 + 3) >> 2;
    if ( (unsigned __int64)v23 > v9 )
      v25 = 0LL;
    if ( v25 )
    {
      v39 = v23;
      while ( v25 )
      {
        *v39++ = a2;
        --v25;
      }
    }
    v26 = KeGetCurrentPrcb();
    v27 = v26->CFlushSize;
    if ( v26->CFlushSize )
    {
      _InterlockedOr(v40, 0);
      for ( ii = (char *)(a4 & ~(v27 - 1)); (unsigned __int64)ii < v9; ii += v27 )
        _mm_clflush(ii);
    }
    if ( (unsigned int)v10 > v8 )
      v11 = (unsigned int)(v11 + 12);
    for ( jj = (_DWORD *)(a4 + 4 * v11); (unsigned __int64)jj < v9; jj += 12 )
    {
      if ( *jj != a1 || jj[1] != a1 )
        return 0;
    }
  }
  return 1;
}
