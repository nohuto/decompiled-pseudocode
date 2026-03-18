/*
 * XREFs of EmonIsModifiedByBadActorInternalOriginal @ 0x1404F1C8C
 * Callers:
 *     EmonIsModifiedByBadActorOriginal @ 0x1404F1BE0 (EmonIsModifiedByBadActorOriginal.c)
 *     EmonOverflowHandlerInternalV1Original @ 0x140559D58 (EmonOverflowHandlerInternalV1Original.c)
 *     EmonOverflowHandlerInternalV2Original @ 0x14055A63C (EmonOverflowHandlerInternalV2Original.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonIsModifiedByBadActorInternalOriginal(unsigned int a1, int *a2, __int64 a3, _BYTE *a4)
{
  int v4; // edi
  unsigned int v5; // r10d
  __int64 v7; // rsi
  char v8; // r11
  int v10; // edx
  int v11; // edx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx

  v4 = *a2;
  v5 = 0;
  v7 = 0LL;
  v8 = a1;
  if ( a1 >= a2[1] )
    return 3221225711LL;
  v10 = *(_DWORD *)(*((_QWORD *)a2 + 2) + 48LL * a1 + 24);
  if ( !v10 )
  {
    if ( v4 == 1 )
      v7 = 8LL << (4 * (unsigned __int8)a1);
    else
      v7 = 0x100000LL;
LABEL_18:
    _mm_lfence();
    v13 = v7 | 0x400000;
    if ( v4 == 1 )
      v13 = v7;
    if ( a3 != (**(unsigned int **)(*((_QWORD *)a2 + 2) + 48LL * a1 + 16) | (unsigned __int64)v13) )
      goto LABEL_7;
    if ( (unsigned int)EmonVersion >= 2 )
    {
      if ( *a2 == 1 )
        v8 = a1 + 32;
      if ( (__readmsr(0x38Fu) & (1LL << v8)) == 0 )
        goto LABEL_7;
    }
LABEL_25:
    *a4 = 0;
    return v5;
  }
  v11 = v10 - 1;
  if ( !v11 )
    goto LABEL_18;
  if ( v11 == 1 )
    return (unsigned int)-1073740024;
  if ( !a3 )
  {
    if ( (unsigned int)EmonVersion < 2 )
      goto LABEL_25;
    if ( v4 == 1 )
      v8 = a1 + 32;
    v12 = (1LL << v8) & __readmsr(0x38Fu);
    if ( v4 != 1 || !v12 )
      goto LABEL_25;
  }
LABEL_7:
  *a4 = 1;
  return v5;
}
