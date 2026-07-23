/*
 * XREFs of RtlpFindEnvironmentHashEntry @ 0x1800087A0
 * Callers:
 *     RtlpInsertEnvironmentHashTableEntry @ 0x1800084E0 (RtlpInsertEnvironmentHashTableEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFindEnvironmentHashEntry(__int64 a1, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  int v4; // r13d
  char *v5; // rdi
  __int64 v6; // r15
  char *v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rax
  __int16 v11; // r8
  unsigned int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // r11
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int16 *v18; // r9
  signed __int64 v19; // r14
  unsigned __int16 *v20; // r15
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rdi
  int v24; // r12d
  __int64 v26; // [rsp+68h] [rbp+20h]

  v3 = a3;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = a2;
  v8 = 314159LL;
  v9 = (unsigned __int64)&a2[2 * (unsigned int)a3];
  if ( (unsigned __int64)a2 >= v9 )
    goto LABEL_7;
  do
  {
    v10 = *(unsigned __int16 *)v7;
    if ( (unsigned int)v10 < 0x61 )
      goto LABEL_20;
    if ( (unsigned int)v10 <= 0x7A )
    {
      LOBYTE(v11) = v10 - 32;
      LOWORD(v10) = v10 - 32;
      goto LABEL_5;
    }
    if ( qword_1801CC038 && (unsigned __int16)v10 >= 0xC0u )
    {
      v11 = *(_WORD *)(qword_1801CC038
                     + 2
                     * ((v10 & 0xF)
                      + *(unsigned __int16 *)(qword_1801CC038
                                            + 2LL
                                            * (((unsigned __int8)v10 >> 4)
                                             + (unsigned int)*(unsigned __int16 *)(qword_1801CC038 + 2 * (v10 >> 8))))))
          + v10;
      LOWORD(v10) = v11;
    }
    else
    {
LABEL_20:
      LOBYTE(v11) = *(_WORD *)v7;
    }
LABEL_5:
    v7 += 2;
    v8 = BYTE1(v10) + 37 * ((unsigned __int8)v11 + 37 * v8);
  }
  while ( (unsigned __int64)v7 < v9 );
  v3 = a3;
LABEL_7:
  v12 = *(_DWORD *)(a1 + 4);
  v13 = 0LL;
  v14 = -1LL << (v12 & 0x1F);
  v15 = v8 & v14;
  v26 = v8 & v14;
LABEL_8:
  if ( v13 )
    goto LABEL_11;
  if ( v12 >> 5 )
  {
    v13 = *(_QWORD *)(v6 + 8)
        + 8LL
        * ((37
          * (BYTE6(v26)
           + 37
           * (BYTE5(v26)
            + 37
            * (BYTE4(v26)
             + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v15 + 11623883)))))))
          + HIBYTE(v26)) & ((v12 >> 5) - 1));
LABEL_11:
    while ( 1 )
    {
      v13 = *(_QWORD *)v13;
      if ( (v13 & 1) != 0 )
        break;
      if ( v15 == (v14 & *(_QWORD *)(v13 + 8)) )
      {
        v16 = *(_QWORD *)(v13 + 32);
        v17 = v3;
        v18 = *(unsigned __int16 **)(v13 + 16);
        if ( v16 <= v3 )
          v17 = *(_QWORD *)(v13 + 32);
        v19 = v5 - (char *)v18;
        v20 = &v18[v17];
        while ( v18 < v20 )
        {
          v21 = *v18;
          v22 = *(unsigned __int16 *)((char *)v18 + v19);
          if ( (_WORD)v21 != (_WORD)v22 )
          {
            if ( (unsigned int)v21 >= 0x61 )
            {
              if ( (unsigned int)v21 > 0x7A )
              {
                if ( qword_1801CC038 && (unsigned __int16)v21 >= 0xC0u )
                  LOWORD(v21) = *(_WORD *)(qword_1801CC038
                                         + 2
                                         * ((v21 & 0xF)
                                          + *(unsigned __int16 *)(qword_1801CC038
                                                                + 2LL
                                                                * (((unsigned __int8)v21 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(qword_1801CC038 + 2 * (v21 >> 8))))))
                              + v21;
              }
              else
              {
                LOWORD(v21) = v21 - 32;
              }
            }
            if ( (unsigned int)v22 >= 0x61 )
            {
              if ( (unsigned int)v22 > 0x7A )
              {
                if ( qword_1801CC038 )
                {
                  if ( (unsigned __int16)v22 >= 0xC0u )
                    LOWORD(v22) = *(_WORD *)(qword_1801CC038
                                           + 2
                                           * ((v22 & 0xF)
                                            + *(unsigned __int16 *)(qword_1801CC038
                                                                  + 2LL
                                                                  * (((unsigned __int8)v22 >> 4)
                                                                   + (unsigned int)*(unsigned __int16 *)(qword_1801CC038 + 2 * (v22 >> 8))))))
                                + v22;
                }
              }
              else
              {
                LOWORD(v22) = v22 - 32;
              }
            }
            if ( (_WORD)v21 != (_WORD)v22 )
            {
              v24 = (unsigned __int16)v21 - (unsigned __int16)v22;
              goto LABEL_33;
            }
          }
          ++v18;
        }
        v24 = v16 - v4;
LABEL_33:
        v5 = a2;
        v3 = a3;
        v6 = a1;
        if ( !v24 )
          return v13;
        goto LABEL_8;
      }
    }
  }
  return 0LL;
}
