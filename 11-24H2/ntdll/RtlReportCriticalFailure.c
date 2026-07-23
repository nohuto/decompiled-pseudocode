/*
 * XREFs of RtlReportCriticalFailure @ 0x18002D990
 * Callers:
 *     RtlCapabilityCheck @ 0x18001A270 (RtlCapabilityCheck.c)
 *     RtlRandomEx @ 0x18002CC00 (RtlRandomEx.c)
 *     RtlRunOnceExecuteOnce @ 0x18002D050 (RtlRunOnceExecuteOnce.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18002DFFC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     EtwpRegisterProvider @ 0x18004A730 (EtwpRegisterProvider.c)
 *     LdrpInitMuiCrits @ 0x180079C04 (LdrpInitMuiCrits.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800C8700 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpReportHeapFailure @ 0x18011D71C (RtlpReportHeapFailure.c)
 * Callees:
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800ED2F8 (RtlIsAnyDebuggerPresent.c)
 *     RtlReportFatalFailure @ 0x18011215C (RtlReportFatalFailure.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
