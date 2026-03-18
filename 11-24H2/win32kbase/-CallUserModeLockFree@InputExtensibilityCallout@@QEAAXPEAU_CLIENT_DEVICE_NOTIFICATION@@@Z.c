/*
 * XREFs of ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1400BB320
 * Callers:
 *     InvokeMouseCursorPositionCallout @ 0x140189720 (InvokeMouseCursorPositionCallout.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021EC54 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     IsKSTThread @ 0x1400BB410 (IsKSTThread.c)
 *     ApiSetEditionInputExtensibilityCallout @ 0x140192210 (ApiSetEditionInputExtensibilityCallout.c)
 */

void __fastcall InputExtensibilityCallout::CallUserModeLockFree(
        InputExtensibilityCallout *this,
        struct _CLIENT_DEVICE_NOTIFICATION *a2)
{
  if ( !(unsigned __int8)IsInputThread() && !(unsigned __int8)IsKSTThread() )
    KeBugCheck(0x164u);
  ApiSetEditionInputExtensibilityCallout(*(_QWORD *)this, a2);
}
