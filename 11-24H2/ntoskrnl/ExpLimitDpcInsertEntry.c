/*
 * XREFs of ExpLimitDpcInsertEntry @ 0x1406530A0
 * Callers:
 *     ExpLimitInsertDpc @ 0x140653350 (ExpLimitInsertDpc.c)
 * Callees:
 *     ExpTrackRaiseLimitNotification @ 0x1406539C4 (ExpTrackRaiseLimitNotification.c)
 */

unsigned __int64 __fastcall ExpLimitDpcInsertEntry(signed __int64 *a1)
{
  signed __int64 v1; // rsi
  int v2; // r12d
  unsigned int v4; // r8d
  unsigned int v5; // r10d
  unsigned int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 j; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  unsigned __int64 result; // rax
  __int64 v16; // rbp
  __int64 *v17; // rbx
  signed __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  signed __int64 v23; // r8
  __int64 i; // r9
  char *v25; // rcx
  unsigned __int64 v26; // rax

  v1 = *a1;
  v2 = 0;
  v4 = PoolTrackTableMask & ((40543 * *(_DWORD *)(*a1 + 8)) ^ ((40543 * (unsigned __int64)*(unsigned int *)(*a1 + 8)) >> 32));
  v5 = v4;
  v6 = 0;
  do
  {
    v7 = 80LL * v4;
    v8 = *(unsigned int *)((char *)ExPoolTagTables + v7);
    if ( v8 == *(_QWORD *)(v1 + 8) )
    {
      v2 = 1;
      v6 = -858993459 * (v7 >> 4);
      goto LABEL_21;
    }
    if ( !(_DWORD)v8 )
      break;
    v4 = PoolTrackTableMask & (v4 + 1);
  }
  while ( v4 != v5 );
  if ( !PoolTrackTableExpansion )
  {
LABEL_21:
    v16 = 0LL;
    v17 = a1 + 1;
    v18 = v1 - (_QWORD)a1;
    while ( 1 )
    {
      if ( !*(__int64 *)((char *)v17 + v18 + 8) )
      {
        v19 = *(__int64 *)((char *)v17 + v18 + 16);
        v20 = *v17;
        if ( !v19 && (v20 || v17[1]) )
        {
          v21 = 0LL;
          goto LABEL_32;
        }
        v22 = *v17;
        if ( !v19 )
          goto LABEL_31;
      }
      v20 = *v17;
      v22 = *v17;
      if ( !*v17 && v17[1] == v20 )
      {
        v21 = (unsigned int)(v20 + 1);
      }
      else
      {
LABEL_31:
        v21 = 2LL;
        v20 = v22;
      }
LABEL_32:
      *(__int64 *)((char *)v17 + v18 + 8) = v20;
      result = v17[1];
      *(__int64 *)((char *)v17 + v18 + 16) = result;
      if ( v2 )
      {
        if ( (_DWORD)v21 == 2 )
          goto LABEL_49;
        v23 = v1 + 24 * v16;
        if ( (_DWORD)v21 )
          *(_QWORD *)(v23 + 32) = 1LL;
        else
          *(_QWORD *)(v23 + 32) = 0LL;
        result = (unsigned int)KeNumberProcessors_0;
        for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
        {
          v25 = (char *)*(&ExPoolTagTables + i) + 80 * v6;
          if ( *(_DWORD *)v25 )
          {
            if ( !*((_QWORD *)v25 + 9) )
              _InterlockedCompareExchange64((volatile signed __int64 *)v25 + 9, v1, 0LL);
            if ( (_DWORD)v16 )
              v26 = *((_QWORD *)v25 + 1);
            else
              v26 = *((_QWORD *)v25 + 4);
            if ( (_DWORD)v21 )
            {
              *(_QWORD *)&v25[8 * v16 + 56] = 1LL;
            }
            else
            {
              *(_QWORD *)&v25[8 * v16 + 56] = v26;
              _InterlockedAdd64((volatile signed __int64 *)(v23 + 32), v26);
            }
          }
          result = (unsigned int)KeNumberProcessors_0;
        }
        if ( (_DWORD)v21 != 1 )
        {
LABEL_49:
          result = *(__int64 *)((char *)v17 + v18 + 16);
          if ( result && result < *(__int64 *)((char *)v17 + v18 + 24) )
            result = ExpTrackRaiseLimitNotification(v1, v21);
        }
      }
      v16 = (unsigned int)(v16 + 1);
      v17 += 3;
      if ( (int)v16 >= 2 )
        return result;
    }
  }
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= (unsigned __int64)PoolTrackTableExpansionSize )
      goto LABEL_21;
    v10 = 10 * j;
    if ( !*((_DWORD *)PoolTrackTableExpansion + 20 * j) )
      goto LABEL_21;
    if ( *((_DWORD *)PoolTrackTableExpansion + 20 * j) == *(_DWORD *)(v1 + 8) )
      break;
  }
  v11 = 0LL;
  *((_QWORD *)PoolTrackTableExpansion + 10 * j + 9) = v1;
  do
  {
    v12 = 3 * v11;
    *(_QWORD *)(v1 + 8 * v12 + 16) = a1[3 * v11 + 1];
    v13 = a1[3 * v11 + 2];
    v14 = PoolTrackTableExpansion;
    *(_QWORD *)(v1 + 8 * v12 + 24) = v13;
    if ( v11 )
      result = v14[v10 + 1];
    else
      result = v14[v10 + 4];
    *(_QWORD *)(v1 + 24 * v11 + 32) = result;
    if ( v13 )
    {
      if ( v13 < result )
        result = ExpTrackRaiseLimitNotification(v1, v13);
    }
    ++v11;
  }
  while ( v11 < 2 );
  return result;
}
