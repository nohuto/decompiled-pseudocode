/*
 * XREFs of CompareUnicodeStrings @ 0x140976270
 * Callers:
 *     RtlInsertUnicodePrefix @ 0x140975DE0 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x140975F60 (RtlFindUnicodePrefix.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CompareUnicodeStrings(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v4; // rdx
  unsigned int v5; // r8d
  unsigned __int16 *v6; // r11
  __int64 v7; // rbp
  struct _LIST_ENTRY *Flink; // r15
  unsigned int v9; // r14d
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned int v14; // r10d
  __int64 v15; // rcx
  unsigned __int16 *v16; // r11
  unsigned __int16 *v17; // rbx
  _WORD *v19; // rcx
  __int64 v20; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = *v6 >> 1;
  Flink = CurrentServerSiloGlobals[75].Flink;
  v9 = *v4 >> 1;
  if ( (_DWORD)v7 == 1 && **((_WORD **)v6 + 1) == 92 )
  {
    if ( v9 > 1 )
    {
      if ( **((_WORD **)v4 + 1) == 92 )
        return 1LL;
      goto LABEL_7;
    }
LABEL_3:
    v10 = *v4 >> 1;
    goto LABEL_8;
  }
  if ( (unsigned int)v7 >= v9 )
    goto LABEL_3;
LABEL_7:
  v10 = *v6 >> 1;
LABEL_8:
  if ( v5 > v10 )
    v5 = v10;
  v11 = 0;
  LOWORD(v12) = 0;
  LOWORD(v13) = 0;
  v14 = 0;
  if ( v5 )
  {
    v19 = (_WORD *)*((_QWORD *)v4 + 1);
    v20 = *((_QWORD *)v6 + 1) - (_QWORD)v19;
    do
    {
      LOWORD(v12) = *(_WORD *)((char *)v19 + v20);
      LOWORD(v13) = *v19;
      if ( (_WORD)v12 != *v19 )
        break;
      ++v14;
      ++v19;
    }
    while ( v14 < v5 );
  }
  if ( v14 != v5 )
    goto LABEL_25;
  v15 = 2LL * v14;
  v16 = (unsigned __int16 *)(v15 + *((_QWORD *)v6 + 1));
  v17 = (unsigned __int16 *)(v15 + *(_QWORD *)(a2 + 8));
  if ( v14 < v10 )
  {
    while ( 1 )
    {
      v12 = *v16++;
      v13 = *v17++;
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
          break;
      }
      if ( ++v14 >= v10 )
        goto LABEL_15;
    }
LABEL_25:
    if ( v14 < v10 )
    {
      if ( (_WORD)v12 == 92 )
        return 0LL;
      if ( (_WORD)v13 == 92 )
        return 3LL;
      if ( (unsigned __int16)v12 < (unsigned __int16)v13 )
        return 0LL;
      if ( (unsigned __int16)v12 > (unsigned __int16)v13 )
        return 3LL;
    }
  }
LABEL_15:
  if ( (unsigned int)v7 < v9 )
  {
    LOBYTE(v11) = *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * v7) == 92;
    return v11;
  }
  else
  {
    LOBYTE(v11) = (unsigned int)v7 > v9;
    return v11 + 2;
  }
}
