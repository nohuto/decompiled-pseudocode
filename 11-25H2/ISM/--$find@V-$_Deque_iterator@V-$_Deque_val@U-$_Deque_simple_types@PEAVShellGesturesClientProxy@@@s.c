/*
 * XREFs of ??$find@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@PEAVShellGesturesClientProxy@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@V10@AEBQEAVShellGesturesClientProxy@@@Z @ 0x180093A4C
 * Callers:
 *     ?UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z @ 0x1800825EC (-UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::find<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,ShellGesturesClientProxy *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  __int64 *v6; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 i; // rdx
  unsigned __int64 v11; // rsi
  __int64 **result; // rax

  v4 = *(_QWORD *)(a3 + 16);
  v6 = *(__int64 **)a2;
  v8 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a2 )
    v9 = *v6;
  else
    v9 = 0LL;
  for ( i = *(_QWORD *)(a2 + 16); ; i = v11 + 1 )
  {
    v11 = v8;
    if ( v8 == v4
      || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * ((*(_QWORD *)(v9 + 16) - 1LL) & (v8 >> 1))) + 8 * (v8 & 1)) == *a4 )
    {
      break;
    }
    ++v8;
  }
  a1[1] = 0LL;
  result = a1;
  *(_QWORD *)(a2 + 16) = i;
  *a1 = v6;
  a1[2] = (__int64 *)i;
  return result;
}
