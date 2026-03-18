/*
 * XREFs of ?AppendFriendlyName@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x140280530
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z @ 0x14009730C (-DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendFriendlyName(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2,
        __int64 a3)
{
  int UserFriendlyName; // eax
  unsigned int v5; // ebx
  NTSTATUS appended; // eax
  unsigned __int8 v8[8]; // [rsp+20h] [rbp-38h] BYREF
  WCHAR Source[8]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]

  v8[0] = 0;
  *(_OWORD *)Source = 0LL;
  v10 = 0LL;
  v11 = 0;
  UserFriendlyName = DisplayID_GetUserFriendlyName(
                       (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24),
                       Source,
                       a3,
                       v8);
  v5 = UserFriendlyName;
  if ( UserFriendlyName < 0 )
  {
    WdLogSingleEntry1(2LL, UserFriendlyName);
    WdLogGlobalForLineNumber = 341;
    return v5;
  }
  appended = RtlAppendUnicodeToString(a2, Source);
  v5 = appended;
  if ( appended < 0 )
  {
    WdLogSingleEntry1(2LL, appended);
    WdLogGlobalForLineNumber = 343;
    return v5;
  }
  return 0LL;
}
