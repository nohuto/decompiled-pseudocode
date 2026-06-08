/*
 * XREFs of AcpiOSCNotifyWorker @ 0x140032900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 */

_UNKNOWN **__fastcall AcpiOSCNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  _UNKNOWN **result; // rax

  if ( a2 )
    IoFreeWorkItem(a2);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          WPP_GLOBAL_Control->DeviceExtension,
                          (_DWORD)a2,
                          3,
                          89,
                          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
  }
  return result;
}
