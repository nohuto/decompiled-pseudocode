/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x18014FF84
 * Callers:
 *     ?erase@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@0@Z @ 0x18014F0EC (-erase@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistor.c)
 * Callees:
 *     ?_Tidy@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXXZ @ 0x18014FDC8 (-_Tidy@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@.c)
 *     ?_Take_contents@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEAV12@@Z @ 0x1801D48A0 (-_Take_contents@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJG.c)
 */

__int64 **__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>>(
        __int64 **a1,
        __int64 **a2,
        __int64 a3,
        __int64 **a4)
{
  __int64 *v5; // rbp
  __int64 v6; // r14
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // r15
  _QWORD *v10; // rdx
  _QWORD *v11; // r13
  _QWORD *v12; // r8
  _QWORD *v13; // r12
  __int64 *v14; // rax
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
    v10 = *(_QWORD **)(*(_QWORD *)(v6 + 8) + 8 * ((unsigned __int64)v5 & (*(_QWORD *)(v6 + 16) - 1LL)));
    v11 = v10 + 2;
    v12 = *(_QWORD **)(*(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)v8 & (*(_QWORD *)(v9 + 16) - 1LL)));
    *v12 = *v10;
    v13 = v12 + 2;
    v12[1] = v10[1];
    if ( v12 + 2 != v10 + 2 )
    {
      std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Tidy(v12 + 2);
      std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Take_contents(
        v13,
        v11);
    }
    v8 = (__int64 *)((char *)v8 + 1);
    v5 = (__int64 *)((char *)v5 + 1);
  }
  v14 = *a4;
  a1[1] = 0LL;
  *a1 = v14;
  result = a1;
  a1[2] = v8;
  a4[2] = v8;
  return result;
}
