/*
 * XREFs of ??0LockScreenWidgetPackageHelperBase@@QEAA@W4PackageInstallScenario@@PEBG1UPackageVersion@ApplicationModel@Windows@winrt@@1@Z @ 0x1805CAB14
 * Callers:
 *     ??0StartExperiencePackageHelper@@QEAA@W4PackageInstallScenario@@@Z @ 0x1805CAB80 (--0StartExperiencePackageHelper@@QEAA@W4PackageInstallScenario@@@Z.c)
 *     ??0WidgetPlatformPackageHelper@@QEAA@W4PackageInstallScenario@@@Z @ 0x1805CABF0 (--0WidgetPlatformPackageHelper@@QEAA@W4PackageInstallScenario@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

__int64 __fastcall LockScreenWidgetPackageHelperBase::LockScreenWidgetPackageHelperBase(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _WORD *a6)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  *(_QWORD *)a1 = &LockScreenWidgetPackageHelperBase::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  v7 = -1LL;
  *(_QWORD *)(a1 + 16) = a3;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(a3 + 2 * v8) );
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 32) = a4;
  do
    ++v7;
  while ( *(_WORD *)(a4 + 2 * v7) );
  *(_QWORD *)(a1 + 40) = v7;
  std::wstring::wstring((char **)(a1 + 48), a6);
  *(_QWORD *)(a1 + 80) = a5;
  return a1;
}
