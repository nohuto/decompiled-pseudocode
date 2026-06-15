/*
 * XREFs of ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x180033814
 * Callers:
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180035B20 (-PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180016280 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800178C0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x180037F94 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall std::function<void (void)>::operator=(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE v9[56]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+58h] [rbp-60h]
  _BYTE v11[64]; // [rsp+60h] [rbp-58h] BYREF

  v4 = std::function<void (void)>::function<void (void)>((__int64)v11, a2);
  v5 = *(_QWORD *)(v4 + 56);
  if ( v5 == v4 || (v6 = *(_QWORD *)(a1 + 56), v6 == a1) )
  {
    v10 = 0LL;
    std::_Func_class<void,>::_Reset_move(v9, v4);
    std::_Func_class<void,>::_Reset_move(v4, a1);
    std::_Func_class<void,>::_Reset_move(a1, v9);
    std::_Func_class<void,>::_Tidy((__int64)v9, v7);
  }
  else
  {
    *(_QWORD *)(v4 + 56) = v6;
    *(_QWORD *)(a1 + 56) = v5;
  }
  std::_Func_class<void,>::_Tidy((__int64)v11, v3);
  return a1;
}
