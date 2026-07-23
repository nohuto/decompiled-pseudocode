/*
 * XREFs of ?KiAdvanceReadyQueueEnumeratorToNextRootScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9CCC
 * Callers:
 *     ?KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9BA0 (-KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextRootScb(struct _KI_READY_QUEUE_ENUMERATOR *a1)
{
  unsigned int v1; // edx
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // bl
  __int64 v8; // r9
  unsigned __int8 v9; // r10
  __int64 v10; // r11
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9
  _QWORD *v14; // r9
  __int64 i; // rcx

  v1 = 0;
  v3 = 6LL * *((unsigned __int8 *)a1 + 10);
  v4 = *((_QWORD *)a1 + 6 * *((unsigned __int8 *)a1 + 10) + 9);
  v5 = *((_QWORD *)a1 + 6 * *((unsigned __int8 *)a1 + 10) + 8);
  if ( v4 && *(_QWORD *)(v4 + 424) == v5 )
    goto LABEL_3;
  v12 = *(_QWORD *)(v5 + 96);
  v13 = v5 + 88;
  if ( v12 )
  {
    v14 = *(_QWORD **)v12;
    if ( *(_QWORD *)v12 )
    {
      do
      {
        v12 = (unsigned __int64)v14;
        v14 = (_QWORD *)*v14;
      }
      while ( v14 );
    }
  }
  else
  {
    for ( i = *(_QWORD *)(v13 + 16); ; i = *(_QWORD *)(v12 + 16) )
    {
      v12 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v12 || *(_QWORD *)v12 == v13 )
        break;
      v13 = v12;
    }
  }
  if ( !v12 )
  {
LABEL_3:
    v6 = 0LL;
  }
  else
  {
    v6 = v12 - 88;
    if ( *(_DWORD *)(v6 + 124) > *((_DWORD *)a1 + 2 * v3 + 20) )
      v6 = 0LL;
  }
  *((_QWORD *)a1 + v3 + 8) = v6;
  v7 = 0;
  v8 = 0LL;
  v9 = *((_BYTE *)a1 + 9);
  do
  {
    v10 = *((_QWORD *)a1 + 6 * v9 + 8);
    if ( v10 && (!v8 || *(_DWORD *)(v8 + 124) < *(_DWORD *)(v10 + 124)) )
    {
      v7 = v9;
      v8 = *((_QWORD *)a1 + 6 * v9 + 8);
    }
    v9 = (unsigned int)(unsigned __int8)(v9 + 1) < *(_DWORD *)a1 ? v9 + 1 : 0;
  }
  while ( v9 != *((_BYTE *)a1 + 9) );
  if ( v8 )
  {
    *((_BYTE *)a1 + 10) = v7;
    *((_QWORD *)a1 + 3) = v8;
  }
  else
  {
    return (unsigned int)-2147483622;
  }
  return v1;
}
