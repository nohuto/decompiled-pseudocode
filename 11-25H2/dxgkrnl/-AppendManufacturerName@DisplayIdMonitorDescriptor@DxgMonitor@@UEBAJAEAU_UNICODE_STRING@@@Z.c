/*
 * XREFs of ?AppendManufacturerName@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x140279110
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x140094E90 (-DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendManufacturerName(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  int ManufacturerName; // eax
  unsigned int v4; // ebx
  NTSTATUS appended; // eax
  WCHAR Source[4]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  __int16 v9; // [rsp+2Ch] [rbp-1Ch]

  *(_QWORD *)Source = 0LL;
  v8 = 0;
  v9 = 0;
  ManufacturerName = DisplayID_GetManufacturerName(
                       (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24),
                       Source);
  v4 = ManufacturerName;
  if ( ManufacturerName < 0 )
  {
    WdLogSingleEntry1(2LL, ManufacturerName);
    WdLogGlobalForLineNumber = 309;
    return v4;
  }
  appended = RtlAppendUnicodeToString(a2, Source);
  v4 = appended;
  if ( appended < 0 )
  {
    WdLogSingleEntry1(2LL, appended);
    WdLogGlobalForLineNumber = 311;
    return v4;
  }
  return 0LL;
}
