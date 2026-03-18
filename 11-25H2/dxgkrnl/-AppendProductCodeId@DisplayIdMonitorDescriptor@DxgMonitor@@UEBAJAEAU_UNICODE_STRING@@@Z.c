/*
 * XREFs of ?AppendProductCodeId@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1402791D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x140094F60 (-DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendProductCodeId(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  int ProductCode; // eax
  unsigned int v4; // ebx
  NTSTATUS appended; // eax
  WCHAR Source[4]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+28h] [rbp-20h]

  *(_QWORD *)Source = 0LL;
  v8 = 0;
  ProductCode = DisplayID_GetProductCode((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), Source);
  v4 = ProductCode;
  if ( ProductCode < 0 )
  {
    WdLogSingleEntry1(2LL, ProductCode);
    WdLogGlobalForLineNumber = 319;
    return v4;
  }
  appended = RtlAppendUnicodeToString(a2, Source);
  v4 = appended;
  if ( appended < 0 )
  {
    WdLogSingleEntry1(2LL, appended);
    WdLogGlobalForLineNumber = 321;
    return v4;
  }
  return 0LL;
}
