/*
 * XREFs of ?KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9BA0
 * Callers:
 *     KiAdvanceReadyQueueEnumerator @ 0x1402D9050 (KiAdvanceReadyQueueEnumerator.c)
 *     ?KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9568 (-KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 *     ?KiAdvanceReadyQueueEnumeratorToNextPhase@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9690 (-KiAdvanceReadyQueueEnumeratorToNextPhase@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 * Callees:
 *     ?KiAdvanceReadyQueueEnumeratorToNextRootScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9CCC (-KiAdvanceReadyQueueEnumeratorToNextRootScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 */

__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextScb(struct _KI_READY_QUEUE_ENUMERATOR *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 i; // rcx
  _QWORD *v12; // r8
  __int64 result; // rax
  _QWORD *v14; // rdx
  int v15; // edx

  while ( 1 )
  {
    v2 = *((unsigned __int8 *)a1 + 10);
    v3 = (_QWORD *)*((_QWORD *)a1 + 2);
    v4 = 6 * v2;
    if ( v3 != *((_QWORD **)a1 + 6 * v2 + 9) )
    {
      v5 = (unsigned __int64)(v3 + 50);
      v6 = v3[51];
      v7 = v3[50];
      if ( (v6 & 1) == 0 )
        goto LABEL_3;
      if ( v7 )
      {
        v7 ^= v5;
LABEL_3:
        if ( !v7 )
          goto LABEL_13;
        if ( (v3[51] & 1LL) != 0 )
        {
          if ( v6 == 1 )
            v8 = 0LL;
          else
            v8 = v6 ^ (v5 | 1);
        }
        else
        {
          v8 = v3[51];
        }
LABEL_6:
        v9 = v8 - 88;
        if ( v9 )
          goto LABEL_22;
        goto LABEL_14;
      }
LABEL_13:
      while ( 1 )
      {
        v12 = v3 + 52;
        if ( !v3[52] )
          break;
        v8 = v3[12];
        v10 = v3 + 11;
        if ( v8 )
        {
          v14 = *(_QWORD **)v8;
          if ( *(_QWORD *)v8 )
          {
            do
            {
              v8 = (unsigned __int64)v14;
              v14 = (_QWORD *)*v14;
            }
            while ( v14 );
          }
        }
        else
        {
          for ( i = v10[2]; ; i = *(_QWORD *)(v8 + 16) )
          {
            v8 = i & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v8 || *(_QWORD **)v8 == v10 )
              break;
            v10 = (_QWORD *)v8;
          }
        }
        if ( v8 )
          goto LABEL_6;
        v3 = (_QWORD *)*v12;
      }
    }
LABEL_14:
    result = KiAdvanceReadyQueueEnumeratorToNextRootScb(a1);
    if ( (int)result < 0 )
      return result;
    v9 = *((_QWORD *)a1 + 3);
LABEL_22:
    *((_QWORD *)a1 + 2) = v9;
    if ( v9 )
    {
      v15 = *(unsigned __int16 *)(v9 + 120);
      *((_DWORD *)a1 + 1) = v15;
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 424) + 124LL) == *((_DWORD *)a1 + 2 * v4 + 20) )
      {
        v15 &= *((_DWORD *)a1 + 2 * v4 + 21);
        *((_DWORD *)a1 + 1) = v15;
      }
      if ( v15 )
        return 0LL;
    }
  }
}
