/*
 * XREFs of ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180022400
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180022998 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180023E20 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CAccent::_IsShadowPartApplicableFromFlags(CAccent *this, int a2)
{
  char v2; // r8
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // r8d
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // edx
  int v14; // edx

  v2 = 0;
  if ( a2 <= 11 )
  {
    if ( a2 == 11 )
      return v2;
    if ( a2 > 5 )
    {
      v9 = a2 - 6;
      if ( !v9 )
      {
LABEL_21:
        v6 = *((_DWORD *)this + 61) >> 8;
        return v6 & 1;
      }
      if ( v9 != 1 )
        return v2;
      v10 = *((_DWORD *)this + 61);
      v11 = 384;
    }
    else
    {
      if ( a2 != 5 )
      {
        if ( !a2 )
          return (*((_BYTE *)this + 244) & 0x60) == 96;
        v12 = a2 - 1;
        if ( !v12 )
          goto LABEL_6;
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 != 1 )
              return v2;
            goto LABEL_22;
          }
LABEL_19:
          v6 = *((_DWORD *)this + 61) >> 5;
          return v6 & 1;
        }
        return (*((_BYTE *)this + 244) & 0xC0) == 0xC0;
      }
      v10 = *((_DWORD *)this + 61);
      v11 = 288;
    }
    return (v11 & v10) == v11;
  }
  if ( a2 <= 17 )
    return v2;
  v3 = a2 - 18;
  if ( !v3 )
    goto LABEL_19;
  v4 = v3 - 1;
  if ( !v4 )
  {
LABEL_22:
    v6 = *((_DWORD *)this + 61) >> 7;
    return v6 & 1;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      return v2;
    goto LABEL_21;
  }
LABEL_6:
  v6 = *((_DWORD *)this + 61) >> 6;
  return v6 & 1;
}
