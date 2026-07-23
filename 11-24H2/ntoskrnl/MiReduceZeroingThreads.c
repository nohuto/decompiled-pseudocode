/*
 * XREFs of MiReduceZeroingThreads @ 0x140413BFC
 * Callers:
 *     MiScheduleZeroPageThreads @ 0x140354918 (MiScheduleZeroPageThreads.c)
 *     MiReassessZeroThreads @ 0x1404125C0 (MiReassessZeroThreads.c)
 * Callees:
 *     MiDecrementZeroEngineThread @ 0x140413AA8 (MiDecrementZeroEngineThread.c)
 *     MiFindReductionContendingThread @ 0x14046BFE0 (MiFindReductionContendingThread.c)
 *     MiMoveZeroThreadsToOtherCores @ 0x14046C120 (MiMoveZeroThreadsToOtherCores.c)
 */

__int64 __fastcall MiReduceZeroingThreads(unsigned int *a1, int a2, __int64 a3)
{
  bool v3; // zf
  __int64 v5; // r9
  unsigned int *v6; // rbx
  __int64 v8; // rbp
  __int64 v9; // r10
  void **v10; // rax
  unsigned int v11; // r12d
  int v12; // esi
  unsigned int v13; // r14d
  __int64 v14; // r15
  __int64 ReductionContendingThread; // rdx
  unsigned int v16; // eax
  _DWORD *v17; // rcx
  int v18; // r15d
  __int64 v19; // r14
  _DWORD *v20; // rcx
  __int64 v21; // rsi
  _DWORD *v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // [rsp+60h] [rbp+8h]
  _DWORD *v29; // [rsp+70h] [rbp+18h]

  v29 = (_DWORD *)a3;
  v3 = a1[3] == 0;
  v5 = *a1;
  v6 = a1;
  *(_DWORD *)a3 = v5;
  if ( v3 )
  {
    ++a1[59];
    return 8LL;
  }
  v8 = *((_QWORD *)a1 + 22);
  v9 = *(_QWORD *)(v8 + 48);
  v28 = v9;
  if ( *((_BYTE *)a1 + 36) )
    v10 = &Src;
  else
    v10 = *(void ***)(384LL * *(unsigned int *)(v8 + 56) + qword_140E2DC38 + 376);
  v11 = *((_DWORD *)v10 + 2);
  v12 = 0;
  if ( (_DWORD)v5 )
  {
    v13 = 0;
    if ( v11 )
    {
      v14 = 0LL;
      do
      {
        if ( *(_DWORD *)(v14 + *((_QWORD *)v6 + 17) + 32) && (unsigned int)MiMoveZeroThreadsToOtherCores(v6, v13) )
          v12 = 1;
        ++v13;
        v14 += 48LL;
      }
      while ( v13 < v11 );
      v9 = v28;
    }
  }
  if ( a2 )
    return 8 - (unsigned int)(v12 != 0);
  ReductionContendingThread = 0LL;
  if ( v6[3] <= v6[2] )
  {
    v16 = 0;
    v17 = (_DWORD *)(v8 + 148);
    a3 = 3LL;
    v5 = 304LL;
    do
    {
      v16 += *v17;
      v17 += 76;
      --a3;
    }
    while ( a3 );
    if ( v16 <= 1 )
      return 8LL;
    v18 = *(_DWORD *)(v9 + 16980);
    v6 = 0LL;
    v19 = (v18 == 1) + 1LL;
    v20 = (_DWORD *)(304 * v19 + v8 + 148);
    v21 = 304 * v19 + v8 + 136;
    while ( 1 )
    {
      v22 = v20;
      if ( *v20 )
      {
        ReductionContendingThread = MiFindReductionContendingThread(v21, 1LL, a3, 304LL);
        if ( ReductionContendingThread )
        {
          v6 = (unsigned int *)v21;
          goto LABEL_37;
        }
        v23 = v21;
        v5 = 304LL;
        if ( v6 )
          v23 = (__int64)v6;
        v6 = (unsigned int *)v23;
      }
      if ( v19 == (v18 != 1) + 1LL )
        break;
      if ( v18 == 1 )
      {
        v24 = -304LL;
        a3 = -1LL;
      }
      else
      {
        v24 = 304LL;
        a3 = 1LL;
      }
      v21 += v24;
      v25 = 0x3FFFFFFFFFFFFFB4LL;
      if ( v18 != 1 )
        v25 = 76LL;
      v20 = &v22[v25];
      v19 += a3;
    }
    if ( !v6 )
      v6 = (unsigned int *)(v8 + 136);
  }
LABEL_37:
  *v29 = *v6;
  if ( ReductionContendingThread )
  {
    ++dword_140EF4E50;
  }
  else
  {
    ReductionContendingThread = MiFindReductionContendingThread(v6, 1LL, a3, v5);
    if ( ReductionContendingThread )
    {
      ++dword_140EF4E54;
    }
    else
    {
      ReductionContendingThread = MiFindReductionContendingThread(v6, 0LL, v26, v27);
      if ( !ReductionContendingThread )
        return 8LL;
      ++dword_140EF4E58;
    }
  }
  MiDecrementZeroEngineThread(ReductionContendingThread);
  return 5LL;
}
