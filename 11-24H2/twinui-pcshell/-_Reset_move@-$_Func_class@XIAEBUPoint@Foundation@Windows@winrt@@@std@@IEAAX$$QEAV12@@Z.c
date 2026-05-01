/*
 * XREFs of ?_Reset_move@?$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAX$$QEAV12@@Z @ 0x1801443F0
 * Callers:
 *     ?_Swap@?$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAXAEAV12@@Z @ 0x1801442F0 (-_Swap@-$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAXAEAV12@@Z.c)
 *     ??0?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1801852E0 (--0-$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIM.c)
 *     ??0?$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1801853E4 (--0-$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingVi.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_class<void,unsigned int,winrt::Windows::Foundation::Point const &>::_Reset_move(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      v6 = *(_QWORD *)(a2 + 56);
      if ( v6 )
      {
        LOBYTE(v5) = v6 != a2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
