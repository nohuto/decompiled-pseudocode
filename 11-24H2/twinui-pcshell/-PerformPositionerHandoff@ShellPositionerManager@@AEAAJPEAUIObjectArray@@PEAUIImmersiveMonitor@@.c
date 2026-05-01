/*
 * XREFs of ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1804ECBA4
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x18029DA5C (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1804EE110 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 * Callees:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_22f50d1dc6182761ed223d168c43812e___ @ 0x1804EB544 (ShellPositionerManager--DoWorkForEachMonitor__lambda_22f50d1dc6182761ed223d168c43812e___.c)
 *     _lambda_22f50d1dc6182761ed223d168c43812e_::_lambda_22f50d1dc6182761ed223d168c43812e_ @ 0x1804EBCBC (_lambda_22f50d1dc6182761ed223d168c43812e_--_lambda_22f50d1dc6182761ed223d168c43812e_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 ShellPositionerManager::PerformPositionerHandoff(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // rax
  __int64 v9; // rax
  __int64 v10; // xmm1_8
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  _BYTE v14[32]; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+88h] [rbp+10h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  __int64 v18; // [rsp+A8h] [rbp+30h] BYREF
  va_list va1; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  v4 = *a2;
  v15 = 0;
  if ( (*(int (__fastcall **)(__int64 *, int *))(v4 + 24))(a2, &v15) >= 0 && v15 )
  {
    v9 = lambda_22f50d1dc6182761ed223d168c43812e_::_lambda_22f50d1dc6182761ed223d168c43812e_(
           (__int64)v14,
           a1,
           (__int64 *)va1,
           (int *)va2,
           (__int64 *)va);
    v10 = *(_QWORD *)(v9 + 16);
    v12 = *(_OWORD *)v9;
    v13 = v10;
    ShellPositionerManager::DoWorkForEachMonitor__lambda_22f50d1dc6182761ed223d168c43812e___(
      a1,
      (__int64)a2,
      a3,
      a4,
      (__int64)&v12);
  }
  return 0LL;
}
