/*
 * XREFs of IOCPDispatcher_Destroy @ 0x1C0080A80
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0087624 (UserActivateMITInputProcessing.c)
 *     UninitializeInputSensorsOnSharedThread @ 0x1C01E9298 (UninitializeInputSensorsOnSharedThread.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C00831E8 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

void *__fastcall IOCPDispatcher_Destroy(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
  {
    result = IOCPDispatcher::`scalar deleting destructor'((IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceObject, a2);
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  }
  return result;
}
