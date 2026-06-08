/*
 * XREFs of ProcLibTraceProcessorRundown @ 0x14003DA74
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14003D7C0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x140002EA8 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorRundown(__int64 a1)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v3; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  ULONG Type; // [rsp+48h] [rbp-19h] BYREF
  int Data; // [rsp+4Ch] [rbp-15h] BYREF
  ULONG RequiredSize; // [rsp+50h] [rbp-11h] BYREF
  int v12; // [rsp+54h] [rbp-Dh] BYREF
  int v13; // [rsp+58h] [rbp-9h] BYREF
  int v14; // [rsp+5Ch] [rbp-5h] BYREF
  int v15; // [rsp+60h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  int *v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  int *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  _BYTE v23[16]; // [rsp+98h] [rbp+37h] BYREF

  v15 = 0;
  RequiredSize = 0;
  Type = 0;
  Data = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)&PPM_ETW_PROCESSOR_FIRMWARE_RUNDOWN,
                                                              (__int64)&PPM_ETW_PROCESSOR_FIRMWARE_RUNDOWN_HV,
                                                              (__int64)&v15,
                                                              (__int64)v23);
  v3 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v4 = *(_DWORD *)(a1 + 1104);
      v5 = *(_DWORD *)(a1 + 1108) & v4;
      v6 = ~*(_DWORD *)(a1 + 1112);
      v12 = v4;
      v7 = v5 & v6;
      v13 = v5;
      v14 = v7;
      if ( qword_140014B90 )
      {
        v12 = v4 | 0x4000;
        v14 = v7 | 0x4000;
        v13 = v5 | 0x4000;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &PROCESSOR_ETW_FEATUREPRESENT_OVERRIDE,
             0,
             (ULONG)0,
             (ULONG)4,
             &Data,
             &RequiredSize,
             &Type) >= 0
        && Type == 7 )
      {
        v12 = Data;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &PROCESSOR_ETW_FEATUREACCESSED_OVERRIDE,
             0,
             (ULONG)0,
             (ULONG)4,
             &Data,
             &RequiredSize,
             &Type) >= 0
        && Type == 7 )
      {
        v13 = Data;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &PROCESSOR_ETW_FEATUREVALID_OVERRIDE,
             0,
             (ULONG)0,
             (ULONG)4,
             &Data,
             &RequiredSize,
             &Type) >= 0
        && Type == 7 )
      {
        v14 = Data;
      }
      UserData.Reserved = 0;
      v19 = 0;
      v22 = 0;
      UserData.Ptr = (unsigned __int64)&v12;
      v17 = &v13;
      v20 = &v14;
      UserData.Size = 4;
      v18 = 4;
      v21 = 4;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWrite(
                                                (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                                v3,
                                                0LL,
                                                (ULONG)4,
                                                &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
