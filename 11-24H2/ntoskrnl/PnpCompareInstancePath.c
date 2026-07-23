/*
 * XREFs of PnpCompareInstancePath @ 0x140994780
 * Callers:
 *     FindNodeOrParent @ 0x1403D9E20 (FindNodeOrParent.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403E5040 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall PnpCompareInstancePath(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 *v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int16 *v6; // rdx
  struct _LIST_ENTRY *Flink; // rbp
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int16 *v11; // rdi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  int v14; // r11d
  __int64 result; // rax

  v3 = *(unsigned __int16 **)(a3 + 8);
  v4 = *((_QWORD *)v3 + 1);
  v5 = (unsigned __int64)*v3 >> 1;
  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  v9 = v8;
  if ( v8 > v5 )
    v9 = v5;
  v10 = v4 - (_QWORD)v6;
  v11 = &v6[v9];
  while ( v6 < v11 )
  {
    v12 = *v6;
    v13 = *(unsigned __int16 *)((char *)v6 + v10);
    if ( (_WORD)v12 != (_WORD)v13 )
    {
      if ( (unsigned int)v12 >= 0x61 )
      {
        if ( (unsigned int)v12 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v12 >= 0xC0u )
            LOWORD(v12) = *((_WORD *)&Flink->Flink
                          + (v12 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v12 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v12 >> 8))))
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
          if ( Flink && (unsigned __int16)v13 >= 0xC0u )
            LOWORD(v13) = *((_WORD *)&Flink->Flink
                          + (v13 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v13 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v13 >> 8))))
                        + v13;
        }
        else
        {
          LOWORD(v13) = v13 - 32;
        }
      }
      if ( (_WORD)v12 != (_WORD)v13 )
      {
        v14 = (unsigned __int16)v12 - (unsigned __int16)v13;
        goto LABEL_15;
      }
    }
    ++v6;
  }
  v14 = v8 - v5;
LABEL_15:
  result = 0LL;
  if ( v14 >= 0 )
  {
    LOBYTE(result) = v14 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
