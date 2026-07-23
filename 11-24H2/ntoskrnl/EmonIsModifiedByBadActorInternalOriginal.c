/*
 * XREFs of EmonIsModifiedByBadActorInternalOriginal @ 0x1404828CC
 * Callers:
 *     EmonIsModifiedByBadActorOriginal @ 0x140482820 (EmonIsModifiedByBadActorOriginal.c)
 *     EmonOverflowHandlerInternalV1Original @ 0x14055A288 (EmonOverflowHandlerInternalV1Original.c)
 *     EmonOverflowHandlerInternalV2Original @ 0x14055AB6C (EmonOverflowHandlerInternalV2Original.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonIsModifiedByBadActorInternalOriginal(unsigned int a1, int *a2, __int64 a3, _BYTE *a4)
{
  int v4; // edi
  unsigned int v5; // r10d
  __int64 v7; // rsi
  char v8; // r11
  int v9; // edx
  __int64 v10; // rdx
  int v12; // edx
  unsigned __int64 v13; // rdx

  v4 = *a2;
  v5 = 0;
  v7 = 0LL;
  v8 = a1;
  if ( a1 < a2[1] )
  {
    v9 = *(_DWORD *)(*((_QWORD *)a2 + 2) + 48LL * a1 + 24);
    if ( v9 )
    {
      v12 = v9 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
          return (unsigned int)-1073740024;
        if ( !a3 )
        {
          if ( (unsigned int)EmonVersion < 2 )
            goto LABEL_12;
          if ( v4 == 1 )
            v8 = a1 + 32;
          v13 = (1LL << v8) & __readmsr(0x38Fu);
          if ( v4 != 1 || !v13 )
            goto LABEL_12;
        }
        goto LABEL_21;
      }
    }
    else if ( v4 == 1 )
    {
      v7 = 8LL << (4 * (unsigned __int8)a1);
    }
    else
    {
      v7 = 0x100000LL;
    }
    _mm_lfence();
    v10 = v7 | 0x400000;
    if ( v4 == 1 )
      v10 = v7;
    if ( a3 == (**(unsigned int **)(*((_QWORD *)a2 + 2) + 48LL * a1 + 16) | (unsigned __int64)v10) )
    {
      if ( (unsigned int)EmonVersion < 2 )
        goto LABEL_12;
      if ( *a2 == 1 )
        v8 = a1 + 32;
      if ( (__readmsr(0x38Fu) & (1LL << v8)) != 0 )
      {
LABEL_12:
        *a4 = 0;
        return v5;
      }
    }
LABEL_21:
    *a4 = 1;
    return v5;
  }
  return 3221225711LL;
}
