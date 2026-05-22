/*
 * XREFs of ?OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x18008A3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x18006EABC (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z @ 0x18017CD48 (-UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::OnTargetWithFocusChanged(
        ControllerProcessor *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  ControllerProcessor::StopAutoRepeatTimer((ControllerProcessor *)((char *)this - 8));
  ControllerProcessor::UpdateFocusedProcessId((ControllerProcessor *)((char *)this - 8), a3);
  return NonPointerProcessor::OnTargetWithFocusChanged(this, a2, a3);
}
