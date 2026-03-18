/*
 * XREFs of Controller_TelemetryReport @ 0x1400427C4
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x140042BA0 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfA @ 0x140011198 (RtlStringCchPrintfA.c)
 *     TelemetryData_CreateReport @ 0x14005743C (TelemetryData_CreateReport.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1400575B8 (TelemetryData_InsertTriageDataBlock.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     Controller_TelemetryAddControllerData @ 0x140078F88 (Controller_TelemetryAddControllerData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x14007916C (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x140079450 (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     TelemetryData_SubmitReport @ 0x14007FAA8 (TelemetryData_SubmitReport.c)
 */

void __fastcall Controller_TelemetryReport(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  __int64 v6; // r8
  __int64 v9; // rax
  bool v10; // zf
  int v11; // edx
  int v12; // ecx
  __int64 Report; // rax
  int v14; // edx
  __int64 v15; // rbx
  unsigned int i; // r15d
  __int64 v17; // r14
  int v18; // eax
  int v19; // edx
  unsigned int v20; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-5Dh] BYREF
  __int64 v22; // [rsp+38h] [rbp-59h] BYREF
  __int64 v23; // [rsp+40h] [rbp-51h] BYREF
  char pszDest[8]; // [rsp+50h] [rbp-41h] BYREF
  char v25[8]; // [rsp+58h] [rbp-39h] BYREF
  __int128 v26; // [rsp+60h] [rbp-31h]
  __int64 v27; // [rsp+70h] [rbp-21h]
  __int64 v28; // [rsp+78h] [rbp-19h]
  __int64 v29; // [rsp+80h] [rbp-11h]
  __int64 v30; // [rsp+88h] [rbp-9h]
  __int128 v31; // [rsp+90h] [rbp-1h] BYREF

  v23 = 0LL;
  v6 = *(unsigned int *)(a3 + 16);
  v21 = 0;
  v22 = 0LL;
  v20 = 0;
  v31 = 0LL;
  if ( (unsigned __int8)Controller_TelemetryOkToGenerateReport(a1, a2, v6) )
  {
    v9 = *(_QWORD *)(a3 + 40);
    *(_QWORD *)pszDest = 0LL;
    *(_QWORD *)v25 = 0LL;
    v10 = *(_DWORD *)(a1 + 644) == 1;
    v28 = v9;
    v29 = *(_QWORD *)(a3 + 48);
    v30 = *(_QWORD *)(a3 + 56);
    v26 = 0LL;
    v27 = a1;
    if ( v10 )
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(a1 + 648));
      RtlStringCchPrintfA(&pszDest[5], 5uLL, "%04X", *(unsigned __int16 *)(a1 + 652));
      RtlStringCchPrintfA(&v25[2], 5uLL, "%02X", *(unsigned __int8 *)(a1 + 656));
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%s", (const char *)(a1 + 704));
      RtlStringCchPrintfA(&pszDest[5], 5uLL, "%s", (const char *)(a1 + 709));
      RtlStringCchPrintfA(&v25[2], 5uLL, "%s", (const char *)(a1 + 714));
    }
    RtlStringCchPrintfA(&v25[7], 0x11uLL, "%I64X", *(_QWORD *)(a1 + 728));
    Report = TelemetryData_CreateReport(
               v12,
               v11,
               *(_DWORD *)(a3 + 16),
               (unsigned int)pszDest,
               *(_QWORD *)(a3 + 24),
               *(_QWORD *)(a3 + 32));
    v15 = Report;
    if ( Report )
    {
      if ( (int)TelemetryData_InsertTriageDataBlock(Report, pszDest, 64LL) >= 0
        && (int)TelemetryData_InsertTriageDataBlock(v15, &WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 8LL) >= 0
        && (!*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
         || (int)TelemetryData_InsertTriageDataBlock(v15, *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 336LL) >= 0) )
      {
        Controller_TelemetryAddControllerData(a1, v15);
        if ( (int)TelemetryData_InsertTriageDataBlock(v15, &WPP_GLOBAL_Control, 8LL) >= 0
          && (!WPP_GLOBAL_Control || (int)TelemetryData_InsertTriageDataBlock(v15, WPP_GLOBAL_Control, 80LL) >= 0)
          && (int)imp_WppRecorderDumpLiveDriverData(WPP_GLOBAL_Control, &v22, &v20, &v31) >= 0
          && (!v22 || (int)TelemetryData_InsertTriageDataBlock(v15, v22, v20) >= 0) )
        {
          for ( i = 0; i < a5; ++a4 )
          {
            if ( (int)TelemetryData_InsertTriageDataBlock(v15, *a4, 336LL) < 0 )
              break;
            v17 = *(_QWORD *)(*a4 + 64LL);
            if ( v17 )
            {
              if ( *(_QWORD *)(v17 + 8) == a1
                && ((int)TelemetryData_InsertTriageDataBlock(v15, *(_QWORD *)(*a4 + 64LL), 104LL) < 0
                 || (int)imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, *(_QWORD *)(v17 + 16), &v23, &v21, &v31) < 0
                 || (int)TelemetryData_InsertTriageDataBlock(v15, v23, v21) < 0) )
              {
                break;
              }
            }
            ++i;
          }
          v18 = TelemetryData_SubmitReport(v15);
          if ( v18 >= 0 )
          {
            Controller_TelemetryUpdateSubmitReportSuccess(a1, *(unsigned int *)(a3 + 16));
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v19) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 72),
              v19,
              4,
              239,
              (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
              v18);
          }
        }
      }
      if ( *(_DWORD *)(v15 + 8) )
      {
        ExFreePoolWithTag(*(PVOID *)v15, 0x74614454u);
        *(_QWORD *)v15 = 0LL;
        *(_DWORD *)(v15 + 8) = 0;
      }
      ExFreePoolWithTag((PVOID)v15, 0x74614454u);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v14, 4, 238, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
  }
}
