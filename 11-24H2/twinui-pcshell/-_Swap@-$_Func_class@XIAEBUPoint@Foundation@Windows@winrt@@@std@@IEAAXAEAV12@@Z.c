/*
 * XREFs of ?_Swap@?$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAXAEAV12@@Z @ 0x1801442F0
 * Callers:
 *     ??4?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x180144070 (--4-$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAX$$QEAV12@@Z @ 0x1801443F0 (-_Reset_move@-$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAX$$QEAV12@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_class<void,unsigned int,winrt::Windows::Foundation::Point const &>::_Swap(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  _BYTE *v6; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE *v8; // [rsp+58h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 == a1 || (result = *(_QWORD *)(a2 + 56), result == a2) )
  {
    v8 = 0LL;
    std::_Func_class<void,unsigned int,winrt::Windows::Foundation::Point const &>::_Reset_move(v7, a1);
    std::_Func_class<void,unsigned int,winrt::Windows::Foundation::Point const &>::_Reset_move(a1, a2);
    result = std::_Func_class<void,unsigned int,winrt::Windows::Foundation::Point const &>::_Reset_move(a2, v7);
    if ( v8 )
    {
      v6 = v7;
      LOBYTE(v6) = v8 != v7;
      return (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v6);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 56) = result;
    *(_QWORD *)(a2 + 56) = v4;
  }
  return result;
}
