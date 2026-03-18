/*
 * XREFs of ?QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1400F829C
 * Callers:
 *     VidMmQueryProcessSegmentStatistics @ 0x14003C790 (VidMmQueryProcessSegmentStatistics.c)
 * Callees:
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1400F8430 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessSegmentStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        unsigned int a3,
        struct VIDMM_PROCESS *a4,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION *a5)
{
  unsigned __int16 v6; // bx
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdi
  int IsActive; // eax
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx

  v6 = a3;
  v7 = a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 1736) )
  {
    WdLogSingleEntry2(3LL, a2, *((unsigned int *)this + 1736));
    WdLogGlobalForLineNumber = 741;
    return 3221225485LL;
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
  if ( a3 >= *(_DWORD *)(v8 + 64) )
    return 3221225485LL;
  v9 = 0LL;
  v10 = *(_QWORD *)(*((_QWORD *)a4 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
  if ( !v10 )
    return 3221225485LL;
  v11 = *(_QWORD *)(304 * v7 + *(_QWORD *)(v10 + 16)) + 184LL * v6;
  if ( !v11 )
    return 3221225485LL;
  v12 = *(_QWORD *)(v8 + 1648);
  v13 = 5LL;
  v14 = v11 - (_QWORD)a5;
  v15 = *(_QWORD **)(v12 + 8LL * v6);
  v16 = (_QWORD *)((char *)a5 + 48);
  *((_DWORD *)a5 + 8) = *(_DWORD *)(v11 + 56);
  *((_QWORD *)a5 + 16) = *(_QWORD *)(v11 + 152);
  *((_DWORD *)a5 + 30) = *(_DWORD *)(v11 + 144);
  *((_QWORD *)a5 + 17) = *(_QWORD *)(v11 + 160);
  do
  {
    *v16 = *(_QWORD *)((char *)v16 + v14 + 24);
    *((_DWORD *)v16 - 2) = *(_DWORD *)((char *)v16 + v14 + 16);
    v16 += 2;
    --v13;
  }
  while ( v13 );
  if ( (*((_DWORD *)a4 + 24) & 1) != 0 )
  {
    v17 = v15[20];
    v9 = v15[21];
  }
  else
  {
    v22 = *((unsigned int *)a4 + 25);
    if ( (_DWORD)v22 )
      v17 = 100LL * v15[9] / v22;
    else
      v17 = 0LL;
    v23 = *((unsigned int *)a4 + 26);
    if ( (_DWORD)v23 )
      v9 = 100LL * v15[9] / v23;
  }
  *((_QWORD *)a5 + 1) = v17;
  *((_QWORD *)a5 + 2) = v9;
  IsActive = VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v11 + 168));
  *(_QWORD *)(v19 + 144) = IsActive;
  *(_QWORD *)v19 = *(_QWORD *)(v20 + 16);
  *(_DWORD *)(v19 + 24) = *(_DWORD *)(v20 + 180);
  return 0LL;
}
