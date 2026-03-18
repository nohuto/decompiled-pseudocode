/*
 * XREFs of AuthzBasepIsValidExpression @ 0x140369B90
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepSupportSetOperation @ 0x140369D44 (AuthzBasepSupportSetOperation.c)
 */

char __fastcall AuthzBasepIsValidExpression(unsigned __int8 a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rsi
  unsigned __int8 v5; // r11
  unsigned int v6; // r10d
  int v9; // edi
  __int64 v10; // r9
  int v11; // r10d
  unsigned int v12; // r8d
  int v13; // r11d
  int v15; // ecx

  v4 = 0LL;
  v5 = a1;
  v6 = 0;
  *a4 = 0;
  while ( v6 < a3 )
  {
    v9 = *(_DWORD *)(a2 + 40LL * v6 + 12);
    if ( !v9 )
      return 0;
    if ( !(unsigned __int8)AuthzBasepSupportSetOperation(v5) && v9 != 1 && *(_DWORD *)(a2 + 8 * v10 + 4) > 1u )
    {
LABEL_37:
      *a4 = 1;
      return 0;
    }
    v6 = v11 + 1;
  }
  if ( !(unsigned __int8)AuthzBasepSupportSetOperation(v5)
    && v12 == 2
    && (*(_WORD *)a2 & 0xFFFB) != 0
    && *(_DWORD *)(a2 + 52) == 1
    && *(_BYTE *)(a2 + 44) )
  {
    return 0;
  }
  if ( v13 == 163 )
  {
LABEL_13:
    if ( v12 != 2
      || *(_DWORD *)(a2 + 12) == 1
      || ((_BYTE)v13 == 0x88 || (_BYTE)v13 == 0x8F) && *(_DWORD *)(a2 + 52) == 1 && !*(_BYTE *)(a2 + 44) )
    {
      return 0;
    }
  }
  else if ( v13 == 162 )
  {
    if ( v12 == 2 || v12 == 1 && *(_DWORD *)(a2 + 12) == 1 )
      return 0;
  }
  else
  {
    switch ( v13 )
    {
      case 128:
      case 129:
      case 130:
      case 131:
      case 132:
      case 133:
      case 134:
      case 136:
      case 142:
      case 143:
        goto LABEL_13;
      case 135:
      case 141:
        if ( v12 == 1 )
        {
          v15 = *(_DWORD *)(a2 + 12);
          if ( ((v15 - 1) & 0xFFFFFFF9) != 0 || v15 == 7 )
            return 1;
        }
        return 0;
      case 137:
      case 138:
      case 139:
      case 140:
      case 144:
      case 145:
      case 146:
      case 147:
        if ( v12 != 1 )
          return 0;
        if ( *(_DWORD *)(a2 + 12) != 1 && *(_WORD *)a2 != 5 )
          goto LABEL_37;
        return 1;
      case 160:
      case 161:
        break;
      default:
        return 1;
    }
    while ( (unsigned int)v4 < v12 )
    {
      if ( *(_DWORD *)(a2 + 40 * v4 + 12) == 1 )
        return 0;
      v4 = (unsigned int)(v4 + 1);
    }
  }
  return 1;
}
