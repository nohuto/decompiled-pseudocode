/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@0@V10@00@Z @ 0x1802C7C44
 * Callers:
 *     ?erase@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@0@Z @ 0x18008D790 (-erase@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_v.c)
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@0@Z @ 0x18015F0D0 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_D.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>>(
        __int64 **a1,
        __int64 **a2,
        __int64 a3,
        __int64 **a4)
{
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // r8
  __int64 v9; // r11
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 **result; // rax

  v5 = a2[2];
  if ( *a2 )
    v6 = **a2;
  else
    v6 = 0LL;
  v7 = *(__int64 **)(a3 + 16);
  v8 = a4[2];
  if ( *a4 )
    v9 = **a4;
  else
    v9 = 0LL;
  while ( v5 != v7 )
  {
    v10 = *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * ((unsigned __int64)v5 & (*(_QWORD *)(v6 + 16) - 1LL)));
    v11 = (unsigned __int64)v8 & (*(_QWORD *)(v9 + 16) - 1LL);
    v8 = (__int64 *)((char *)v8 + 1);
    v5 = (__int64 *)((char *)v5 + 1);
    *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * v11) = v10;
  }
  v12 = *a4;
  a1[1] = 0LL;
  *a1 = v12;
  result = a1;
  a4[2] = v8;
  a1[2] = v8;
  return result;
}
