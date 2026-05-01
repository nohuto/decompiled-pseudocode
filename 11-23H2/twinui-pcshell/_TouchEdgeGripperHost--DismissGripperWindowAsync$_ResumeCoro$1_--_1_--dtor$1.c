/*
 * XREFs of _TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x18021F54D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ @ 0x18064C968 (--1-$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall TouchEdgeGripperHost::DismissGripperWindowAsync__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 160) + 40LL;
  return winrt::com_ptr<TouchEdgeGripperHost>::~com_ptr<TouchEdgeGripperHost>(*(_QWORD *)(a2 + 48));
}
