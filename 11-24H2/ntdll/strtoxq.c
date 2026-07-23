/*
 * XREFs of strtoxq @ 0x180126680
 * Callers:
 *     _strtoi64 @ 0x1801268A8 (_strtoi64.c)
 * Callees:
 *     _errno @ 0x180108440 (_errno.c)
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     __pctype_func @ 0x180126670 (__pctype_func.c)
 */

unsigned __int64 __fastcall strtoxq(__int64 a1, unsigned __int8 *a2, unsigned __int8 **a3, int a4, int a5)
{
  int v5; // r14d
  __int64 v7; // rbp
  unsigned __int8 *v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // esi
  unsigned int v12; // ecx
  int v13; // ecx
  __int64 v14; // r8
  unsigned __int8 *v15; // rbx
  unsigned __int64 v18; // [rsp+80h] [rbp+18h]

  v5 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (unsigned int)(a4 - 2) > 0x22 )
  {
    invalid_parameter();
    return 0LL;
  }
  v7 = *a2;
  v8 = a2 + 1;
  v9 = 0LL;
  if ( (_pctype_func()[v7] & 8) != 0 )
  {
    do
    {
      do
        v10 = *v8++;
      while ( (_BYTE)v10 == (_BYTE)v7 );
      LOBYTE(v7) = v10;
    }
    while ( (_pctype_func()[v10] & 8) != 0 );
  }
  v11 = a5;
  if ( (_BYTE)v7 == 45 )
  {
    v11 = a5 | 2;
  }
  else if ( (_BYTE)v7 != 43 )
  {
    goto LABEL_13;
  }
  LOBYTE(v7) = *v8++;
LABEL_13:
  if ( v5 )
  {
    if ( v5 != 16 || (_BYTE)v7 != 48 )
      goto LABEL_23;
    goto LABEL_21;
  }
  if ( (_BYTE)v7 == 48 )
  {
    if ( ((*v8 - 88) & 0xDF) != 0 )
    {
      v5 = 8;
      goto LABEL_23;
    }
    v5 = 16;
LABEL_21:
    if ( ((*v8 - 88) & 0xDF) == 0 )
    {
      LOBYTE(v7) = v8[1];
      v8 += 2;
    }
    goto LABEL_23;
  }
  v5 = 10;
LABEL_23:
  v18 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( (_pctype_func()[(unsigned __int8)v7] & 4) != 0 )
    {
      v12 = (char)v7 - 48;
    }
    else
    {
      if ( (_pctype_func()[(unsigned __int8)v7] & 0x103) == 0 )
        break;
      v13 = (char)v7 - 32;
      if ( (unsigned __int8)(v7 - 97) > 0x19u )
        v13 = (char)v7;
      v12 = v13 - 55;
    }
    if ( v12 >= v5 )
      break;
    v11 |= 8u;
    if ( v9 < v18 )
    {
      v14 = v12;
LABEL_40:
      v9 = v14 + v5 * v9;
      goto LABEL_41;
    }
    if ( v9 == v18 )
    {
      v14 = v12;
      if ( v12 <= 0xFFFFFFFFFFFFFFFFuLL % v5 )
        goto LABEL_40;
    }
    v11 |= 4u;
    if ( !a3 )
      break;
LABEL_41:
    LOBYTE(v7) = *v8++;
  }
  v15 = v8 - 1;
  if ( (v11 & 8) != 0 )
  {
    if ( (v11 & 4) == 0 )
    {
      if ( (v11 & 1) != 0 )
        goto LABEL_51;
      if ( (v11 & 2) != 0 )
      {
        if ( v9 <= 0x8000000000000000uLL )
          goto LABEL_51;
      }
      else if ( v9 <= 0x7FFFFFFFFFFFFFFFLL )
      {
        goto LABEL_51;
      }
    }
    *errno() = 34;
    if ( (v11 & 1) != 0 )
      v9 = -1LL;
    else
      v9 = ((v11 & 2) != 0) + 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    if ( a3 )
      v15 = a2;
    v9 = 0LL;
  }
LABEL_51:
  if ( a3 )
    *a3 = v15;
  if ( (v11 & 2) != 0 )
    return -(__int64)v9;
  return v9;
}
