/*
 * XREFs of ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x1800A3CA8
 * Callers:
 *     std::function_void___cdecl(void)_::operator___lambda_a1bd6a3f4010080cf46ed714b573822e__0_ @ 0x1800A2100 (std--function_void___cdecl(void)_--operator___lambda_a1bd6a3f4010080cf46ed714b573822e__0_.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A23B4 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnloadDelegate@Transitions@Udwm@winrt@@@Z @ 0x180103DEC (--$-4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnl.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18006B904 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall std::_Func_class<void,>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,>::_Tidy(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
