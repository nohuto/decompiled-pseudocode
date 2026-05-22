/*
 * XREFs of ?_Reset_move@?$_Func_class@XPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x1800F29C8
 * Callers:
 *     ??4?$function@$$A6AXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EFA9C (--4-$function@$$A6AXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18000AB8C (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_class<void,_MIT_HAPTIC_NOTIFICATION_MESSAGE const *>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,>::~_Func_class<void,>(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
