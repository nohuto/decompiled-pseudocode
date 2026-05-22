/*
 * XREFs of ??1?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18009A66C
 * Callers:
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$2 @ 0x1801D34B2 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$2.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$1 @ 0x1801D7D20 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$1.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$2 @ 0x1801D7D40 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$2.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$3 @ 0x1801D7D60 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$3.c)
 *     _Edge::Edge_::_1_::dtor$1 @ 0x1801D91F5 (_Edge--Edge_--_1_--dtor$1.c)
 *     _Edges::AddOrUpdate_::_1_::dtor$2 @ 0x1801D9233 (_Edges--AddOrUpdate_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::~ComPtr<ShellGesturesClientProxy>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(a1);
}
