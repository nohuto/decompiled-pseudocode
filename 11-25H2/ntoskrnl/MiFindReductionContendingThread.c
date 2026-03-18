/*
 * XREFs of MiFindReductionContendingThread @ 0x1404809B0
 * Callers:
 *     MiReduceZeroingThreads @ 0x140437994 (MiReduceZeroingThreads.c)
 * Callees:
 *     MiZeroThreadContending @ 0x140480BC0 (MiZeroThreadContending.c)
 */

_QWORD *__fastcall MiFindReductionContendingThread(__int64 a1, int a2)
{
  void **v4; // rax
  __int64 v5; // rbp
  unsigned int i; // r12d
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *j; // r14
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rdx

  if ( *(_BYTE *)(a1 + 36) )
    v4 = &qword_140E2D898;
  else
    v4 = *(void ***)(384LL * *(unsigned int *)(*(_QWORD *)(a1 + 176) + 56LL) + qword_140E2D8B8 + 376);
  v5 = *((unsigned int *)v4 + 2);
  if ( (_DWORD)v5 )
  {
    v13 = 0LL;
    v14 = *((unsigned int *)v4 + 2);
    do
    {
      v13 += 48LL;
      *(_DWORD *)(v13 + *(_QWORD *)(a1 + 136) - 12) = 0;
      --v14;
    }
    while ( v14 );
  }
  for ( i = 0; i < (unsigned int)v5; ++i )
  {
    v7 = 0LL;
    if ( !(_DWORD)v5 )
      break;
    v8 = *(_QWORD *)(a1 + 136);
    v9 = v5;
    do
    {
      if ( !*(_DWORD *)(v8 + 36) )
      {
        v12 = *(_DWORD *)(v8 + 32);
        if ( v12 )
        {
          if ( v7 )
          {
            if ( *(_DWORD *)(v7 + 32) < v12 )
              v7 = v8;
          }
          else
          {
            v7 = v8;
          }
        }
      }
      v8 += 48LL;
      --v9;
    }
    while ( v9 );
    if ( !v7 )
      break;
    for ( j = *(_QWORD **)(v7 + 16); j != (_QWORD *)(v7 + 16); j = (_QWORD *)*j )
    {
      if ( a2 )
      {
        if ( (unsigned int)MiZeroThreadContending(j - 54) )
        {
          ++*(_DWORD *)(a1 + 240);
          return j - 54;
        }
      }
      else if ( (*(_DWORD *)(j - 6) & 2) == 0 )
      {
        ++*(_DWORD *)(a1 + 244);
        return j - 54;
      }
    }
    *(_DWORD *)(v7 + 36) = 1;
  }
  return 0LL;
}
