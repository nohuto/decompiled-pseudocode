/*
 * XREFs of ProcLibTraceProcessorIdsHv @ 0x140022020
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14003D7C0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTraceProcessorIdsHv(__int64 a1)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v4; // [rsp+40h] [rbp-38h]
  __int64 v5; // [rsp+48h] [rbp-30h]
  __int64 v6; // [rsp+50h] [rbp-28h]
  __int64 v7; // [rsp+58h] [rbp-20h]

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_PROCESSOR_ID_HV_RUNDOWN);
  if ( result )
  {
    UserData.Ptr = a1 + 52;
    *(_QWORD *)&UserData.Size = 4LL;
    v4 = a1 + 48;
    v5 = 4LL;
    v6 = a1 + 72;
    v7 = 4LL;
    return EtwWrite(
             (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
             &PPM_ETW_PROCESSOR_ID_HV_RUNDOWN,
             0LL,
             (ULONG)3,
             &UserData);
  }
  return result;
}
