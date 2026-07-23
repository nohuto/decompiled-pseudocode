/*
 * XREFs of ApiSetpSearchForApiSetHost @ 0x1800DB780
 * Callers:
 *     ApiSetResolveToHost @ 0x180070C20 (ApiSetResolveToHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSetHost(__int64 a1, unsigned __int16 *a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v4; // r12
  int v6; // ebx
  unsigned __int16 v7; // r9
  int v8; // r14d
  int v9; // ebx
  int v10; // edi
  unsigned __int16 *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rbp
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  int v17; // edi
  unsigned __int16 *v19; // [rsp+58h] [rbp+10h]

  v19 = a2;
  v4 = *(unsigned int *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 20);
  v7 = a3;
  v8 = 1;
LABEL_2:
  v9 = v6 - 1;
  while ( v8 <= v9 )
  {
    v10 = v7;
    v11 = a2;
    v12 = v7;
    v13 = a4 + v4 + 20LL * ((v8 + v9) >> 1);
    v14 = (unsigned __int64)*(unsigned int *)(v13 + 8) >> 1;
    if ( v7 > v14 )
      v12 = (unsigned __int64)*(unsigned int *)(v13 + 8) >> 1;
    while ( v11 < &a2[v12] )
    {
      v15 = *v11;
      v16 = *(unsigned __int16 *)((char *)v11 + a4 + *(unsigned int *)(v13 + 4) - (_QWORD)a2);
      if ( (_WORD)v15 != (_WORD)v16 )
      {
        if ( (unsigned int)v15 >= 0x61 )
        {
          if ( (unsigned int)v15 > 0x7A )
          {
            if ( qword_1801CC038 && (unsigned __int16)v15 >= 0xC0u )
              LOWORD(v15) = *(_WORD *)(qword_1801CC038
                                     + 2
                                     * ((v15 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801CC038
                                                            + 2LL
                                                            * (*(unsigned __int16 *)(qword_1801CC038 + 2 * (v15 >> 8))
                                                             + (unsigned int)((unsigned __int8)v15 >> 4)))))
                          + v15;
          }
          else
          {
            LOWORD(v15) = v15 - 32;
          }
        }
        if ( (unsigned int)v16 >= 0x61 )
        {
          if ( (unsigned int)v16 > 0x7A )
          {
            if ( qword_1801CC038 )
            {
              if ( (unsigned __int16)v16 >= 0xC0u )
                LOWORD(v16) = *(_WORD *)(qword_1801CC038
                                       + 2
                                       * ((v16 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CC038
                                                              + 2LL
                                                              * (*(unsigned __int16 *)(qword_1801CC038 + 2 * (v16 >> 8))
                                                               + (unsigned int)((unsigned __int8)v16 >> 4)))))
                            + v16;
            }
          }
          else
          {
            LOWORD(v16) = v16 - 32;
          }
        }
        if ( (_WORD)v15 != (_WORD)v16 )
        {
          v17 = (unsigned __int16)v15 - (unsigned __int16)v16;
          goto LABEL_17;
        }
      }
      ++v11;
    }
    v17 = v10 - v14;
LABEL_17:
    if ( v17 < 0 )
    {
      v6 = (v8 + v9) >> 1;
      a2 = v19;
      v7 = a3;
      goto LABEL_2;
    }
    if ( v17 <= 0 )
      return a4 + v4 + 20LL * ((v8 + v9) >> 1);
    a2 = v19;
    v8 = ((v8 + v9) >> 1) + 1;
    v7 = a3;
  }
  return v4 + a4;
}
