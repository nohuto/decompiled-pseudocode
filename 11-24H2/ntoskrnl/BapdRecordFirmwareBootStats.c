/*
 * XREFs of BapdRecordFirmwareBootStats @ 0x140B60CB0
 * Callers:
 *     PopBootLoaderTraceProcess @ 0x140751AFC (PopBootLoaderTraceProcess.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     BapdRegisterEtwProvider @ 0x1404A4CF8 (BapdRegisterEtwProvider.c)
 *     ExIsSoftBoot @ 0x1404F9880 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwUnregister @ 0x140A00060 (EtwUnregister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     BapdpWriteEventDataToRegistry @ 0x140B6C7D8 (BapdpWriteEventDataToRegistry.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall BapdRecordFirmwareBootStats(__int64 a1)
{
  REGHANDLE v2; // rdi
  _QWORD *Pool2; // rbx
  unsigned __int64 v4; // kr00_8
  unsigned int v5; // r8d
  _QWORD *v6; // rdx
  REGHANDLE v7; // rcx
  ULONG Tag[2]; // [rsp+38h] [rbp-D0h] BYREF
  REGHANDLE RegHandle; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 Data; // [rsp+48h] [rbp-C0h] BYREF
  REGHANDLE v12; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v14; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp-80h] BYREF
  __int64 v20; // [rsp+90h] [rbp-78h] BYREF
  __int64 v21; // [rsp+98h] [rbp-70h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25[2]; // [rsp+C8h] [rbp-40h] BYREF
  REGHANDLE *p_RegHandle; // [rsp+E8h] [rbp-20h]
  __int64 v27; // [rsp+F0h] [rbp-18h]
  unsigned __int64 *v28; // [rsp+F8h] [rbp-10h]
  __int64 v29; // [rsp+100h] [rbp-8h]
  unsigned __int64 *v30; // [rsp+108h] [rbp+0h]
  __int64 v31; // [rsp+110h] [rbp+8h]
  unsigned __int64 *v32; // [rsp+118h] [rbp+10h]
  __int64 v33; // [rsp+120h] [rbp+18h]
  unsigned __int64 *v34; // [rsp+128h] [rbp+20h]
  __int64 v35; // [rsp+130h] [rbp+28h]
  REGHANDLE *v36; // [rsp+138h] [rbp+30h]
  __int64 v37; // [rsp+140h] [rbp+38h]
  __int64 *v38; // [rsp+148h] [rbp+40h]
  __int64 v39; // [rsp+150h] [rbp+48h]
  __int64 *v40; // [rsp+158h] [rbp+50h]
  __int64 v41; // [rsp+160h] [rbp+58h]
  __int64 *v42; // [rsp+168h] [rbp+60h]
  __int64 v43; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+178h] [rbp+70h] BYREF
  unsigned __int64 *v45; // [rsp+188h] [rbp+80h]
  __int64 v46; // [rsp+190h] [rbp+88h]
  unsigned __int64 *p_Data; // [rsp+198h] [rbp+90h]
  __int64 v48; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 *v49; // [rsp+1A8h] [rbp+A0h]
  __int64 v50; // [rsp+1B0h] [rbp+A8h]
  unsigned __int64 *v51; // [rsp+1B8h] [rbp+B0h]
  __int64 v52; // [rsp+1C0h] [rbp+B8h]

  v14 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  RegHandle = 0LL;
  DestinationString = 0LL;
  v2 = 0LL;
  Tag[0] = 0;
  Pool2 = 0LL;
  Data = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E092D8, 0LL, 0LL);
  if ( !ExIsSoftBoot() )
  {
    if ( BapdRegisterEtwProvider(&BOOTENV_ETW_PROVIDER, 1, &RegHandle) >= 0
      && (unsigned int)guard_dispatch_icall_no_overrides(34LL, 0LL, 0LL, Tag) == -1073741820
      && Tag[0]
      && (Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL)) != 0LL
      && (int)guard_dispatch_icall_no_overrides(34LL, Tag[0], Pool2, Tag) >= 0 )
    {
      v2 = RegHandle;
      v12 = Pool2[2] / 0xF4240uLL;
      v13 = Pool2[3] / 0xF4240uLL;
      Data = Pool2[4] / 0xF4240uLL;
      v14 = Pool2[5] / 0xF4240uLL;
      v4 = Pool2[6];
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v12;
      v45 = &v13;
      p_Data = &Data;
      v49 = &v14;
      v51 = &v15;
      v15 = v4 / 0xF4240;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 8LL;
      EtwWrite(RegHandle, &BOOT_FW_BOOT_PERF_DATA, 0LL, 5u, &UserData);
      v5 = dword_140E092D8;
      if ( (unsigned int)dword_140E092D8 > 4 && tlgKeywordOn((__int64)&dword_140E092D8, 0x400000000000LL) )
      {
        RegHandle = v12;
        v27 = 8LL;
        p_RegHandle = &RegHandle;
        v16 = v13;
        v28 = &v16;
        v17 = Data;
        v30 = &v17;
        v18 = v14;
        v32 = &v18;
        v19 = v15;
        v34 = &v19;
        v36 = (REGHANDLE *)&v20;
        v29 = 8LL;
        v31 = 8LL;
        v33 = 8LL;
        v35 = 8LL;
        v20 = 0x1000000LL;
        v37 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E092D8,
          (unsigned __int8 *)byte_140053A3B,
          0LL,
          0LL,
          8u,
          v25);
        v5 = dword_140E092D8;
      }
      if ( a1 && v5 > 4 && tlgKeywordOn((__int64)&dword_140E092D8, 0x400000000000LL) )
      {
        v6 = *(_QWORD **)(a1 + 240);
        v20 = v6[17];
        p_RegHandle = (REGHANDLE *)&v20;
        v27 = 8LL;
        v19 = v6[18];
        v28 = &v19;
        v29 = 8LL;
        v18 = v6[19];
        v30 = &v18;
        v31 = 8LL;
        v17 = v6[20];
        v32 = &v17;
        v33 = 8LL;
        v16 = v6[23];
        v34 = &v16;
        v35 = 8LL;
        RegHandle = v6[24];
        v36 = &RegHandle;
        v37 = 8LL;
        v21 = v6[21];
        v38 = &v21;
        v39 = 8LL;
        v22 = v6[22];
        v40 = &v22;
        v41 = 8LL;
        v23 = v6[483];
        v42 = &v23;
        v43 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E092D8,
          (unsigned __int8 *)&dword_140053AC4,
          0LL,
          0LL,
          0xBu,
          v25);
      }
    }
    else
    {
      v2 = RegHandle;
    }
  }
  RtlInitUnicodeString(&DestinationString, L"FwPOSTTime");
  BapdpWriteEventDataToRegistry(&Data);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, Tag[0]);
  if ( v2 )
    EtwUnregister(v2);
  v7 = qword_140E092F8;
  qword_140E092F8 = 0LL;
  dword_140E092D8 = 0;
  return EtwUnregister(v7);
}
