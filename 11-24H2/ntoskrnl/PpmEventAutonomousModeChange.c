/*
 * XREFs of PpmEventAutonomousModeChange @ 0x1405D63B4
 * Callers:
 *     PpmUpdateTargetProcessorPolicy @ 0x1404A277C (PpmUpdateTargetProcessorPolicy.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventGetEventDescriptorAndProcessorId @ 0x140415490 (PpmEventGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventAutonomousModeChange(__int64 a1, int a2)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  int v5; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]
  int v10; // [rsp+88h] [rbp+10h] BYREF

  v10 = a2;
  v5 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)PPM_ETW_AUTONOMOUS_MODE_CHANGE,
                                                              (__int64)PPM_ETW_AUTONOMOUS_MODE_CHANGE_HV,
                                                              (__int64)&v5,
                                                              &UserData);
  v3 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(PpmEtwHandle, EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v9 = 0;
      v7 = &v10;
      v8 = 4;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWriteEx(PpmEtwHandle, v3, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
