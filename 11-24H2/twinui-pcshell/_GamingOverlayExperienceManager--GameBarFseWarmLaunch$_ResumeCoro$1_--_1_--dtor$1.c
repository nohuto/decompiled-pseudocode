/*
 * XREFs of _GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806E28AE
 * Callers:
 *     <none>
 * Callees:
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x18032D458 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall GamingOverlayExperienceManager::GameBarFseWarmLaunch__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 40) + 40LL;
  winrt::impl::timespan_awaiter::~timespan_awaiter(*(winrt::cancellable_promise ***)(a2 + 80));
}
