/*
 * XREFs of ConsumerPeekAndConsumeBuffer @ 0x140B6A7D4
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140B5E974 (PopDecompressHiberBlocks.c)
 * Callees:
 *     PopHiberPeekRangeTable @ 0x140B5F338 (PopHiberPeekRangeTable.c)
 *     PopHiberCheckForDebugBreak @ 0x140B6A908 (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ConsumerPeekAndConsumeBuffer(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // r12
  unsigned int v9; // ebp
  unsigned int v10; // esi
  int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // r14
  unsigned int v15; // eax
  unsigned __int64 result; // rax

  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      ((void (*)(void))PopHiberCheckForDebugBreak)();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 48);
    v9 = *(_DWORD *)(a1 + 40) - v8;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v13 = *a2;
      if ( *a2 >= *(_DWORD *)(a1 + 32) - (int)v8 )
        v13 = *(_DWORD *)(a1 + 32) - v8;
      *a2 = v13;
    }
    v10 = *a2;
    if ( *a2 <= v9 )
    {
      if ( !v10 )
        goto LABEL_25;
      v14 = *(_QWORD *)a1 + v8 % *(unsigned int *)(a1 + 8);
      v15 = PopHiberPeekRangeTable(*(_DWORD *)a1 + (unsigned int)(v8 % *(unsigned int *)(a1 + 8)), v10, a5);
      v10 = v15;
      if ( v15 <= v9 )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_25;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      ((void (*)(void))PopHiberCheckForDebugBreak)();
      v11 = *(_DWORD *)(a1 + 48);
      v12 = (unsigned int)(*(_DWORD *)(a1 + 40) - v11);
      if ( !*(_QWORD *)(a1 + 16) && v10 >= *(_DWORD *)(a1 + 32) - v11 )
        v10 = *(_DWORD *)(a1 + 32) - v11;
    }
    while ( *(_QWORD *)(a1 + 48) == v8 && v10 > (unsigned int)v12 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak(v12);
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  *a2 = v15;
  if ( v15 )
  {
    *(_QWORD *)(a1 + 48) += v15;
    goto LABEL_26;
  }
LABEL_25:
  v14 = 0LL;
LABEL_26:
  result = v14;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
