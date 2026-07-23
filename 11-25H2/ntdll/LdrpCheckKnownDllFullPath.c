/*
 * XREFs of LdrpCheckKnownDllFullPath @ 0x18006D050
 * Callers:
 *     LdrpLoadKnownDll @ 0x18006CF10 (LdrpLoadKnownDll.c)
 * Callees:
 *     <none>
 */

char __fastcall LdrpCheckKnownDllFullPath(__int64 a1, __int64 a2)
{
  unsigned __int16 i; // ax
  __int16 v4; // dx
  __int64 v5; // rdx
  __int16 v6; // ax
  __int64 v7; // r8
  char *v8; // r10
  unsigned __int16 v9; // r8
  char *v10; // r11
  signed __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9

  if ( !LdrpKnownDllPath.Length )
    return 0;
  for ( i = *(_WORD *)a1 >> 1; i; --i )
  {
    v4 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * i - 2);
    if ( v4 == 92 )
      break;
    if ( v4 == 47 )
      break;
  }
  v5 = i;
  v6 = 2 * i;
  v7 = *(_QWORD *)(a1 + 8) + 2 * v5;
  *(_QWORD *)(a2 + 8) = v7;
  *(_WORD *)a2 = *(_WORD *)a1 - v6;
  *(_WORD *)(a2 + 2) = *(_WORD *)(a1 + 2) - v6;
  v8 = *(char **)(a1 + 8);
  v9 = v7 - (_WORD)v8 - 2;
  if ( v9 != LdrpKnownDllPath.Length )
    return 0;
  v10 = &v8[v9];
  v11 = (char *)LdrpKnownDllPath.Buffer - v8;
  while ( 1 )
  {
    if ( v8 >= v10 )
      return 1;
    v12 = *(unsigned __int16 *)v8;
    v13 = *(unsigned __int16 *)&v8[v11];
    if ( (_WORD)v12 != (_WORD)v13 )
    {
      if ( (unsigned int)v12 >= 0x61 )
      {
        if ( (unsigned int)v12 > 0x7A )
        {
          if ( qword_1801CF038 && (unsigned __int16)v12 >= 0xC0u )
            LOWORD(v12) = *(_WORD *)(qword_1801CF038
                                   + 2
                                   * ((v12 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CF038
                                                          + 2LL
                                                          * (((unsigned __int8)v12 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
                                                                                               + 2 * (v12 >> 8))))))
                        + v12;
        }
        else
        {
          LOWORD(v12) = v12 - 32;
        }
      }
      if ( (unsigned int)v13 >= 0x61 )
      {
        if ( (unsigned int)v13 > 0x7A )
        {
          if ( qword_1801CF038 )
          {
            if ( (unsigned __int16)v13 >= 0xC0u )
              LOWORD(v13) = *(_WORD *)(qword_1801CF038
                                     + 2
                                     * ((v13 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801CF038
                                                            + 2LL
                                                            * (((unsigned __int8)v13 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
                                                                                                 + 2 * (v13 >> 8))))))
                          + v13;
          }
        }
        else
        {
          LOWORD(v13) = v13 - 32;
        }
      }
      if ( (_WORD)v12 != (_WORD)v13 )
        break;
    }
    v8 += 2;
  }
  return 0;
}
