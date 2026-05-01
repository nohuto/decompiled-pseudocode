/*
 * XREFs of _SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1_::_1_::dtor$8 @ 0x1806F934A
 * Callers:
 *     <none>
 * Callees:
 *     ??1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ @ 0x1805AD4CC (--1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ.c)
 */

void __fastcall SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync__ResumeCoro_1_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 216) = *(_QWORD *)(a2 + 112) + 160LL;
  SnapAccessibilityHelpers::MonitorIDFinder::~MonitorIDFinder(*(void ***)(a2 + 216));
}
