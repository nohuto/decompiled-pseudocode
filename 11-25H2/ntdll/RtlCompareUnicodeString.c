/*
 * XREFs of RtlCompareUnicodeString @ 0x1800CDF90
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlCompareUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned __int16 *v3; // rbx
  _BYTE *v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int16 *v8; // r10
  signed __int64 v9; // rdi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  SIZE_T v12; // rcx

  v3 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v4 = (_BYTE *)*((_QWORD *)a2 + 1);
  v5 = (unsigned __int64)*a1 >> 1;
  v6 = (unsigned __int64)*a2 >> 1;
  v7 = v5;
  if ( v5 > v6 )
    v7 = (unsigned __int64)*a2 >> 1;
  v8 = &v3[v7];
  if ( a3 )
  {
    v9 = v4 - (_BYTE *)v3;
    while ( v3 < v8 )
    {
      v10 = *v3;
      v11 = *(unsigned __int16 *)((char *)v3 + v9);
      if ( (_WORD)v10 != (_WORD)v11 )
      {
        if ( (unsigned int)v10 >= 0x61 )
        {
          if ( (unsigned int)v10 > 0x7A )
          {
            if ( qword_1801CF038 && (unsigned __int16)v10 >= 0xC0u )
              LOWORD(v10) = *(_WORD *)(qword_1801CF038
                                     + 2
                                     * ((v10 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801CF038
                                                            + 2LL
                                                            * (((unsigned __int8)v10 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
                                                                                                 + 2 * (v10 >> 8))))))
                          + v10;
          }
          else
          {
            LOWORD(v10) = v10 - 32;
          }
        }
        if ( (unsigned int)v11 >= 0x61 )
        {
          if ( (unsigned int)v11 > 0x7A )
          {
            if ( qword_1801CF038 )
            {
              if ( (unsigned __int16)v11 >= 0xC0u )
                LOWORD(v11) = *(_WORD *)(qword_1801CF038
                                       + 2
                                       * ((v11 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CF038
                                                              + 2LL
                                                              * (((unsigned __int8)v11 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * (v11 >> 8))))))
                            + v11;
            }
          }
          else
          {
            LOWORD(v11) = v11 - 32;
          }
        }
        if ( (_WORD)v10 != (_WORD)v11 )
          return (unsigned __int16)v10 - (unsigned int)(unsigned __int16)v11;
      }
      ++v3;
    }
    return (unsigned int)(v5 - v6);
  }
  v12 = RtlCompareMemory(*((const void **)a1 + 1), v4, 2 * v7) >> 1;
  if ( v12 >= v7 )
    return (unsigned int)(v5 - v6);
  return v3[v12] - (unsigned int)*(unsigned __int16 *)&v4[2 * v12];
}
