/*
 * XREFs of LdrpFindLoadedDllByNameLockHeld @ 0x1800904F0
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x180091340 (LdrpLoadKnownDll.c)
 *     LdrpMapDllSearchPath @ 0x180091810 (LdrpMapDllSearchPath.c)
 *     LdrpFindExistingModule @ 0x180092F10 (LdrpFindExistingModule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpFindLoadedDllByNameLockHeld(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        char a3,
        volatile signed __int32 **a4,
        int a5)
{
  _QWORD **v7; // r15
  unsigned __int16 *v8; // rdx
  _QWORD *i; // rsi
  char v10; // cl
  volatile signed __int32 *v11; // r11
  __int64 v12; // rax
  unsigned __int16 *v13; // r10
  __int64 v14; // rdi
  unsigned __int16 *v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rax
  unsigned __int16 *v21; // r10
  __int64 v22; // rdi
  unsigned __int16 *v23; // rbx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9

  v7 = (_QWORD **)((char *)&LdrpHashTable + 16 * (a5 & 0x1F));
  v8 = a1;
  for ( i = *v7; ; i = (_QWORD *)*i )
  {
    v10 = 0;
    if ( i == v7 )
      break;
    v11 = (volatile signed __int32 *)(i - 14);
    if ( a5 == *((_DWORD *)i + 38) && ((a3 & 8) == 0 || (v11[26] & 1) != 0) )
    {
      if ( a2 )
      {
        v12 = *a2;
        if ( (_WORD)v12 == *((_WORD *)v11 + 36) )
        {
          v13 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
          v14 = *((_QWORD *)v11 + 10) - (_QWORD)v13;
          v15 = (unsigned __int16 *)((char *)v13 + v12);
          while ( v13 < v15 )
          {
            v16 = *v13;
            v17 = *(unsigned __int16 *)((char *)v13 + v14);
            if ( (_WORD)v16 != (_WORD)v17 )
            {
              if ( (unsigned int)v16 >= 0x61 )
              {
                if ( (unsigned int)v16 > 0x7A )
                {
                  if ( qword_1801CC038 && (unsigned __int16)v16 >= 0xC0u )
                    LOWORD(v16) = *(_WORD *)(qword_1801CC038
                                           + 2
                                           * ((v16 & 0xF)
                                            + *(unsigned __int16 *)(qword_1801CC038
                                                                  + 2LL
                                                                  * (((unsigned __int8)v16 >> 4)
                                                                   + (unsigned int)*(unsigned __int16 *)(qword_1801CC038 + 2 * (v16 >> 8))))))
                                + v16;
                }
                else
                {
                  LOWORD(v16) = v16 - 32;
                }
              }
              if ( (unsigned int)v17 >= 0x61 )
              {
                if ( (unsigned int)v17 > 0x7A )
                {
                  if ( qword_1801CC038 )
                  {
                    if ( (unsigned __int16)v17 >= 0xC0u )
                      LOWORD(v17) = *(_WORD *)(qword_1801CC038
                                             + 2
                                             * ((v17 & 0xF)
                                              + *(unsigned __int16 *)(qword_1801CC038
                                                                    + 2LL
                                                                    * (((unsigned __int8)v17 >> 4)
                                                                     + (unsigned int)*(unsigned __int16 *)(qword_1801CC038 + 2 * (v17 >> 8))))))
                                  + v17;
                  }
                }
                else
                {
                  LOWORD(v17) = v17 - 32;
                }
              }
              if ( (_WORD)v16 != (_WORD)v17 )
                goto LABEL_31;
            }
            ++v13;
          }
LABEL_24:
          v18 = *((_QWORD *)v11 + 19);
          v10 = 1;
          if ( *(_DWORD *)(v18 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v18 - 56LL) & 0x20) == 0 )
            _InterlockedIncrement(v11 + 69);
          *a4 = v11;
          break;
        }
      }
      else if ( (v11[26] & 0x10000000) == 0 )
      {
        v20 = *v8;
        if ( (_WORD)v20 == *((_WORD *)v11 + 44) )
        {
          v21 = (unsigned __int16 *)*((_QWORD *)v8 + 1);
          v22 = *((_QWORD *)v11 + 12) - (_QWORD)v21;
          v23 = (unsigned __int16 *)((char *)v21 + v20);
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
LABEL_31:
                v8 = a1;
                goto LABEL_32;
              }
            }
            ++v21;
          }
          goto LABEL_24;
        }
      }
    }
LABEL_32:
    ;
  }
  result = 0LL;
  if ( !v10 )
    return 3221225781LL;
  return result;
}
