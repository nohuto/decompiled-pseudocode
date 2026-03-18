/*
 * XREFs of ?QuerySegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z @ 0x1400FEA78
 * Callers:
 *     VidMmQuerySegmentStatistics @ 0x140041910 (VidMmQuerySegmentStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::QuerySegmentStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        unsigned int a3,
        struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION *a4)
{
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r10
  int v17; // eax
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rcx
  bool v23; // zf

  v5 = *((unsigned int *)this + 1736);
  if ( a2 >= (unsigned int)v5 )
  {
    WdLogSingleEntry2(3LL, a2, v5);
    WdLogGlobalForLineNumber = 637;
    return 3221225485LL;
  }
  if ( a3 >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2) + 64LL) )
    return 3221225485LL;
  _mm_lfence();
  v6 = 5LL;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2) + 1648LL) + 8LL * a3);
  v8 = (_QWORD *)((char *)a4 + 48);
  *(_QWORD *)a4 = *(_QWORD *)(v7 + 248);
  *((_QWORD *)a4 + 1) = *(_QWORD *)(v7 + 256);
  *((_QWORD *)a4 + 2) = *(_QWORD *)(v7 + 264);
  *((_QWORD *)a4 + 3) = *(_QWORD *)(v7 + 352);
  *((_DWORD *)a4 + 8) = *(_DWORD *)(v7 + 360);
  *((_DWORD *)a4 + 9) = *(_DWORD *)(v7 + 364);
  do
  {
    *v8 = *(_QWORD *)((char *)v8 + v7 + 352 - (_QWORD)a4 - 32);
    ++v8;
    --v6;
  }
  while ( v6 );
  v9 = 0LL;
  if ( (*(_DWORD *)(v7 + 104) & 1) != 0 || (v10 = 0, (*(_DWORD *)(v7 + 104) & 0x1001) != 0) )
    v10 = 1;
  *((_DWORD *)a4 + 10) = v10;
  *((_QWORD *)a4 + 11) = *(_QWORD *)(v7 + 184);
  v11 = ((unsigned __int64)*(unsigned int *)(v7 + 104) >> 7) ^ (*((_QWORD *)a4 + 12) ^ ((unsigned __int64)*(unsigned int *)(v7 + 104) >> 7)) & 0xFFFFFFFFFFFFFFFEuLL;
  *((_QWORD *)a4 + 12) = v11;
  v12 = ((unsigned __int64)*(unsigned int *)(v7 + 104) >> 7) ^ (((unsigned __int64)*(unsigned int *)(v7 + 104) >> 7) ^ v11) & 0xFFFFFFFFFFFFFFFDuLL;
  *((_QWORD *)a4 + 12) = v12;
  *((_QWORD *)a4 + 12) = ((unsigned __int64)*(unsigned int *)(v7 + 104) >> 7) ^ (((unsigned __int64)*(unsigned int *)(v7 + 104) >> 7) ^ v12) & 0xFFFFFFFFFFFFFFFBuLL;
  v13 = *(_DWORD *)(v7 + 104);
  if ( (v13 & 0x1001) != 0 || (v23 = (v13 & 0x40) == 0, v14 = 0LL, !v23) )
    v14 = 1LL;
  v15 = v14 | *((_QWORD *)a4 + 13) & 0xFFFFFFFFFFFFFFFEuLL;
  *((_QWORD *)a4 + 13) = v15;
  v16 = ((unsigned __int64)*(unsigned int *)(v7 + 104) >> 20) ^ (v15 ^ ((unsigned __int64)*(unsigned int *)(v7 + 104) >> 20)) & 0xFFFFFFFFFFFFFFFDuLL;
  *((_QWORD *)a4 + 13) = v16;
  v17 = *(_DWORD *)(v7 + 104);
  if ( (v17 & 0x1001) != 0 || (v17 & 4) != 0 )
  {
    v9 = 1LL;
  }
  else if ( ((v17 & 0x2000) != 0 || (v17 & 0x4000) != 0)
         && *(unsigned int *)(v7 + 416) * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v7 + 552) + 56LL) >= *(_QWORD *)(v7 + 72) )
  {
    v9 = 1LL;
  }
  v18 = (v9 << 8) | v16 & 0xFFFFFFFFFFFFFEFFuLL;
  *((_QWORD *)a4 + 13) = v18;
  v19 = ((__int64)*(int *)(v7 + 516) << 6) ^ (v18 ^ ((__int64)*(int *)(v7 + 516) << 6)) & 0xFFFFFFFFFFFFFF3FuLL;
  *((_QWORD *)a4 + 13) = v19;
  v20 = *(_DWORD *)(v7 + 104);
  if ( (v20 & 1) != 0 )
  {
    v21 = v19 & 0xFFFFFFFFFFFFFFC3uLL;
  }
  else if ( (v20 & 0x1000) != 0 )
  {
    v21 = v19 & 0xFFFFFFFFFFFFFFC3uLL | 8;
  }
  else
  {
    v21 = v19 & 0xFFFFFFFFFFFFFFC3uLL | 4;
  }
  *((_QWORD *)a4 + 13) = v21;
  return 0LL;
}
