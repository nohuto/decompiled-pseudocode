/*
 * XREFs of ?AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403E86B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x14003B9FC (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x14003C16C (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140186BB0 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::AppendProductCodeId(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  const unsigned __int8 *v3; // rax
  unsigned int v4; // ebx
  int IsEDIDBaseBlock; // eax
  const unsigned __int8 *v7; // r10
  int v8; // eax
  NTSTATUS appended; // eax
  WCHAR Source[4]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v11; // [rsp+28h] [rbp-20h]

  if ( *((_DWORD *)this + 4) )
  {
    v3 = (const unsigned __int8 *)*((_QWORD *)this + 3);
    if ( v3 )
    {
      while ( 1 )
      {
        v3 = *(const unsigned __int8 **)v3;
        if ( !v3 )
          break;
        if ( *((_DWORD *)v3 + 2) == 2 )
        {
          IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(v3 + 24);
          v4 = IsEDIDBaseBlock;
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(3LL, IsEDIDBaseBlock);
            WdLogGlobalForLineNumber = 720;
            MonitorLogBadEDID(v4);
            goto LABEL_4;
          }
          *(_QWORD *)Source = 0LL;
          v11 = 0;
          v8 = EDIDV1_ObtainMonitorProductCodeID(v7, Source);
          v4 = v8;
          if ( v8 < 0 )
          {
            WdLogSingleEntry1(2LL, v8);
            WdLogGlobalForLineNumber = 355;
            return v4;
          }
          appended = RtlAppendUnicodeToString(a2, Source);
          v4 = appended;
          if ( appended < 0 )
          {
            WdLogSingleEntry1(2LL, appended);
            WdLogGlobalForLineNumber = 357;
            return v4;
          }
          return 0LL;
        }
      }
    }
  }
  WdLogSingleEntry1(3LL, this);
  WdLogGlobalForLineNumber = 707;
  v4 = -1071841279;
LABEL_4:
  WdLogSingleEntry1(2LL, (int)v4);
  WdLogGlobalForLineNumber = 352;
  return v4;
}
