/*
 * XREFs of ?AppendSerialNumber@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x140280780
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x140097280 (-DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendSerialNumber(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  int SerialNumber; // eax
  unsigned int v4; // ebx
  NTSTATUS appended; // eax
  WCHAR Source[8]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+30h] [rbp-18h]

  v8 = 0;
  *(_OWORD *)Source = 0LL;
  SerialNumber = DisplayID_GetSerialNumber((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), Source);
  v4 = SerialNumber;
  if ( SerialNumber < 0 )
  {
    WdLogSingleEntry1(2LL, SerialNumber);
    WdLogGlobalForLineNumber = 329;
    return v4;
  }
  appended = RtlAppendUnicodeToString(a2, Source);
  v4 = appended;
  if ( appended < 0 )
  {
    WdLogSingleEntry1(2LL, appended);
    WdLogGlobalForLineNumber = 331;
    return v4;
  }
  return 0LL;
}
