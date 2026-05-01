/*
 * XREFs of ??$_Assign_range@V?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@std@@V12@@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXV?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@1@V21@@Z @ 0x18014F258
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18014F61C (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$_Emplace_back_internal@AEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@@Z @ 0x18014F370 (--$_Emplace_back_internal@AEBV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$.c)
 */

_UNKNOWN **__fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Assign_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>>,std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // r11
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 i; // r11
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a1[3];
  v7 = v4 + a1[4];
  while ( 1 )
  {
    if ( v4 == v7 )
    {
      v9 = *(_QWORD *)(a3 + 8);
      while ( 1 )
      {
        v10 = a2[1];
        if ( v10 == v9 )
          break;
        std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Emplace_back_internal<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> const &>(
          a1,
          *(_QWORD *)(*(_QWORD *)(*a2 + 8LL) + 8 * ((v10 >> 1) & (*(_QWORD *)(*a2 + 16LL) - 1LL))) + 8 * (a2[1] & 1LL));
        result = (_UNKNOWN **)(v10 + 1);
        a2[1] = v10 + 1;
      }
      return result;
    }
    v11 = a2[1];
    if ( v11 == *(_QWORD *)(a3 + 8) )
      break;
    v12 = v4 & 1;
    v13 = (a1[2] - 1LL) & (v4++ >> 1);
    *(_QWORD *)(*(_QWORD *)(a1[1] + 8 * v13) + 8 * v12) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 8LL)
                                                                                + 8
                                                                                * ((v11 >> 1) & (*(_QWORD *)(*a2 + 16LL)
                                                                                               - 1LL)))
                                                                    + 8 * (a2[1] & 1LL));
    result = (_UNKNOWN **)(v11 + 1);
    a2[1] = v11 + 1;
  }
  for ( i = v7 - v4; i; --i )
  {
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  return result;
}
