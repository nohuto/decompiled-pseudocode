/*
 * XREFs of sub_1800C1C74 @ 0x1800C1C74
 * Callers:
 *     sub_1800BF8BC @ 0x1800BF8BC (sub_1800BF8BC.c)
 *     sub_1800BF9CC @ 0x1800BF9CC (sub_1800BF9CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C1C74(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx

  if ( a2 > 42 )
  {
    if ( a2 <= 61 )
    {
      if ( a2 == 61 )
      {
        *(_QWORD *)a1 = 13LL;
        return a1;
      }
      v11 = a2 - 45;
      if ( !v11 )
      {
        *(_QWORD *)a1 = 1LL;
        return a1;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        *(_QWORD *)a1 = 7LL;
        return a1;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        *(_QWORD *)a1 = 18LL;
        return a1;
      }
      v14 = v13 - 2;
      if ( !v14 )
      {
        *(_QWORD *)a1 = 14LL;
        return a1;
      }
      v15 = v14 - 5;
      if ( !v15 )
      {
        *(_QWORD *)a1 = 19LL;
        return a1;
      }
      if ( v15 == 3 )
      {
        *(_QWORD *)a1 = 12LL;
        return a1;
      }
      goto LABEL_16;
    }
    v16 = a2 - 77;
    if ( !v16 )
    {
      *(_QWORD *)a1 = 22LL;
      return a1;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 9;
      if ( !v18 )
      {
        *(_QWORD *)a1 = 16LL;
        return a1;
      }
      v19 = v18 - 4;
      if ( v19 )
      {
        v20 = v19 - 12;
        if ( v20 )
        {
          if ( v20 != 4 )
            goto LABEL_16;
          *(_DWORD *)a1 = 24;
        }
        else
        {
          *(_DWORD *)a1 = 23;
        }
        *(_DWORD *)(a1 + 4) = 2;
        return a1;
      }
      *(_DWORD *)a1 = 16;
    }
    else
    {
      *(_DWORD *)a1 = 22;
    }
    *(_DWORD *)(a1 + 4) = 1;
    return a1;
  }
  if ( a2 == 42 )
  {
    *(_QWORD *)a1 = 8LL;
    return a1;
  }
  if ( a2 > 16 )
  {
    v6 = a2 - 17;
    if ( !v6 )
    {
      *(_QWORD *)a1 = 9LL;
      return a1;
    }
    v7 = v6 - 11;
    if ( !v7 )
    {
      *(_QWORD *)a1 = 15LL;
      return a1;
    }
    v8 = v7 - 2;
    if ( !v8 )
    {
      *(_QWORD *)a1 = 17LL;
      return a1;
    }
    v9 = v8 - 4;
    if ( !v9 )
    {
      *(_QWORD *)a1 = 20LL;
      return a1;
    }
    v10 = v9 - 6;
    if ( !v10 )
    {
      *(_QWORD *)a1 = 2LL;
      return a1;
    }
    if ( v10 == 1 )
    {
      *(_QWORD *)a1 = 3LL;
      return a1;
    }
    goto LABEL_16;
  }
  if ( a2 == 16 )
  {
    *(_QWORD *)a1 = 4LL;
    return a1;
  }
  if ( !a2 )
    goto LABEL_16;
  v2 = a2 - 2;
  if ( !v2 )
  {
    *(_QWORD *)a1 = 6LL;
    return a1;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    *(_QWORD *)a1 = 11LL;
    return a1;
  }
  v4 = v3 - 3;
  if ( !v4 )
  {
    *(_QWORD *)a1 = 5LL;
    return a1;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    *(_QWORD *)a1 = 10LL;
    return a1;
  }
  if ( v5 != 3 )
  {
LABEL_16:
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  *(_QWORD *)a1 = 21LL;
  return a1;
}
