/*
 * XREFs of ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18006B904
 * Callers:
 *     std::function_void___cdecl(void)_::operator___lambda_a1bd6a3f4010080cf46ed714b573822e__0_ @ 0x1800A2100 (std--function_void___cdecl(void)_--operator___lambda_a1bd6a3f4010080cf46ed714b573822e__0_.c)
 *     ??1?$function@$$A6AXXZ@std@@QEAA@XZ @ 0x1800A22B4 (--1-$function@$$A6AXXZ@std@@QEAA@XZ.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800A2310 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A23B4 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x1800A261C (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ @ 0x1800A30A0 (-OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x1800A3448 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x1800A3508 (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x1800A3CA8 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ??1?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x1800F0A9C (--1-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ.c)
 *     ??1?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x1800F11E0 (--1-$vector@V-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ.c)
 *     ??$?4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnloadDelegate@Transitions@Udwm@winrt@@@Z @ 0x180103DEC (--$-4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnl.c)
 *     ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1801040D8 (--1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,>::_Tidy(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
