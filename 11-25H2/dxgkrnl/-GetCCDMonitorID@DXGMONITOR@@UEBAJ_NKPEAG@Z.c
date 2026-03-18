/*
 * XREFs of ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x140367C10
 * Callers:
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x14026ECA0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x14026F164 (-_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x140367A88 (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGMONITOR::GetCCDMonitorID(DXGMONITOR *this, unsigned __int8 a2, int a3, unsigned __int16 *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // al
  const WCHAR *v24; // rdx
  NTSTATUS appended; // eax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2327;
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2328;
  }
  a4[a3 - 1] = 0;
  v8 = *((_QWORD *)this + 19);
  *(_QWORD *)&Destination.Length = 0LL;
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(2 * a3 - 2);
  Destination.Buffer = a4;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8) )
    goto LABEL_6;
  v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19));
  v24 = L"MSNIL";
  if ( !v23 )
    v24 = L"MSBDD_";
  appended = RtlAppendUnicodeToString(&Destination, v24);
  v14 = appended;
  if ( appended < 0 )
  {
    WdLogSingleEntry1(3LL, appended);
    WdLogGlobalForLineNumber = 2368;
  }
  else
  {
LABEL_6:
    v9 = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 16 * (v4 ^ 1) + 376));
    v14 = v9;
    if ( v9 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = v9;
      WdLogGlobalForLineNumber = 2389;
    }
    else
    {
      v15 = *((_QWORD *)this + 53);
      if ( v15 && !*(_DWORD *)(v15 + 16) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2399;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19))
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 80LL))(*((_QWORD *)this + 19)) )
      {
        v16 = *((_QWORD *)this + 53);
        if ( v16 )
        {
          if ( *(_DWORD *)(v16 + 16) <= 1u )
            return 0LL;
        }
      }
      v18 = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 408));
      v14 = v18;
      if ( v18 >= 0 )
        return 0LL;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = v18;
      WdLogGlobalForLineNumber = 2408;
    }
  }
  return v14;
}
