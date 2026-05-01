/*
 * XREFs of _anonymous_namespace_::EnsureWebExperiencePackageInstalled @ 0x18023A3BC
 * Callers:
 *     _anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1 @ 0x180241670 (_anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_InitCoro$2 @ 0x1802394DC (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_InitCoro$2.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall anonymous_namespace_::EnsureWebExperiencePackageInstalled(
        winrt::Windows::Foundation::IUnknown *a1)
{
  void *v2; // rax
  int v4; // [rsp+410h] [rbp+8h] BYREF

  v2 = operator new(0x3D1uLL);
  v4 = 0;
  anonymous_namespace_::EnsureWebExperiencePackageInstalled__InitCoro_2(&v4, (__int64)v2 + 112, a1);
  return a1;
}
