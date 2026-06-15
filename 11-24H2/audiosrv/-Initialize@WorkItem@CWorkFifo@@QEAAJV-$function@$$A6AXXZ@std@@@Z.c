/*
 * XREFs of ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180120BA0
 * Callers:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180070498 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x1800278A0 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180027BB0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005009C (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWorkFifo::WorkItem::Initialize(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v10 = a2;
    v4 = std::make_shared<std::function<void (void)>,std::function<void (void)> &>(&v8, a2);
    std::shared_ptr<std::function<void (void)>>::operator=(a1, v4);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    std::_Func_class<void,>::_Tidy(a2, v5);
    result = 0LL;
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
      (const char *)0x8007000ELL);
    std::_Func_class<void,>::_Tidy(v10, v7);
    return 2147942414LL;
  }
  return result;
}
