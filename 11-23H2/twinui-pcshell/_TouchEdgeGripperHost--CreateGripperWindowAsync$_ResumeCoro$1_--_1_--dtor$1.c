/*
 * XREFs of _TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x18021EFA9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ @ 0x18064C968 (--1-$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall TouchEdgeGripperHost::CreateGripperWindowAsync__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 176) + 40LL;
  return winrt::com_ptr<TouchEdgeGripperHost>::~com_ptr<TouchEdgeGripperHost>(*(_QWORD *)(a2 + 72));
}
