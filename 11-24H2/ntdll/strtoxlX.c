/*
 * XREFs of strtoxlX @ 0x180124F54
 * Callers:
 *     strtol @ 0x180125190 (strtol.c)
 *     strtolX @ 0x1801251C0 (strtolX.c)
 *     strtoul @ 0x1801251F0 (strtoul.c)
 * Callees:
 *     _errno @ 0x180108440 (_errno.c)
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     __pctype_func @ 0x180126670 (__pctype_func.c)
 */

__int64 __fastcall strtoxlX(__int64 a1, unsigned __int8 *a2, unsigned __int8 **a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // r14d
  __int64 v9; // rbp
  unsigned __int8 *v10; // rdi
  unsigned int v11; // ebx
  int v12; // esi
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  int v15; // ecx
  unsigned __int8 *v16; // rdi

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    invalid_parameter();
    return 0LL;
  }
  v9 = *a2;
  v10 = a2 + 1;
  v11 = 0;
  while ( (_pctype_func()[v9] & 8) != 0 )
    v9 = *v10++;
  v12 = a5;
  if ( (_BYTE)v9 == 45 )
  {
    v12 = a5 | 2;
  }
  else if ( (_BYTE)v9 != 43 )
  {
    goto LABEL_13;
  }
  LOBYTE(v9) = *v10++;
LABEL_13:
  if ( v6 )
  {
    if ( v6 - 2 > 0x22 )
    {
      if ( a3 )
        *a3 = a2;
      return 0LL;
    }
    if ( v6 == 16 && (_BYTE)v9 == 48 )
      goto LABEL_25;
  }
  else if ( (_BYTE)v9 == 48 )
  {
    if ( ((*v10 - 88) & 0xDF) == 0 )
    {
      v6 = 16;
LABEL_25:
      if ( ((*v10 - 88) & 0xDF) == 0 )
      {
        LOBYTE(v9) = v10[1];
        v10 += 2;
      }
      goto LABEL_27;
    }
    v6 = 8;
  }
  else
  {
    v6 = 10;
  }
LABEL_27:
  v13 = 0xFFFFFFFF / v6;
  while ( 1 )
  {
    if ( (_pctype_func()[(unsigned __int8)v9] & 4) != 0 )
    {
      v14 = (char)v9 - 48;
    }
    else
    {
      if ( (_pctype_func()[(unsigned __int8)v9] & 0x103) == 0 )
        break;
      v15 = (char)v9 - 32;
      if ( (unsigned __int8)(v9 - 97) > 0x19u )
        v15 = (char)v9;
      v14 = v15 - 55;
    }
    if ( v14 >= v6 )
      break;
    v12 |= 8u;
    if ( a6 || v11 < v13 || v11 == v13 && v14 <= 0xFFFFFFFF % v6 )
    {
      v11 = v14 + v6 * v11;
    }
    else
    {
      v12 |= 4u;
      if ( !a3 )
        break;
    }
    LOBYTE(v9) = *v10++;
  }
  v16 = v10 - 1;
  if ( (v12 & 8) == 0 )
  {
    if ( a3 )
      v16 = a2;
    v11 = 0;
    goto LABEL_56;
  }
  if ( (v12 & 4) != 0 )
    goto LABEL_52;
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 2) != 0 )
    {
      if ( v11 <= 0x80000000 )
        goto LABEL_56;
LABEL_52:
      if ( !a6 )
      {
        *errno() = 34;
        if ( (v12 & 1) != 0 )
          v11 = -1;
        else
          v11 = ((v12 & 2) != 0) + 0x7FFFFFFF;
      }
      goto LABEL_56;
    }
    if ( v11 > 0x7FFFFFFF )
      goto LABEL_52;
  }
LABEL_56:
  if ( a3 )
    *a3 = v16;
  if ( (v12 & 2) != 0 )
    return -v11;
  return v11;
}
