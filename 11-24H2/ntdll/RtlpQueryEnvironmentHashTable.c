/*
 * XREFs of RtlpQueryEnvironmentHashTable @ 0x180007D80
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180007080 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpQueryEnvironmentHashTable(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // r14
  int v7; // r13d
  char *v8; // rdi
  __int64 v9; // r15
  char *v10; // r10
  __int64 v11; // r11
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int16 v14; // r8
  unsigned int v15; // ebp
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r10
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  unsigned __int16 *v21; // r9
  signed __int64 v22; // r14
  unsigned __int16 *v23; // r15
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rdi
  __int64 result; // rax
  int v27; // r12d
  unsigned __int64 v28; // r9
  const void *v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // [rsp+28h] [rbp-50h]

  v6 = a3;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  v10 = a2;
  v11 = 314159LL;
  v12 = (unsigned __int64)&a2[2 * (unsigned int)a3];
  if ( (unsigned __int64)a2 >= v12 )
    goto LABEL_7;
  do
  {
    v13 = *(unsigned __int16 *)v10;
    if ( (unsigned int)v13 < 0x61 )
      goto LABEL_20;
    if ( (unsigned int)v13 <= 0x7A )
    {
      LOBYTE(v14) = v13 - 32;
      LOWORD(v13) = v13 - 32;
      goto LABEL_5;
    }
    if ( qword_1801CC038 && (unsigned __int16)v13 >= 0xC0u )
    {
      v14 = *(_WORD *)(qword_1801CC038
                     + 2
                     * ((v13 & 0xF)
                      + *(unsigned __int16 *)(qword_1801CC038
                                            + 2LL
                                            * (((unsigned __int8)v13 >> 4)
                                             + (unsigned int)*(unsigned __int16 *)(qword_1801CC038 + 2 * (v13 >> 8))))))
          + v13;
      LOWORD(v13) = v14;
    }
    else
    {
LABEL_20:
      LOBYTE(v14) = *(_WORD *)v10;
    }
LABEL_5:
    v10 += 2;
    v11 = BYTE1(v13) + 37 * ((unsigned __int8)v14 + 37 * v11);
  }
  while ( (unsigned __int64)v10 < v12 );
  v6 = a3;
LABEL_7:
  v15 = *(_DWORD *)(a1 + 4);
  v16 = -1LL << (v15 & 0x1F);
  v17 = 0LL;
  v18 = v11 & v16;
  v31 = v11 & v16;
LABEL_8:
  if ( v17 )
    goto LABEL_11;
  if ( v15 >> 5 )
  {
    v17 = *(_QWORD *)(v9 + 8)
        + 8LL
        * ((37
          * (BYTE6(v31)
           + 37
           * (BYTE5(v31)
            + 37
            * (BYTE4(v31)
             + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v31)) & ((v15 >> 5) - 1));
LABEL_11:
    while ( 1 )
    {
      v17 = *(_QWORD *)v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( v18 == (v16 & *(_QWORD *)(v17 + 8)) )
      {
        v19 = *(_QWORD *)(v17 + 32);
        v20 = v6;
        v21 = *(unsigned __int16 **)(v17 + 16);
        if ( v19 <= v6 )
          v20 = *(_QWORD *)(v17 + 32);
        v22 = v8 - (char *)v21;
        v23 = &v21[v20];
        while ( v21 < v23 )
        {
          v24 = *v21;
          v25 = *(unsigned __int16 *)((char *)v21 + v22);
          if ( (_WORD)v24 != (_WORD)v25 )
          {
            if ( (unsigned int)v24 >= 0x61 )
            {
              if ( (unsigned int)v24 > 0x7A )
              {
                if ( qword_1801CC038 && (unsigned __int16)v24 >= 0xC0u )
                  LOWORD(v24) = *(_WORD *)(qword_1801CC038
                                         + 2
                                         * ((v24 & 0xF)
                                          + *(unsigned __int16 *)(qword_1801CC038
                                                                + 2LL
                                                                * (((unsigned __int8)v24 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(qword_1801CC038 + 2 * (v24 >> 8))))))
                              + v24;
              }
              else
              {
                LOWORD(v24) = v24 - 32;
              }
            }
            if ( (unsigned int)v25 >= 0x61 )
            {
              if ( (unsigned int)v25 > 0x7A )
              {
                if ( qword_1801CC038 && (unsigned __int16)v25 >= 0xC0u )
                  LOWORD(v25) = *(_WORD *)(qword_1801CC038
                                         + 2
                                         * ((v25 & 0xF)
                                          + *(unsigned __int16 *)(qword_1801CC038
                                                                + 2LL
                                                                * (((unsigned __int8)v25 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(qword_1801CC038 + 2 * (v25 >> 8))))))
                              + v25;
              }
              else
              {
                LOWORD(v25) = v25 - 32;
              }
            }
            if ( (_WORD)v24 != (_WORD)v25 )
            {
              v27 = (unsigned __int16)v24 - (unsigned __int16)v25;
              goto LABEL_33;
            }
          }
          ++v21;
        }
        v27 = v19 - v7;
LABEL_33:
        v8 = a2;
        v6 = a3;
        v9 = a1;
        if ( v27 )
          goto LABEL_8;
        if ( !v17 )
          return 3221225728LL;
        v28 = *(_QWORD *)(v17 + 40);
        v29 = *(const void **)(v17 + 24);
        if ( a4 )
        {
          if ( v28 < a5 )
          {
            v30 = v28;
            *a6 = v28;
            memmove(a4, v29, 2 * v28);
            result = 0LL;
            a4[v30] = 0;
            return result;
          }
          if ( a5 )
            *a4 = 0;
        }
        *a6 = v28 + 1;
        return 3221225507LL;
      }
    }
  }
  return 3221225728LL;
}
