/*
 * XREFs of MiFindReductionContendingThread @ 0x14046BFE0
 * Callers:
 *     MiReduceZeroingThreads @ 0x140413BFC (MiReduceZeroingThreads.c)
 * Callees:
 *     MiZeroThreadContending @ 0x14046C1DC (MiZeroThreadContending.c)
 */

_QWORD *__fastcall MiFindReductionContendingThread(__int64 a1, int a2)
{
  void **v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // r12d
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  _QWORD *i; // r14

  if ( *(_BYTE *)(a1 + 36) )
    v4 = &Src;
  else
    v4 = *(void ***)(384LL * *(unsigned int *)(*(_QWORD *)(a1 + 176) + 56LL) + qword_140E2DC38 + 376);
  v5 = *((unsigned int *)v4 + 2);
  if ( (_DWORD)v5 )
  {
    v6 = 0LL;
    v7 = (unsigned int)v5;
    do
    {
      v6 += 48LL;
      *(_DWORD *)(v6 + *(_QWORD *)(a1 + 136) - 12) = 0;
      --v7;
    }
    while ( v7 );
  }
  v8 = 0;
LABEL_7:
  if ( v8 >= (unsigned int)v5 )
    return 0LL;
  v10 = 0LL;
  if ( !(_DWORD)v5 )
    return 0LL;
  v11 = *(_QWORD *)(a1 + 136);
  v12 = v5;
  do
  {
    if ( !*(_DWORD *)(v11 + 36) )
    {
      v13 = *(_DWORD *)(v11 + 32);
      if ( v13 )
      {
        if ( v10 )
        {
          if ( *(_DWORD *)(v10 + 32) < v13 )
            v10 = v11;
        }
        else
        {
          v10 = v11;
        }
      }
    }
    v11 += 48LL;
    --v12;
  }
  while ( v12 );
  if ( !v10 )
    return 0LL;
  for ( i = *(_QWORD **)(v10 + 16); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(v10 + 16) )
    {
      *(_DWORD *)(v10 + 36) = 1;
      ++v8;
      goto LABEL_7;
    }
    if ( !a2 )
      break;
    if ( (unsigned int)MiZeroThreadContending(i - 54) )
    {
      ++*(_DWORD *)(a1 + 240);
      return i - 54;
    }
LABEL_21:
    ;
  }
  if ( (*(_DWORD *)(i - 6) & 2) != 0 )
    goto LABEL_21;
  ++*(_DWORD *)(a1 + 244);
  return i - 54;
}
