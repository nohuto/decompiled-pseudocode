/*
 * XREFs of _GetBaseTypeSize @ 0x14045264C
 * Callers:
 *     _PnpValidatePropertyData @ 0x1408B6740 (_PnpValidatePropertyData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseTypeSize(__int16 a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx

  v1 = a1 & 0xFFF;
  if ( v1 <= 0xD )
  {
    if ( v1 != 13 )
    {
      if ( v1 <= 6 )
      {
        if ( v1 != 6 )
        {
          if ( !v1 )
            return 0LL;
          v11 = v1 - 1;
          if ( !v11 )
            return 0LL;
          v12 = v11 - 1;
          if ( !v12 )
            return 1LL;
          v13 = v12 - 1;
          if ( !v13 )
            return 1LL;
          v10 = v13 - 1;
          if ( !v10 )
            return 2LL;
          goto LABEL_19;
        }
        return 4LL;
      }
      v14 = v1 - 7;
      if ( !v14 )
        return 4LL;
      v15 = v14 - 1;
      if ( !v15 )
        return 8LL;
      v16 = v15 - 1;
      if ( !v16 )
        return 8LL;
      v17 = v16 - 1;
      if ( !v17 )
        return 4LL;
      v18 = v17 - 1;
      if ( !v18 )
        return 8LL;
      if ( v18 != 1 )
        return 0LL;
    }
    return 16LL;
  }
  result = 20LL;
  if ( v1 <= 0x14 )
  {
    if ( v1 == 20 )
      return 2LL;
    v3 = v1 - 14;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( !v6 )
            return 1LL;
          v19 = v6 - 1;
          if ( !v19 )
            return 2LL;
          return v19 == 1;
        }
      }
    }
    return 8LL;
  }
  v7 = v1 - 21;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
LABEL_19:
          if ( v10 == 1 )
            return 2LL;
          return 0LL;
        }
      }
    }
    return 4LL;
  }
  return result;
}
