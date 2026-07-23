/*
 * XREFs of ApiSetpSearchForApiSet @ 0x1800B8390
 * Callers:
 *     ApiSetResolveToHost @ 0x180070C20 (ApiSetResolveToHost.c)
 *     ApiSetQuerySchemaInfo @ 0x1801140BC (ApiSetQuerySchemaInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, unsigned __int16 *a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned __int16 *v5; // rbx
  unsigned int v6; // eax
  unsigned __int16 *v7; // r9
  __int64 v8; // r10
  unsigned __int16 v9; // r8
  int v10; // r11d
  int v11; // r9d
  int v13; // r10d
  char *v14; // rdx
  bool v15; // cf
  bool v16; // cc
  char *v17; // rdx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbp
  unsigned __int16 *v21; // r11
  char *v22; // rsi
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  int v25; // r10d

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  v6 = 0;
  v7 = a2;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      v9 = *v7;
      if ( (unsigned __int16)(*v7 - 65) <= 0x19u )
        v9 += 32;
      ++v7;
      v6 = v6 * a1[6] + v9;
      --v8;
    }
    while ( v8 );
  }
  v10 = 0;
  v11 = a1[3] - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v10 > v11 )
        return v3;
      v13 = (v10 + v11) >> 1;
      v14 = (char *)a1 + (unsigned int)a1[5];
      v15 = v6 < *(_DWORD *)&v14[8 * v13];
      v16 = v6 <= *(_DWORD *)&v14[8 * v13];
      v17 = &v14[8 * v13];
      if ( !v15 )
        break;
      v11 = v13 - 1;
    }
    if ( v16 )
      break;
    v10 = v13 + 1;
  }
  v3 = (__int64)&a1[6 * *((unsigned int *)v17 + 1)] + (unsigned int)a1[4];
  if ( !v3 )
    return v3;
  v18 = v4;
  v19 = v4;
  v20 = (unsigned __int64)*(unsigned int *)(v3 + 12) >> 1;
  if ( v18 > v20 )
    v19 = (unsigned __int64)*(unsigned int *)(v3 + 12) >> 1;
  v21 = &v5[v19];
  v22 = (char *)a1 + *(unsigned int *)(v3 + 4) - (_QWORD)v5;
  while ( v5 < v21 )
  {
    v23 = *v5;
    v24 = *(unsigned __int16 *)((char *)v5 + (_QWORD)v22);
    if ( (_WORD)v23 != (_WORD)v24 )
    {
      if ( (unsigned int)v23 >= 0x61 )
      {
        if ( (unsigned int)v23 > 0x7A )
        {
          if ( qword_1801CC038 && (unsigned __int16)v23 >= 0xC0u )
            LOWORD(v23) = *(_WORD *)(qword_1801CC038
                                   + 2
                                   * ((v23 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CC038
                                                          + 2LL
                                                          * (((unsigned __int8)v23 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801CC038
                                                                                               + 2 * (v23 >> 8))))))
                        + v23;
        }
        else
        {
          LOWORD(v23) = v23 - 32;
        }
      }
      if ( (unsigned int)v24 >= 0x61 )
      {
        if ( (unsigned int)v24 > 0x7A )
        {
          if ( qword_1801CC038 )
          {
            if ( (unsigned __int16)v24 >= 0xC0u )
              LOWORD(v24) = *(_WORD *)(qword_1801CC038
                                     + 2
                                     * ((v24 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801CC038
                                                            + 2LL
                                                            * (((unsigned __int8)v24 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801CC038
                                                                                                 + 2 * (v24 >> 8))))))
                          + v24;
          }
        }
        else
        {
          LOWORD(v24) = v24 - 32;
        }
      }
      if ( (_WORD)v23 != (_WORD)v24 )
      {
        v25 = (unsigned __int16)v23 - (unsigned __int16)v24;
        goto LABEL_28;
      }
    }
    ++v5;
  }
  v25 = v18 - v20;
LABEL_28:
  if ( !v25 )
    return v3;
  return 0LL;
}
