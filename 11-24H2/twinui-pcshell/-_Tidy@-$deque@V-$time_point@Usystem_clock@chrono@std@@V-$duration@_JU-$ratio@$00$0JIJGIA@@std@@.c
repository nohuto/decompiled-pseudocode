/*
 * XREFs of ?_Tidy@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXXZ @ 0x18014FDC8
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18014F61C (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 *     ??1ApplicationViewHistory@SnapEducationHandler@@QEAA@XZ @ 0x18014FD6C (--1ApplicationViewHistory@SnapEducationHandler@@QEAA@XZ.c)
 *     ??1?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAA@XZ @ 0x18014FD9C (--1-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@23@.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x18014FF84 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x180150088 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory.c)
 *     ??1?$_Tidy_guard@V?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@@std@@QEAA@XZ @ 0x1802CE9E0 (--1-$_Tidy_guard@V-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JI.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802DF760 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Tidy(
        _QWORD *a1)
{
  __int64 v2; // rax
  void **v3; // rdi
  _QWORD *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rsi
  void *v7; // rcx
  void *v8; // rcx
  const struct std::nothrow_t *v9; // rdx
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v5 = v2 - 1;
    a1[4] = v5;
    if ( !v5 )
      a1[3] = 0LL;
  }
  v3 = (void **)(a1 + 1);
  v4 = a1 + 1;
  if ( a1[1] )
  {
    v6 = a1[2];
    if ( v6 )
    {
      do
      {
        --v6;
        v7 = (void *)*((_QWORD *)*v3 + v6);
        if ( v7 )
          operator delete(v7, (const struct std::nothrow_t *)0x10);
      }
      while ( v6 );
      v4 = a1 + 1;
    }
    v8 = *v3;
    v9 = (const struct std::nothrow_t *)(8LL * a1[2]);
    v10 = (unsigned __int64)v9;
    v11 = v8;
    if ( (unsigned __int64)v9 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v11, &v10);
      v9 = (const struct std::nothrow_t *)v10;
      v8 = v11;
    }
    operator delete(v8, v9);
  }
  a1[2] = 0LL;
  *v4 = 0LL;
}
