/*
 * XREFs of EmonIsModifiedByBadActorInternalEnhanced @ 0x14055992C
 * Callers:
 *     EmonIsModifiedByBadActorEnhanced @ 0x140559880 (EmonIsModifiedByBadActorEnhanced.c)
 *     EmonOverflowHandlerInternalV1Enhanced @ 0x140559E3C (EmonOverflowHandlerInternalV1Enhanced.c)
 *     EmonOverflowHandlerInternalV2Enhanced @ 0x14055A6C0 (EmonOverflowHandlerInternalV2Enhanced.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonIsModifiedByBadActorInternalEnhanced(unsigned int a1, int *a2, __int64 a3, _BYTE *a4)
{
  int v4; // edi
  unsigned int v5; // r10d
  __int64 v7; // r11
  __int64 v8; // rbp
  __int64 v9; // r14
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx

  v4 = *a2;
  v5 = 0;
  v7 = a1;
  v8 = 0LL;
  if ( a1 <= a2[2] )
  {
    v9 = *((_QWORD *)a2 + 2);
    if ( *(_DWORD *)(v9 + 48LL * a1 + 28) != 3 )
    {
      v10 = *(_DWORD *)(v9 + 48LL * a1 + 24);
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            return (unsigned int)-1073740024;
          if ( a3 )
            goto LABEL_7;
          if ( (unsigned int)EmonVersion >= 2 )
          {
            if ( v4 == 1 )
              LOBYTE(v7) = v7 + 32;
            v12 = (1LL << v7) & __readmsr(0x38Fu);
            if ( v4 == 1 )
            {
              if ( v12 )
              {
LABEL_7:
                *a4 = 1;
                return v5;
              }
            }
          }
LABEL_25:
          *a4 = 0;
          return v5;
        }
      }
      else if ( v4 == 1 )
      {
        v8 = 8LL << (4 * (unsigned __int8)v7);
      }
      else
      {
        v8 = 0x100000LL;
      }
      _mm_lfence();
      v13 = v8 | 0x400000;
      if ( v4 == 1 )
        v13 = v8;
      if ( a3 != (**(unsigned int **)(v9 + 48 * v7 + 16) | (unsigned __int64)v13) )
        goto LABEL_7;
      if ( (unsigned int)EmonVersion >= 2 )
      {
        if ( *a2 == 1 )
          LOBYTE(v7) = v7 + 32;
        if ( (__readmsr(0x38Fu) & (1LL << v7)) == 0 )
          goto LABEL_7;
      }
      goto LABEL_25;
    }
  }
  return 3221225711LL;
}
