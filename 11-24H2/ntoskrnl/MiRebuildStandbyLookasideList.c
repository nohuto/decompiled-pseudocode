/*
 * XREFs of MiRebuildStandbyLookasideList @ 0x1403E73E0
 * Callers:
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiLockStandbyOldestPage @ 0x1403E71A8 (MiLockStandbyOldestPage.c)
 * Callees:
 *     MiWriteStandbyLookasideEntry @ 0x140223D70 (MiWriteStandbyLookasideEntry.c)
 *     MiPfnToStandbyLookaside @ 0x140224320 (MiPfnToStandbyLookaside.c)
 *     MiGetStandbyLookaside @ 0x140301F40 (MiGetStandbyLookaside.c)
 *     MiSkipStandbyEntries @ 0x1403E76A0 (MiSkipStandbyEntries.c)
 *     MiGetStandbyPageType @ 0x1403E78B0 (MiGetStandbyPageType.c)
 *     MiClearEntireStandbyLookasideList @ 0x1403E7914 (MiClearEntireStandbyLookasideList.c)
 */

__int64 __fastcall MiRebuildStandbyLookasideList(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  ULONG_PTR v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rdx
  int v12; // ecx
  int StandbyPageType; // r12d
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 i; // rax
  __int128 v18; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+40h] [rbp-48h]
  __int128 v20; // [rsp+50h] [rbp-38h]
  int v21; // [rsp+A0h] [rbp+18h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  MiPfnToStandbyLookaside(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 0LL, 0LL, (__int64 *)&v18);
  v5 = v18 + 88LL * HIDWORD(v19);
  result = MiGetStandbyLookaside((__int64 *)&v18, a2);
  v8 = result;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v9 = *(_QWORD *)(v5 + 3288);
    }
    else
    {
      result = v19;
      v9 = *(_QWORD *)(v19 + 24);
    }
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 3280);
  }
  if ( a3 || (result = *(_QWORD *)(v8 + 504), result == -1) )
  {
    if ( v9 != 0x3FFFFFFFFFLL )
    {
      v10 = 0LL;
      v21 = MiClearEntireStandbyLookasideList(v7, v8, a2);
      if ( a2 )
        StandbyPageType = 0;
      else
        StandbyPageType = MiGetStandbyPageType(v9, v11);
      while ( 1 )
      {
LABEL_8:
        v14 = 1;
        while ( 1 )
        {
          while ( 1 )
          {
            result = *(_QWORD *)(v8 + 8 * v10);
            if ( result == -1 )
              break;
            v10 = (unsigned int)(v10 + 1);
            if ( (_DWORD)v10 == 64 )
              return result;
          }
          result = MiSkipStandbyEntries(v12, v9, StandbyPageType, a2, v14);
          v9 = result;
          if ( result == 0x3FFFFFFFFFLL )
            return result;
          v16 = 48 * result - 0x220000000000LL;
          StandbyPageType = a2 ? 0 : MiGetStandbyPageType(result, v15);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
            break;
          if ( !v21 )
          {
            for ( i = 0LL; (unsigned int)i < 0x40; i = (unsigned int)(i + 1) )
            {
              if ( *(_QWORD *)(v8 + 8 * i) == v9 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_8;
              }
            }
          }
          MiWriteStandbyLookasideEntry((ULONG_PTR *)(v8 + 8 * v10), a2, v9);
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)v10 != 63 )
          {
            if ( a2 )
            {
              v9 = a2 == 1
                 ? *(_QWORD *)(v16 + 24) & 0xFFFFFFFFFFLL
                 : (*(_QWORD *)(v16 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v16 + 36) & 0x1FFFFF) << 19);
            }
            else
            {
              v9 = *(_QWORD *)v16 & 0xFFFFFFFFFFLL;
              v14 = 16;
            }
            result = 1LL;
            v10 = (unsigned int)(v10 + 1);
            if ( v9 != 0x3FFFFFFFFFLL )
              continue;
          }
          return result;
        }
      }
    }
  }
  return result;
}
