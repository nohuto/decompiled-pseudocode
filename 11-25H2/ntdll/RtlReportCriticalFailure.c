/*
 * XREFs of RtlReportCriticalFailure @ 0x1800041B0
 * Callers:
 *     RtlRandomEx @ 0x180003420 (RtlRandomEx.c)
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18000481C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     LdrpInitMuiCrits @ 0x18001FC84 (LdrpInitMuiCrits.c)
 *     EtwpRegisterProvider @ 0x180045330 (EtwpRegisterProvider.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800874B0 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlCapabilityCheck @ 0x18008D9E0 (RtlCapabilityCheck.c)
 *     RtlpReportHeapFailure @ 0x180120DBC (RtlpReportHeapFailure.c)
 * Callees:
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F4578 (RtlIsAnyDebuggerPresent.c)
 *     RtlReportFatalFailure @ 0x18011A3AC (RtlReportFatalFailure.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlReportCriticalFailure(int a1, __int64 a2, int a3)
{
  _DWORD v7[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+38h] [rbp-B0h]
  void (__stdcall *v9)(PEXCEPTION_RECORD); // [rsp+40h] [rbp-A8h]
  int v10; // [rsp+48h] [rbp-A0h]
  __int64 v11; // [rsp+50h] [rbp-98h]

  memset_thunk_772440563353939046(v7, 0, 0x98uLL);
  if ( RtlIsAnyDebuggerPresent() )
  {
    DbgPrintEx(0x65u, 0, "Critical error detected %lx\n", a1);
    if ( a3 )
      __debugbreak();
  }
  v7[0] = a1;
  v7[1] = 1;
  v8 = 0LL;
  v9 = RtlRaiseException;
  v10 = 1;
  v11 = a2;
  return RtlReportFatalFailure(v7);
}
