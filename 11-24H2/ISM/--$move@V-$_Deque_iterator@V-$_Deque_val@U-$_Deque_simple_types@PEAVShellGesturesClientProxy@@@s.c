/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x180094F7C
 * Callers:
 *     ?erase@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@0@Z @ 0x18009449C (-erase@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@@@s.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>(
        __int64 **a1,
        __int64 **a2,
        __int64 a3,
        __int64 **a4)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 **result; // rax

  v4 = (unsigned __int64)a2[2];
  if ( *a2 )
    v5 = **a2;
  else
    v5 = 0LL;
  v6 = *(_QWORD *)(a3 + 16);
  v7 = a4[2];
  if ( *a4 )
    v8 = **a4;
  else
    v8 = 0LL;
  while ( v4 != v6 )
  {
    v9 = (unsigned __int8)v7 & 1;
    v10 = (unsigned __int64)v7;
    v7 = (__int64 *)((char *)v7 + 1);
    v11 = (v10 >> 1) & (*(_QWORD *)(v8 + 16) - 1LL);
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * ((*(_QWORD *)(v5 + 16) - 1LL) & (v4 >> 1))) + 8 * (v4 & 1));
    ++v4;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * v11) + 8 * v9) = v12;
  }
  v13 = *a4;
  a1[1] = 0LL;
  *a1 = v13;
  result = a1;
  a4[2] = v7;
  a1[2] = v7;
  return result;
}
