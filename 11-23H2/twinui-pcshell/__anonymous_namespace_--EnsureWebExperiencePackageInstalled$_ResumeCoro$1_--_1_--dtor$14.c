/*
 * XREFs of __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::dtor$14 @ 0x18023A134
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall _anonymous_namespace_::EnsureWebExperiencePackageInstalled__ResumeCoro_1_::_1_::dtor_14(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 352) = *(_QWORD *)(a2 + 104) + 320LL;
  winrt::hstring::~hstring(*(void ***)(a2 + 352));
}
