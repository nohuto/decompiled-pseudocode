/*
 * XREFs of BapdWriteEtwEvents @ 0x1404A4354
 * Callers:
 *     BapdpProcessEtwEvents @ 0x140646DA4 (BapdpProcessEtwEvents.c)
 *     PopBootLoaderTraceProcess @ 0x140745A2C (PopBootLoaderTraceProcess.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     BapdRegisterEtwProvider @ 0x1404A47C8 (BapdRegisterEtwProvider.c)
 *     BapdpParseEventParts @ 0x1404F406C (BapdpParseEventParts.c)
 *     wcslen @ 0x1404FD750 (wcslen.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
 *     EtwSetInformation @ 0x140A9F290 (EtwSetInformation.c)
 *     BapdpWriteEventDataToRegistry @ 0x140B5D6F8 (BapdpWriteEventDataToRegistry.c)
 */

__int64 __fastcall BapdWriteEtwEvents(ULONGLONG a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  GUID *v5; // r14
  REGHANDLE v6; // r15
  REGHANDLE v7; // rdi
  NTSTATUS v8; // r12d
  REGHANDLE v9; // r13
  int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  REGHANDLE v16; // r14
  const GUID *ActivityId; // rcx
  __int64 v18; // rcx
  size_t v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  char v23; // [rsp+48h] [rbp-59h]
  GUID *v24; // [rsp+50h] [rbp-51h]
  unsigned __int64 v25; // [rsp+58h] [rbp-49h]
  ULONG CheckStamp[2]; // [rsp+60h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-39h] BYREF
  REGHANDLE v28; // [rsp+78h] [rbp-29h] BYREF
  ULONGLONG RegHandle; // [rsp+80h] [rbp-21h] BYREF
  ULONGLONG v30; // [rsp+88h] [rbp-19h] BYREF
  ULONGLONG v31; // [rsp+90h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v33; // [rsp+A8h] [rbp+7h]
  int v34; // [rsp+B0h] [rbp+Fh]
  int v35; // [rsp+B4h] [rbp+13h]

  v3 = a2 + a3;
  v31 = a1;
  v4 = a2;
  v25 = v3;
  CheckStamp[1] = 0;
  v5 = &CPER_EMPTY_GUID;
  CheckStamp[0] = 0;
  RegHandle = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v24 = &CPER_EMPTY_GUID;
  DestinationString = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = EtwRegister(&BOOTENV_ETW_PROVIDER, 0LL, 0LL, &RegHandle);
  if ( v8 < 0 )
  {
    v9 = 0LL;
    goto LABEL_3;
  }
  v9 = RegHandle;
  EtwSetInformation(
    RegHandle,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  v23 = 0;
  v8 = EtwRegister(&BOOT_PROVIDER_GUID, 0LL, 0LL, &v30);
  if ( v8 >= 0 )
  {
    v6 = v30;
    v8 = 0;
    while ( 1 )
    {
      if ( v4 >= v3 )
      {
        if ( (qword_140EFE818 & 4) != 0 )
        {
          CheckStamp[0] = 0;
          RtlInitUnicodeString(&DestinationString, L"BootmgrUserInputTime");
          BapdpWriteEventDataToRegistry(CheckStamp);
          RtlInitUnicodeString(&DestinationString, L"POSTTime");
          BapdpWriteEventDataToRegistry(CheckStamp);
        }
        break;
      }
      v11 = *(_DWORD *)(v4 + 8);
      if ( v11 == 6 )
      {
        BapdpParseEventParts(v4 + 48, v4 + 68, *(_DWORD *)(v4 + 64), (unsigned int)&UserData, (__int64)&CheckStamp[1]);
        v13 = (_QWORD *)(v4 + 32);
        v14 = *(_QWORD *)(v4 + 32);
        v15 = *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1 - v14;
        if ( *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1 == v14 )
          v15 = *(_QWORD *)BOOTENV_ETW_PROVIDER.Data4 - *(_QWORD *)(v4 + 40);
        if ( v15 )
        {
          v20 = *(_QWORD *)&BOOT_PROVIDER_GUID.Data1 - v14;
          if ( *(_QWORD *)&BOOT_PROVIDER_GUID.Data1 == v14 )
            v20 = *(_QWORD *)BOOT_PROVIDER_GUID.Data4 - *(_QWORD *)(v4 + 40);
          if ( v20 )
          {
            v21 = *(_QWORD *)&v5->Data1 - v14;
            if ( *(_QWORD *)&v5->Data1 == v14 )
              v21 = *(_QWORD *)v5->Data4 - *(_QWORD *)(v4 + 40);
            if ( v21 )
            {
              if ( v7 )
              {
                EtwUnregister(v7);
                v28 = 0LL;
              }
              LOBYTE(v12) = *(_BYTE *)(v4 + 51) != 11;
              v22 = BapdRegisterEtwProvider(v4 + 32, v12, &v28);
              v7 = v28;
              v8 = v22;
              if ( v22 < 0 )
                break;
              v16 = v28;
              v24 = (GUID *)(v4 + 32);
              if ( *(_BYTE *)(v4 + 51) == 11 )
                EtwSetInformation(v28, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
            }
            else
            {
              v16 = v7;
            }
          }
          else
          {
            v16 = v6;
            if ( !v23 && *(_BYTE *)(v4 + 51) == 11 )
            {
              EtwSetInformation(v6, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
              v23 = 1;
            }
          }
        }
        else
        {
          v16 = v9;
        }
        if ( EtwEventEnabled(v16, (PCEVENT_DESCRIPTOR)(v4 + 48)) )
        {
          ActivityId = *(_BYTE *)(v4 + 15) ? (const GUID *)(v4 + 16) : 0LL;
          v8 = EtwWriteEx(v16, (PCEVENT_DESCRIPTOR)(v4 + 48), 0LL, 0, ActivityId, 0LL, CheckStamp[1], &UserData);
          if ( v8 < 0 )
            break;
        }
        v18 = *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1 - *v13;
        if ( *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1 == *v13 )
          v18 = *(_QWORD *)BOOTENV_ETW_PROVIDER.Data4 - *(_QWORD *)(v4 + 40);
        if ( v18 )
          goto LABEL_23;
        switch ( *(_WORD *)(v4 + 48) )
        {
          case 0xB:
            RtlInitUnicodeString(&DestinationString, L"POSTTime");
            goto LABEL_33;
          case 0x10:
            goto LABEL_60;
          case 0x14:
            if ( !*(_DWORD *)(v4 + 68) )
              ZwUpdateWnfStateData(&WNF_BOOT_DIRTY_SHUTDOWN, 0LL, 0, 0LL, 0LL, 0, 0);
            goto LABEL_23;
          case 0x1D:
LABEL_60:
            ExBootAppFailureStatus = *(_DWORD *)(v4 + 68);
            goto LABEL_23;
          case 0x20:
            *(_QWORD *)&DestinationString.Length = 0LL;
            DestinationString.Buffer = (wchar_t *)L"BootmgrUserInputTime";
            v19 = 2 * wcslen(L"BootmgrUserInputTime");
            if ( v19 >= 0xFFFE )
              LOWORD(v19) = -4;
            DestinationString.Length = v19;
            DestinationString.MaximumLength = v19 + 2;
LABEL_33:
            BapdpWriteEventDataToRegistry((PVOID)(v4 + 68));
LABEL_23:
            v3 = v25;
            v5 = v24;
            goto LABEL_24;
        }
        v5 = v24;
        v3 = v25;
        if ( *(_WORD *)(v4 + 48) == 158 )
          ExBootAppErrorDiagCode = *(_DWORD *)(v4 + 68);
      }
      else if ( v11 == 5 && *(_DWORD *)(v4 + 4) >= 0x24u && *(_DWORD *)(v4 + 32) )
      {
        UserData.Reserved = 0;
        v35 = 0;
        v33 = v4 + 32;
        UserData.Ptr = v31;
        UserData.Size = 16;
        v34 = 4;
        EtwWriteEx(v9, &BootEventsLost, 0LL, 0, 0LL, 0LL, 2u, &UserData);
      }
LABEL_24:
      v4 = (*(unsigned int *)(v4 + 4) + v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    }
  }
LABEL_3:
  if ( v9 )
    EtwUnregister(v9);
  if ( v6 )
    EtwUnregister(v6);
  if ( v7 )
    EtwUnregister(v7);
  return (unsigned int)v8;
}
