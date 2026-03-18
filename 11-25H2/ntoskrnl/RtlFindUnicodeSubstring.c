/*
 * XREFs of RtlFindUnicodeSubstring @ 0x140976ED0
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14072ABA8 (PiDrvDbFindSystemFilePathToken.c)
 *     PiDrvDbRegisterNode @ 0x14072C178 (PiDrvDbRegisterNode.c)
 *     CmpTraceSecurityChanging @ 0x140976E1C (CmpTraceSecurityChanging.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1, __int64 a2)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v5; // rdx
  char v6; // r8
  size_t v7; // rdi
  struct _LIST_ENTRY *Flink; // r11
  __int64 v9; // rax
  char *v11; // rbx
  char *v12; // rsi
  unsigned __int16 *v13; // rbp
  unsigned __int16 *v14; // r10
  bool v15; // zf
  signed __int64 v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = *v5;
  Flink = CurrentServerSiloGlobals[75].Flink;
  v9 = *a1;
  if ( (unsigned __int16)v9 >= (unsigned __int16)v7 )
  {
    v11 = (char *)*((_QWORD *)a1 + 1);
    v12 = &v11[v9 - v7];
    if ( v6 )
    {
      v13 = (unsigned __int16 *)(v7 + *((_QWORD *)v5 + 1));
      while ( v11 <= v12 )
      {
        v14 = *(unsigned __int16 **)(a2 + 8);
        v15 = v14 == v13;
        if ( v14 < v13 )
        {
          v16 = v11 - (char *)v14;
          do
          {
            v17 = *(unsigned __int16 *)((char *)v14 + v16);
            v18 = *v14;
            if ( (_WORD)v17 != (_WORD)v18 )
            {
              if ( (unsigned int)v17 >= 0x61 )
              {
                if ( (unsigned int)v17 > 0x7A )
                {
                  if ( Flink && (unsigned __int16)v17 >= 0xC0u )
                    LOWORD(v17) = *((_WORD *)&Flink->Flink
                                  + (v17 & 0xF)
                                  + *((unsigned __int16 *)&Flink->Flink
                                    + ((unsigned __int8)v17 >> 4)
                                    + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v17 >> 8))))
                                + v17;
                }
                else
                {
                  LOWORD(v17) = v17 - 32;
                }
              }
              if ( (unsigned int)v18 >= 0x61 )
              {
                if ( (unsigned int)v18 > 0x7A )
                {
                  if ( Flink )
                  {
                    if ( (unsigned __int16)v18 >= 0xC0u )
                      LOWORD(v18) = *((_WORD *)&Flink->Flink
                                    + (v18 & 0xF)
                                    + *((unsigned __int16 *)&Flink->Flink
                                      + ((unsigned __int8)v18 >> 4)
                                      + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v18 >> 8))))
                                  + v18;
                  }
                }
                else
                {
                  LOWORD(v18) = v18 - 32;
                }
              }
              if ( (_WORD)v17 != (_WORD)v18 )
                break;
            }
            ++v14;
          }
          while ( v14 < v13 );
          v15 = v14 == v13;
        }
        if ( v15 )
          return v11;
        v11 += 2;
      }
    }
    else
    {
      while ( v11 <= v12 )
      {
        if ( !memcmp(v11, *(const void **)(a2 + 8), v7) )
          return v11;
        v11 += 2;
      }
    }
  }
  return 0LL;
}
