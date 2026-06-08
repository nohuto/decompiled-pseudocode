/*
 * XREFs of ProcLibTraceProcessorSpecificEvent @ 0x140002DE0
 * Callers:
 *     ProcLibTracePccCapChange @ 0x140005838 (ProcLibTracePccCapChange.c)
 *     PccInitiateExecuteCallback @ 0x14000DCE0 (PccInitiateExecuteCallback.c)
 *     AcpiCStateNotifyWorker @ 0x1400284B0 (AcpiCStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x14002C590 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x14002EDF4 (ProcLibDeviceStart.c)
 *     AcpiPStateNotifyWorker @ 0x140040E40 (AcpiPStateNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x140041A78 (CpcHighestNotifyWorker.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x140002EA8 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorSpecificEvent(int a1, int a2, int a3, int a4, __int64 a5)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v7; // rdi
  ULONG v8; // r9d
  int v10; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]

  v10 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              a2,
                                                              a3,
                                                              (unsigned int)&v10,
                                                              (__int64)&UserData);
  v7 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v8 = 1;
      if ( a5 && a4 )
      {
        v14 = 0;
        v8 = 2;
        v12 = a5;
        v13 = a4;
      }
      LOBYTE(EventDescriptorAndProcessorId) = EtwWrite(
                                                (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                                v7,
                                                0LL,
                                                v8,
                                                &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
