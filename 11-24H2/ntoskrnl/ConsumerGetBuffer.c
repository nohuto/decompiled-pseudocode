/*
 * XREFs of ConsumerGetBuffer @ 0x140B5E318
 * Callers:
 *     PopRequestWrite @ 0x140B60100 (PopRequestWrite.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x140B6A908 (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ConsumerGetBuffer(__int64 a1, unsigned int *a2, char a3)
{
  _DWORD *v6; // rsi
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v17; // r8

  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( 1 )
  {
    v6 = (_DWORD *)(a1 + 32);
    v7 = *(_DWORD *)(a1 + 48);
    v8 = *(_DWORD *)(a1 + 40) - v7;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v9 = *v6 - v7;
      v10 = *a2;
      if ( *a2 >= v9 )
        v10 = v9;
      *a2 = v10;
    }
    v11 = *a2;
    if ( (unsigned int)v11 <= v8 )
      break;
    if ( (a3 & 1) != 0 )
      goto LABEL_21;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
      v12 = *(_DWORD *)(a1 + 48);
      v13 = *(_DWORD *)(a1 + 40) - v12;
      if ( *(_QWORD *)(a1 + 16) )
      {
        v6 = (_DWORD *)(a1 + 32);
      }
      else
      {
        v14 = *v6 - v12;
        v15 = *a2;
        if ( *a2 >= v14 )
          v15 = v14;
        *a2 = v15;
      }
    }
    while ( *a2 > v13 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak();
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  if ( !(_DWORD)v11 )
  {
LABEL_21:
    result = 0LL;
    goto LABEL_24;
  }
  v17 = *(_QWORD *)(a1 + 48);
  result = *(_QWORD *)a1 + v17 % *(unsigned int *)(a1 + 8);
  *(_QWORD *)(a1 + 48) = v17 + v11;
LABEL_24:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
