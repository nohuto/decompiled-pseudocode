/*
 * XREFs of AcpiOSCNotifyWorker @ 0x14002AEF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 */

void __fastcall AcpiOSCNotifyWorker(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  if ( Context )
    IoFreeWorkItem(Context);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Context) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)Context,
      3,
      89,
      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
  }
}
