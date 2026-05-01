/*
 * XREFs of _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x180149930
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEBV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801499D4 (--0-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D4CD0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=2
int dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__()
{
  _QWORD v1[2]; // [rsp+20h] [rbp-68h] BYREF
  char *v2[4]; // [rsp+30h] [rbp-58h] BYREF
  char *v3; // [rsp+50h] [rbp-38h] BYREF
  __int64 v4; // [rsp+70h] [rbp-18h] BYREF

  std::wstring::wstring(v2, L"Windows.Internal.Shell.ShellLauncher.ShellLauncherExperience");
  std::wstring::wstring(&v3, L"Windows.Internal.AssignedAccess.AssignedAccessShellExperience");
  v1[0] = v2;
  v1[1] = &v4;
  std::vector<std::wstring>::vector<std::wstring>(
    &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds,
    v1);
  `eh vector destructor iterator'(v2, 0x20uLL, 2uLL, (void (*)(void *))std::wstring::_Tidy_deallocate);
  return atexit(dynamic_atexit_destructor_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__);
}
