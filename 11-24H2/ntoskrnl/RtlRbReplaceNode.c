/*
 * XREFs of RtlRbReplaceNode @ 0x140407B10
 * Callers:
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlRbReplaceNode(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r11
  __int64 v5; // rcx
  _QWORD *result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx

  v4 = 0LL;
  *(_OWORD *)a3 = *(_OWORD *)a2;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a3 )
  {
    *(_QWORD *)(*(_QWORD *)a3 + 16LL) = a3 | *(_DWORD *)(*(_QWORD *)a3 + 16LL) & 3;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( (v7 & 1) != 0 )
    {
      if ( v7 == 1 )
        v8 = 0LL;
      else
        v8 = v7 ^ (a1 | 1);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 8);
    }
    if ( v8 == a2 )
    {
      if ( (v7 & 1) != 0 )
      {
        v9 = 0LL;
        if ( a3 )
          v9 = a3 ^ a1;
        *(_QWORD *)(a1 + 8) = v9;
        *(_BYTE *)(a1 + 8) = v9 | 1;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = a3;
      }
    }
  }
  v5 = *(_QWORD *)(a3 + 8);
  if ( v5 )
    *(_QWORD *)(v5 + 16) = a3 | *(_DWORD *)(v5 + 16) & 3;
  result = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( result )
  {
    if ( *result == a2 )
      *result = a3;
    else
      result[1] = a3;
  }
  else if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    result = (_QWORD *)(a3 ^ a1);
    if ( a3 )
      v4 = a3 ^ a1;
    *(_QWORD *)a1 = v4;
  }
  else
  {
    *(_QWORD *)a1 = a3;
  }
  return result;
}
