/*
 * XREFs of RtlGetSystemGlobalData @ 0x140456950
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 __fastcall RtlGetSystemGlobalData(int a1, _WORD *a2, int a3)
{
  int v4; // ecx
  __int64 v5; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  struct _LIST_ENTRY **p_Blink; // rax
  __int16 v15; // ax
  struct _LIST_ENTRY *v16; // rdx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  char v24; // al
  struct _LIST_ENTRY *Flink; // [rsp+48h] [rbp+20h]

  if ( a1 > 9 )
  {
    v17 = a1 - 10;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( a3 != 2 )
          return 3221225990LL;
        v15 = MEMORY[0xFFFFF780000002D6];
        goto LABEL_32;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          if ( a3 == 4 )
          {
            v13 = MEMORY[0xFFFFF780000002E4];
            goto LABEL_22;
          }
          return 3221225990LL;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          if ( a3 == 4 )
          {
            v13 = MEMORY[0xFFFFF780000002F0];
            goto LABEL_22;
          }
          return 3221225990LL;
        }
        v22 = v21 - 2;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 == 1 )
            {
              if ( a3 == 8 )
              {
                v5 = MEMORY[0xFFFFF780000003B8];
                goto LABEL_6;
              }
              return 3221225990LL;
            }
            return 3221225485LL;
          }
          if ( a3 != 2 )
            return 3221225990LL;
          v15 = MEMORY[0xFFFFF780000003C6];
LABEL_32:
          *a2 = v15;
          return 0LL;
        }
        if ( a3 != 1 )
          return 3221225990LL;
        v24 = MEMORY[0xFFFFF780000003C6];
      }
      else
      {
        if ( a3 != 1 )
          return 3221225990LL;
        v24 = MEMORY[0xFFFFF780000002EC];
      }
    }
    else
    {
      if ( a3 != 1 )
        return 3221225990LL;
      v24 = MEMORY[0xFFFFF780000002D4];
    }
    *(_BYTE *)a2 = v24;
    return 0LL;
  }
  if ( a1 == 9 )
  {
    if ( a3 == 8 )
    {
      v5 = MEMORY[0xFFFFF780000002C8];
      goto LABEL_6;
    }
    return 3221225990LL;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    if ( a3 == 8 )
    {
      v5 = MEMORY[0xFFFFF78000000250];
LABEL_6:
      *(_QWORD *)a2 = v5;
      return 0LL;
    }
    return 3221225990LL;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( a3 != 8 )
      return 3221225990LL;
    while ( 1 )
    {
      Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
      if ( MEMORY[0xFFFFF7800000000C] == MEMORY[0xFFFFF78000000010] )
        break;
      _mm_pause();
    }
    goto LABEL_44;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a3 != 8 )
      return 3221225990LL;
    if ( PsIsCurrentThreadInServerSilo() )
      v16 = PsGetCurrentServerSiloGlobals()[80].Blink + 37;
    else
      v16 = (struct _LIST_ENTRY *)0xFFFFF78000000020LL;
    while ( 1 )
    {
      Flink = v16->Flink;
      if ( (unsigned __int64)v16->Flink >> 32 == LODWORD(v16->Blink) )
        break;
      _mm_pause();
    }
LABEL_44:
    *(_QWORD *)a2 = Flink;
    return 0LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 != 2 )
      return 3221225990LL;
    v15 = MEMORY[0xFFFFF7800000002C];
    goto LABEL_32;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 != 2 )
      return 3221225990LL;
    v15 = MEMORY[0xFFFFF7800000002E];
    goto LABEL_32;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a3 == 4 )
    {
      if ( PsIsCurrentThreadInServerSilo() )
        p_Blink = &PsGetCurrentServerSiloGlobals()[80].Blink[36].Blink;
      else
        p_Blink = (struct _LIST_ENTRY **)0xFFFFF78000000240LL;
      *(_DWORD *)a2 = *(_DWORD *)p_Blink;
      return 0LL;
    }
    return 3221225990LL;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a3 == 4 )
    {
      v13 = MEMORY[0xFFFFF7800000026C];
      goto LABEL_22;
    }
    return 3221225990LL;
  }
  if ( v12 == 1 )
  {
    if ( a3 == 4 )
    {
      v13 = MEMORY[0xFFFFF78000000270];
LABEL_22:
      *(_DWORD *)a2 = v13;
      return 0LL;
    }
    return 3221225990LL;
  }
  return 3221225485LL;
}
