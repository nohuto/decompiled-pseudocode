/*
 * XREFs of ?AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403E7E00
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x14003C7AC (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x14003C80C (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140184860 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::AppendSerialNumber(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  const unsigned __int8 *v3; // rax
  unsigned int v4; // ebx
  int v6; // eax
  int IsEDIDBaseBlock; // eax
  const unsigned __int8 *v8; // r10
  NTSTATUS appended; // eax
  WCHAR Source[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+38h] [rbp-20h]

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
            WdLogGlobalForLineNumber = 725;
            MonitorLogBadEDID(v4);
            goto LABEL_4;
          }
          v11 = 0LL;
          v12 = 0;
          *(_OWORD *)Source = 0LL;
          v6 = EDIDV1_ObtainMonitorSerialNumber(v8, Source);
          v4 = v6;
          if ( v6 < 0 )
          {
            WdLogSingleEntry1(2LL, v6);
            WdLogGlobalForLineNumber = 368;
            return v4;
          }
          appended = RtlAppendUnicodeToString(a2, Source);
          v4 = appended;
          if ( appended < 0 )
          {
            WdLogSingleEntry1(2LL, appended);
            WdLogGlobalForLineNumber = 370;
            return v4;
          }
          return 0LL;
        }
      }
    }
  }
  WdLogSingleEntry1(3LL, this);
  WdLogGlobalForLineNumber = 712;
  v4 = -1071841279;
LABEL_4:
  WdLogSingleEntry1(2LL, (int)v4);
  WdLogGlobalForLineNumber = 365;
  return v4;
}
