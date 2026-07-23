/*
 * XREFs of ArbpUpdatePriority @ 0x140AA7F00
 * Callers:
 *     ArbGetNextAllocationRange @ 0x140702FF0 (ArbGetNextAllocationRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArbpUpdatePriority(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  char v6; // r9
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r10
  bool v12; // cf
  unsigned __int64 v13; // rcx

  v4 = *((unsigned int *)a2 + 8);
  result = (unsigned int)(v4 - 2147483645);
  if ( (unsigned int)result <= 1 )
    goto LABEL_24;
  v6 = *(_BYTE *)a2[5] & 1;
  if ( (_DWORD)v4 )
  {
    result = *((unsigned int *)a2 + 9);
    if ( (result & 2) == 0 )
    {
      if ( (int)v4 <= 0 )
        v4 = (unsigned int)-(int)v4;
      v8 = *(_QWORD **)(a1 + 64);
      v7 = &v8[2 * v4];
      goto LABEL_8;
    }
LABEL_24:
    *((_DWORD *)a2 + 8) = 0x7FFFFFFF;
    return result;
  }
  v7 = *(_QWORD **)(a1 + 64);
  v8 = v7;
LABEL_8:
  v9 = (unsigned __int64)&v8[2 * *(unsigned __int16 *)(a1 + 56)];
  while ( 1 )
  {
    if ( (unsigned __int64)v7 >= v9 )
    {
      result = 2147483646 - (unsigned int)(v6 != 0);
      *((_DWORD *)a2 + 8) = result;
      return result;
    }
    v10 = *a2;
    v11 = *v7;
    v12 = *v7 < (unsigned __int64)*a2;
    if ( *v7 > (unsigned __int64)*a2 )
    {
      if ( a2[1] < v11 )
        goto LABEL_20;
      v12 = v11 < v10;
    }
    if ( !v12 || v7[1] >= v10 )
    {
      v13 = a2[1];
      if ( v13 >= v7[1] )
        v13 = v7[1];
      if ( v10 > v11 )
        v11 = *a2;
      if ( v13 - v11 + 1 >= a2[2] )
        break;
    }
LABEL_20:
    v7 += 2;
  }
  result = (unsigned int)(((__int64)v7 - *(_QWORD *)(a1 + 64)) >> 4) + 1;
  *((_DWORD *)a2 + 8) = result;
  if ( v6 )
    *((_DWORD *)a2 + 8) = -(int)result;
  return result;
}
