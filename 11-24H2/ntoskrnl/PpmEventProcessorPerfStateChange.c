/*
 * XREFs of PpmEventProcessorPerfStateChange @ 0x1402AD2C8
 * Callers:
 *     PpmPerfArbitratorApplyProcessorState @ 0x1402ACE30 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmPerfApplyHiddenProcessorState @ 0x1405D00A4 (PpmPerfApplyHiddenProcessorState.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventGetEventDescriptorAndProcessorId @ 0x140415490 (PpmEventGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventProcessorPerfStateChange(__int64 a1, int a2, int a3)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v5; // rbx
  __int64 v6; // rdx
  int v7; // ecx
  int v9; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+4Ch] [rbp-BCh] BYREF
  int v11; // [rsp+50h] [rbp-B8h] BYREF
  int v12; // [rsp+54h] [rbp-B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v14; // [rsp+68h] [rbp-A0h]
  __int64 v15; // [rsp+70h] [rbp-98h]
  _QWORD v16[24]; // [rsp+78h] [rbp-90h] BYREF
  int v17; // [rsp+170h] [rbp+68h] BYREF
  int v18; // [rsp+178h] [rbp+70h] BYREF

  v18 = a3;
  v17 = a2;
  v9 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (unsigned int)&PPM_ETW_PROCESSOR_PERF_STATE_CHANGE,
                                                              (unsigned int)&PPM_ETW_PROCESSOR_PERF_STATE_CHANGE_HV,
                                                              (unsigned int)&v9,
                                                              (__int64)v16);
  v5 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(PpmEtwHandle, EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v10 = *(_DWORD *)(v6 + 64);
      v7 = *(_DWORD *)(v6 + 84);
      UserData.Ptr = (ULONGLONG)&v10;
      v14 = &v11;
      v16[2] = v6 + 80;
      v16[4] = v6 + 96;
      v16[6] = v6 + 88;
      v16[8] = v6 + 92;
      v16[10] = v6 + 100;
      v16[12] = v6 + 104;
      v11 = v7;
      *(_QWORD *)&UserData.Size = 4LL;
      v15 = 4LL;
      v16[3] = 4LL;
      v16[5] = 4LL;
      v16[7] = 4LL;
      v16[9] = 4LL;
      v16[11] = 4LL;
      v16[13] = 4LL;
      v12 = *(unsigned __int8 *)(v6 + 112);
      v16[14] = &v12;
      v16[16] = &v17;
      v16[18] = &v18;
      v16[20] = v6 + 72;
      v16[22] = v6 + 108;
      v16[15] = 4LL;
      v16[17] = 4LL;
      v16[19] = 4LL;
      v16[21] = 8LL;
      v16[23] = 4LL;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWriteEx(PpmEtwHandle, v5, 0LL, 0, 0LL, 0LL, 0xEu, &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
