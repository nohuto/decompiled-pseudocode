/*
 * XREFs of ?CreateRumbleEffectXInput@GamepadButtonTracker@@AEAAXUread_lock_required@wil@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x18036A718
 * Callers:
 *     ?OnLongPressTimerElapsed@GamepadButtonTracker@@AEAAXAEBUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x18036AD70 (-OnLongPressTimerElapsed@GamepadButtonTracker@@AEAAXAEBUThreadPoolTimer@Threading@System@Windows.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamepadButtonTracker::CreateRumbleEffectXInput(__int64 a1, __int64 a2, DWORD a3)
{
  __int64 v5; // rcx
  void (__fastcall *v6)(__int64, int *); // rax
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, int *); // rax
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(unsigned int *)(a1 + 176);
  if ( (unsigned int)v5 <= 4 )
  {
    v6 = *(void (__fastcall **)(__int64, int *))(a1 + 184);
    v10 = 2147418112;
    v6(v5, &v10);
    Sleep(a3);
    v7 = *(unsigned int *)(a1 + 176);
    v8 = *(__int64 (__fastcall **)(__int64, int *))(a1 + 184);
    v10 = 0;
    return v8(v7, &v10);
  }
  return result;
}
