/*
 * XREFs of AuthzBasepIsValidExpression @ 0x140324ADC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepSupportSetOperation @ 0x140324D04 (AuthzBasepSupportSetOperation.c)
 */

bool __fastcall AuthzBasepIsValidExpression(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  __int64 v7; // r10
  int v8; // r9d
  unsigned int v9; // r8d
  __int64 v10; // r10
  __int64 v11; // r11
  unsigned int v12; // ecx
  bool v13; // zf
  int v15; // ecx
  unsigned int v16; // ecx

  v4 = (unsigned __int8)a1;
  *a4 = 0;
  v5 = 0;
  v7 = a2;
  while ( v5 < a3 )
  {
    if ( !*(_DWORD *)(v7 + 40LL * v5 + 12) )
      return 0;
    LOBYTE(a1) = v4;
    if ( !(unsigned __int8)AuthzBasepSupportSetOperation(a1) && v8 != 1 && *(_DWORD *)(v7 + 40LL * v5 + 4) > 1u )
      goto LABEL_41;
    ++v5;
  }
  LOBYTE(a1) = v4;
  if ( !(unsigned __int8)AuthzBasepSupportSetOperation(a1)
    && v9 == 2
    && (*(_WORD *)v10 & 0xFFFB) != 0
    && *(_DWORD *)(v10 + 52) == 1
    && *(_BYTE *)(v10 + 44) != (_BYTE)v11 )
  {
    return 0;
  }
  if ( v4 <= 0x8C )
  {
    if ( v4 == 140 )
      goto LABEL_38;
    if ( v4 > 0x86 )
    {
      if ( v4 == 135 )
        goto LABEL_26;
      if ( v4 != 136 )
      {
        v16 = v4 - 137;
        if ( v4 == 137 )
          goto LABEL_38;
        goto LABEL_62;
      }
    }
    else if ( v4 != 134 && v4 != 128 && v4 != 129 && v4 != 130 && v4 != 131 )
    {
      v12 = v4 - 132;
      if ( v4 != 132 )
        goto LABEL_18;
    }
LABEL_19:
    if ( v9 != 2 || *(_DWORD *)(v10 + 12) == 1 )
      return 0;
    if ( (_BYTE)v4 != 0x88 && (_BYTE)v4 != 0x8F || *(_DWORD *)(v10 + 52) != 1 )
      return 1;
    v13 = *(_BYTE *)(v10 + 44) == (unsigned __int8)v11;
    return !v13;
  }
  if ( v4 <= 0x92 )
  {
    if ( v4 == 146 )
      goto LABEL_38;
    if ( v4 == 141 )
    {
LABEL_26:
      if ( v9 != 1 )
        return 0;
      v15 = *(_DWORD *)(v10 + 12);
      return ((v15 - 1) & 0xFFFFFFF9) != 0 || v15 == 7;
    }
    if ( v4 != 142 )
    {
      v16 = v4 - 143;
      if ( v4 != 143 )
      {
LABEL_62:
        if ( v16 - 1 >= 2 )
          return 1;
        goto LABEL_38;
      }
    }
    goto LABEL_19;
  }
  if ( v4 == 147 )
  {
LABEL_38:
    if ( v9 != 1 )
      return 0;
    if ( *(_DWORD *)(v10 + 12) != 1 && *(_WORD *)v10 != 5 )
    {
LABEL_41:
      *a4 = 1;
      return 0;
    }
    return 1;
  }
  if ( v4 == 160 || v4 == 161 )
  {
    while ( (unsigned int)v11 < v9 )
    {
      if ( *(_DWORD *)(v10 + 40 * v11 + 12) == 1 )
        return 0;
      v11 = (unsigned int)(v11 + 1);
    }
    return 1;
  }
  v12 = v4 - 162;
  if ( v4 != 162 )
  {
LABEL_18:
    if ( v12 != 1 )
      return 1;
    goto LABEL_19;
  }
  if ( v9 == 2 )
    return 0;
  if ( v9 != 1 )
    return 1;
  v13 = *(_DWORD *)(v10 + 12) == 1;
  return !v13;
}
