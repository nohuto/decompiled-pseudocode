/*
 * XREFs of ExpFindCurrentThread @ 0x1403D6B20
 * Callers:
 *     ExAcquireSharedWaitForExclusive @ 0x1403D6820 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x140655690 (ExpTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x1403D6CCC (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindCurrentThread(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  __int64 v6; // r10
  _QWORD *result; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rsi
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // r10
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx

  v6 = *(_QWORD *)(a1 + 48);
  result = (_QWORD *)(a1 + 48);
  if ( v6 == a2 )
    return result;
  v12 = 0LL;
  v13 = 0LL;
  if ( !v6 )
  {
    v13 = (_QWORD *)(a1 + 48);
    if ( a5 )
      v13 = 0LL;
  }
  v14 = v6 != 0;
  if ( a6 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    if ( v16 )
    {
      if ( a6 < *(_DWORD *)(v16 + 8) )
      {
        result = (_QWORD *)(v16 + 16LL * a6);
        if ( *result == a2 )
          return result;
      }
    }
  }
  v15 = *(_QWORD *)(a1 + 16);
  result = (_QWORD *)v15;
  if ( v15 )
  {
    v17 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
    v12 = (_QWORD *)(v15 + 16LL * *(unsigned int *)(v15 + 8));
    result = (_QWORD *)(v15 + 16);
    if ( v14 < v17 )
    {
      do
      {
        if ( *result == a2 )
        {
          v18 = result;
          goto LABEL_22;
        }
        if ( *result )
        {
          if ( ++v14 == v17 )
          {
            result += 2;
            break;
          }
        }
        else
        {
          v19 = result;
          if ( v13 )
            v19 = v13;
          v13 = v19;
        }
        result += 2;
      }
      while ( result != v12 );
    }
  }
  if ( !a4 )
    return 0LL;
  if ( !v13 && (result >= v12 || (v13 = result) == 0LL) )
  {
    ExpExpandResourceOwnerTable(a1, a3, v14);
    return 0LL;
  }
  v18 = v13;
  result = v13;
LABEL_22:
  KeGetCurrentThread()->ResourceIndex = ((__int64)v18 - v15) >> 4;
  return result;
}
