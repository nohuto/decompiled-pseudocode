/*
 * XREFs of RtlReportCriticalFailure @ 0x180098B40
 * Callers:
 *     EtwpRegisterProvider @ 0x18001DD30 (EtwpRegisterProvider.c)
 *     RtlCapabilityCheck @ 0x180039FF0 (RtlCapabilityCheck.c)
 *     LdrpInitMuiCrits @ 0x180064024 (LdrpInitMuiCrits.c)
 *     RtlRandomEx @ 0x180097DB0 (RtlRandomEx.c)
 *     RtlRunOnceExecuteOnce @ 0x180098200 (RtlRunOnceExecuteOnce.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800EBE50 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpReportHeapFailure @ 0x18011F4EC (RtlpReportHeapFailure.c)
 * Callees:
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F2A08 (RtlIsAnyDebuggerPresent.c)
 *     RtlReportFatalFailure @ 0x18011716C (RtlReportFatalFailure.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlReportCriticalFailure(int a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  _DWORD v8[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-B0h]
  void (__stdcall *v10)(PEXCEPTION_RECORD); // [rsp+40h] [rbp-A8h]
  int v11; // [rsp+48h] [rbp-A0h]
  __int64 v12; // [rsp+50h] [rbp-98h]

  memset_thunk_772440563353939046(v8, 0, 0x98uLL);
  if ( (unsigned __int8)RtlIsAnyDebuggerPresent(v6) )
  {
    DbgPrintEx(101, 0, "Critical error detected %lx\n", a1);
    if ( a3 )
      __debugbreak();
  }
  v8[0] = a1;
  v8[1] = 1;
  v9 = 0LL;
  v10 = RtlRaiseException;
  v11 = 1;
  v12 = a2;
  return RtlReportFatalFailure(v8);
}
