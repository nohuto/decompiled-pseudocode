/*
 * XREFs of _CWorkFifo::ScheduleWorkItem_::_1_::catch$10 @ 0x1801630A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWorkFifo::ScheduleWorkItem_::_1_::catch_10(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x62,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
    (const char *)0x8007000ELL);
  return 0LL;
}
