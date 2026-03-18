/*
 * XREFs of PopDiagTraceDynamicTickStatusRundown @ 0x140A330F0
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A32540 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     KeGetDynamicTickDisableReason @ 0x1404F77E4 (KeGetDynamicTickDisableReason.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void PopDiagTraceDynamicTickStatusRundown()
{
  char DynamicTickDisableReason; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DYNAMIC_TICK_STATUS_RUNDOWN) )
    {
      UserData.Reserved = 0;
      DynamicTickDisableReason = KeGetDynamicTickDisableReason();
      UserData.Size = 1;
      UserData.Ptr = (ULONGLONG)&DynamicTickDisableReason;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DYNAMIC_TICK_STATUS_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
