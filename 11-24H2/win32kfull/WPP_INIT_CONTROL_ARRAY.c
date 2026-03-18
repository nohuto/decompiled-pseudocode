/*
 * XREFs of WPP_INIT_CONTROL_ARRAY @ 0x1402ADB30
 * Callers:
 *     EditionInitializeWppLogging @ 0x14020F9A0 (EditionInitializeWppLogging.c)
 * Callees:
 *     <none>
 */

void *WPP_INIT_CONTROL_ARRAY()
{
  void *result; // rax

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_Win32kFullTraceGuid;
  WPP_MAIN_CB.NextDevice = (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue;
  result = &WPP_ThisDir_CTLGUID_GreTraceGuid;
  WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)&WPP_ThisDir_CTLGUID_GreTraceGuid;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WPP_MAIN_CB.Queue.ListEntry.Flink = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 1LL;
  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
  WPP_MAIN_CB.AlignmentRequirement = 0;
  return result;
}
