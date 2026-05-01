/*
 * XREFs of ?CancelTerminateApp@Win32AppStateManager@@UEAAXPEBG@Z @ 0x180574800
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180575240 (-RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV-$basic_string@GU-$char_traits@G@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppStateManager::CancelTerminateApp(Win32AppStateManager *this, unsigned __int16 *a2)
{
  void *v3[4]; // [rsp+20h] [rbp-38h] BYREF

  std::wstring::wstring((char **)v3, a2);
  Win32AppStateManager::RemoveAppFromTerminationTarget(this, v3, 0LL);
  std::wstring::_Tidy_deallocate(v3);
}
