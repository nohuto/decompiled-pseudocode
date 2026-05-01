/*
 * XREFs of _TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x18021EFFB
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 */

void __fastcall TouchEdgeGripperHost::CreateGripperWindowAsync__ResumeCoro_1_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 176) + 144LL;
  wil::ActivityThreadWatcher::~ActivityThreadWatcher(*(wil::ActivityThreadWatcher **)(a2 + 88));
}
