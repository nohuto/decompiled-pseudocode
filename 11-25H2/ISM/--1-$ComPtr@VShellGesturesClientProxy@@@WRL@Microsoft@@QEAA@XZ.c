/*
 * XREFs of ??1?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18009A4D4
 * Callers:
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$2 @ 0x1801CC000 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$2.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$1 @ 0x1801D04E0 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$1.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$2 @ 0x1801D0500 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$2.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$3 @ 0x1801D0520 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$3.c)
 *     _Edge::Edge_::_1_::dtor$1 @ 0x1801D1759 (_Edge--Edge_--_1_--dtor$1.c)
 *     _Edges::AddOrUpdate_::_1_::dtor$2 @ 0x1801D1797 (_Edges--AddOrUpdate_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::~ComPtr<ShellGesturesClientProxy>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(a1);
}
