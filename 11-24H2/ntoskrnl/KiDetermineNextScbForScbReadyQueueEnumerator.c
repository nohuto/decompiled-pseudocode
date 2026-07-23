/*
 * XREFs of KiDetermineNextScbForScbReadyQueueEnumerator @ 0x1402A85EC
 * Callers:
 *     KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x1402D8A9C (KiRemoveCurrentThreadScbReadyQueueEnumerator.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiDetermineNextScbForScbReadyQueueEnumerator(_QWORD *a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  __int64 i; // rdx
  _QWORD *j; // rcx
  _QWORD *v9; // r8
  _QWORD *v10; // r8
  __int64 k; // rdx

  v2 = a1[51];
  if ( (v2 & 1) == 0 )
  {
    v3 = a1[51];
    goto LABEL_3;
  }
  if ( v2 != 1 )
  {
    v3 = v2 ^ ((unsigned __int64)(a1 + 50) | 1);
LABEL_3:
    if ( v3 )
      return (v3 - 88) & -(__int64)(v3 != 0);
  }
  v3 = a1[12];
  v4 = a1 + 11;
  if ( v3 )
  {
    v5 = *(_QWORD **)v3;
    if ( *(_QWORD *)v3 )
    {
      do
      {
        v3 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
      }
      while ( v5 );
    }
  }
  else
  {
    for ( i = v4[2]; ; i = *(_QWORD *)(v3 + 16) )
    {
      v3 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v3 || *(_QWORD **)v3 == v4 )
        break;
      v4 = (_QWORD *)v3;
    }
  }
  if ( !v3 )
  {
    for ( j = (_QWORD *)a1[52]; j; j = (_QWORD *)j[52] )
    {
      v9 = j + 11;
      v3 = j[12];
      if ( v3 )
      {
        v10 = *(_QWORD **)v3;
        if ( *(_QWORD *)v3 )
        {
          do
          {
            v3 = (unsigned __int64)v10;
            v10 = (_QWORD *)*v10;
          }
          while ( v10 );
        }
      }
      else
      {
        for ( k = j[13]; ; k = *(_QWORD *)(v3 + 16) )
        {
          v3 = k & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v3 || *(_QWORD **)v3 == v9 )
            break;
          v9 = (_QWORD *)v3;
        }
      }
      if ( v3 )
        return (v3 - 88) & -(__int64)(v3 != 0);
    }
    v3 = 0LL;
  }
  return (v3 - 88) & -(__int64)(v3 != 0);
}
