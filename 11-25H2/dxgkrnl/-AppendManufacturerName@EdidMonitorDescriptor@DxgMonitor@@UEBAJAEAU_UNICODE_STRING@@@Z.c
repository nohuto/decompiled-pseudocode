/*
 * XREFs of ?AppendManufacturerName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403F6160
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x14003C7AC (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x14005C38C (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140184860 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::AppendManufacturerName(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  const unsigned __int8 *v3; // rax
  unsigned int v4; // ebx
  int IsEDIDBaseBlock; // eax
  unsigned __int8 *v7; // r10
  int v8; // eax
  NTSTATUS appended; // eax
  WCHAR Source[4]; // [rsp+20h] [rbp-18h] BYREF

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
          *(_QWORD *)Source = 0LL;
          v8 = EDIDV1_ObtainMonitorManufacturerName(v7, Source);
          v4 = v8;
          if ( v8 < 0 )
          {
            WdLogSingleEntry1(2LL, v8);
            WdLogGlobalForLineNumber = 342;
            return v4;
          }
          appended = RtlAppendUnicodeToString(a2, Source);
          v4 = appended;
          if ( appended < 0 )
          {
            WdLogSingleEntry1(2LL, appended);
            WdLogGlobalForLineNumber = 344;
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
  WdLogGlobalForLineNumber = 339;
  return v4;
}
