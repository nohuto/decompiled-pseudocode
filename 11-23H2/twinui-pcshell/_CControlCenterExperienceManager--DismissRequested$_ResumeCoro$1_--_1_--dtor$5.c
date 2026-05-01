/*
 * XREFs of _CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$5 @ 0x1801DEBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall CControlCenterExperienceManager::DismissRequested__ResumeCoro_1_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 40) + 56LL;
  winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection(*(winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection **)(a2 + 80));
}
