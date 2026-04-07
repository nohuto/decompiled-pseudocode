/*
 * XREFs of ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x1800A13D4
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18006B514 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
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
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx

  v2 = 0;
  if ( a2 > 11 )
  {
    if ( a2 <= 17 )
      return v2;
    v11 = a2 - 18;
    if ( !v11 )
      goto LABEL_27;
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_10;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_26;
    if ( v13 != 1 )
      return v2;
    goto LABEL_25;
  }
  if ( a2 == 11 )
    return v2;
  if ( a2 > 5 )
  {
    v10 = a2 - 6;
    if ( v10 )
    {
      if ( v10 != 1 )
        return v2;
      v8 = *((_DWORD *)this + 73);
      v9 = 384;
      return (v9 & v8) == v9;
    }
LABEL_25:
    v6 = *((_DWORD *)this + 73) >> 8;
    return v6 & 1;
  }
  if ( a2 == 5 )
  {
    v8 = *((_DWORD *)this + 73);
    v9 = 288;
    return (v9 & v8) == v9;
  }
  if ( !a2 )
    return (*((_BYTE *)this + 292) & 0x60) == 96;
  v3 = a2 - 1;
  if ( !v3 )
  {
LABEL_26:
    v6 = *((_DWORD *)this + 73) >> 6;
    return v6 & 1;
  }
  v4 = v3 - 1;
  if ( !v4 )
    return (*((_BYTE *)this + 292) & 0xC0) == 0xC0;
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_27:
    v6 = *((_DWORD *)this + 73) >> 5;
    return v6 & 1;
  }
  if ( v5 == 1 )
  {
LABEL_10:
    v6 = *((_DWORD *)this + 73) >> 7;
    return v6 & 1;
  }
  return v2;
}
