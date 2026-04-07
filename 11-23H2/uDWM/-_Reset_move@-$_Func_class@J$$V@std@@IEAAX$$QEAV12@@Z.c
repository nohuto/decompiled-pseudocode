/*
 * XREFs of ?_Reset_move@?$_Func_class@J$$V@std@@IEAAX$$QEAV12@@Z @ 0x1800E75BC
 * Callers:
 *     ??4?$function@$$A6AJXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800E6F84 (--4-$function@$$A6AJXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@J$$V@std@@IEAAXXZ @ 0x18001E9D4 (-_Tidy@-$_Func_class@J$$V@std@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<long,>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<long,>::_Tidy(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
