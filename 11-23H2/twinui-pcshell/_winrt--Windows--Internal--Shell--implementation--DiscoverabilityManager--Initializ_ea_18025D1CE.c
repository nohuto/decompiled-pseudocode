/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1_::_1_::dtor$8 @ 0x18025D1CE
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x1801AE3FC (--1ThreadErrorContext@wil@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync__ResumeCoro_1_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 144) + 240LL;
  wil::ThreadErrorContext::~ThreadErrorContext(*(wil::ThreadErrorContext **)(a2 + 72));
}
