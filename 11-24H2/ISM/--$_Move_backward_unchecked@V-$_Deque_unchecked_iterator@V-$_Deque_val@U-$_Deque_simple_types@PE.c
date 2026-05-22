/*
 * XREFs of ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x180158F78
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x180159024 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClient.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Move_backward_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>(
        _OWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v4; // rbp
  __int64 v7; // r11
  __int64 v8; // rcx
  unsigned __int64 v9; // r11
  __int64 v10; // r9
  unsigned __int64 v11; // r10
  __int64 v12; // rdx
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v7 = a3[1];
    if ( v4 == v7 )
      break;
    v8 = *a3;
    v9 = v7 - 1;
    v10 = *a4;
    v11 = a4[1] - 1;
    v12 = *(_QWORD *)(*a3 + 16LL) - 1LL;
    a3[1] = v9;
    a4[1] = v11;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 8 * ((v11 >> 1) & (*(_QWORD *)(v10 + 16) - 1LL))) + 8 * (v11 & 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * ((v9 >> 1) & v12)) + 8 * (v9 & 1));
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
