/*
 * XREFs of ?_IsIdentityEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NXZ @ 0x1801400D0
 * Callers:
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18013F0D0 (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_IsIdentityEscape(
        __int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx

  v1 = *(_DWORD *)(a1 + 128);
  v2 = *(unsigned __int16 *)(a1 + 120);
  if ( (v1 & 0x400000) != 0 )
  {
    v3 = v2 - 68;
    if ( !v3 )
      return 0;
    v4 = v3 - 15;
    if ( !v4 )
      return 0;
    v5 = v4 - 4;
    if ( !v5 )
      return 0;
    v6 = v5 - 12;
    if ( !v6 )
      return 0;
    v7 = v6 - 1;
    if ( !v7 )
      return 0;
    v8 = v7 - 15;
    return v8 && v8 != 4;
  }
  if ( v2 > 0x2F )
  {
    v17 = v2 - 63;
    if ( v17 )
    {
      v18 = v17 - 28;
      if ( !v18 )
        return 1;
      v19 = v18 - 1;
      if ( !v19 )
        return 1;
      v20 = v19 - 2;
      if ( !v20 )
        return 1;
      v21 = v20 - 29;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( !v22 )
          return 1;
        if ( v22 != 1 )
          return 0;
      }
    }
    goto LABEL_28;
  }
  if ( v2 != 47 )
  {
    v10 = v2 - 34;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( !v11 )
        return 1;
      v12 = v11 - 4;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
              return v15 == 3;
            goto LABEL_28;
          }
          return 1;
        }
      }
LABEL_28:
      v16 = v1 >> 23;
      return v16 & 1;
    }
  }
  v16 = HIBYTE(v1);
  return v16 & 1;
}
