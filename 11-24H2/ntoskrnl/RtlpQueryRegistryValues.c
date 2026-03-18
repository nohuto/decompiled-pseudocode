/*
 * XREFs of RtlpQueryRegistryValues @ 0x1409CC350
 * Callers:
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14070C6F0 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x140722734 (IopQueryPassiveInterruptRegistryOptions.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140737FA4 (PiDrvDbQuerySystemPathWin32.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1407731C8 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x140773264 (PspSiloGetSuiteMaskStringFromRegistry.c)
 *     PspQueryForwardersEnabled @ 0x140774408 (PspQueryForwardersEnabled.c)
 *     RtlSetActiveTimeBias @ 0x1407821AC (RtlSetActiveTimeBias.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14078291C (RtlpUpdateDynamicTimeZones.c)
 *     SmKmRegParamsLoad @ 0x14079A498 (SmKmRegParamsLoad.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14079BE58 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407A0A4C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x1407A7F9C (EtwpGetPmcCpuHierarchyRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A8694 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407A89A8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwStartAutoLogger @ 0x1407ADDF8 (EtwStartAutoLogger.c)
 *     ExpReadTimeZoneInformation @ 0x1407B67D8 (ExpReadTimeZoneInformation.c)
 *     ExIsStateSeparationEnabled @ 0x1407B7BE0 (ExIsStateSeparationEnabled.c)
 *     ExpGetNumberOfInitialSessionsFromRegistry @ 0x1407B7C78 (ExpGetNumberOfInitialSessionsFromRegistry.c)
 *     VRegSetup @ 0x140829110 (VRegSetup.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140831268 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryDriverNode @ 0x140996564 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1409CBEF4 (WmipGetGuidSecurityDescriptor.c)
 *     RtlQueryRegistryValues @ 0x1409CC2D0 (RtlQueryRegistryValues.c)
 *     RtlQueryRegistryValuesEx @ 0x1409CC2F0 (RtlQueryRegistryValuesEx.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1409DB994 (RtlpQueryTimeZoneInformationWorker.c)
 *     WmipQueryWmiDataBlock @ 0x140A41D60 (WmipQueryWmiDataBlock.c)
 *     ExpPcwDisabledStatus @ 0x140A4C4F0 (ExpPcwDisabledStatus.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A6A994 (PiDevCfgClearDeviceMigrationNode.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A79EF0 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140A7A638 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x140A7AE98 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140A7B268 (EtwpGetAutoLoggerEventNameFilter.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140A7DF0C (PiDevCfgQueryDriverConfiguration.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140AA3320 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     DbgPrint @ 0x1402CB260 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1406A6670 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x1406A7FF0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpGetRegistryHandle @ 0x1409CC85C (RtlpGetRegistryHandle.c)
 *     RtlpCallQueryRegistryRoutine @ 0x1409E9FD0 (RtlpCallQueryRegistryRoutine.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpQueryRegistryValues(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, ULONG a5, char a6)
{
  __int64 v6; // r12
  const WCHAR *v8; // rbx
  int v9; // r15d
  __int64 result; // rax
  bool v11; // zf
  int v12; // esi
  int v13; // r15d
  __int64 Pool2; // rax
  __int64 v15; // rdi
  int v16; // ebx
  ULONG Length; // r13d
  int v18; // eax
  int v19; // eax
  const WCHAR *v20; // rdx
  int v21; // eax
  NTSTATUS v22; // eax
  ULONG v23; // esi
  __int64 v24; // rax
  int v25; // r12d
  ULONG i; // esi
  NTSTATUS v27; // eax
  ULONG v28; // r15d
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  char v32; // al
  int ResultLength; // [rsp+30h] [rbp-61h]
  int ResultLengtha; // [rsp+30h] [rbp-61h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-19h] BYREF
  int v40; // [rsp+E8h] [rbp+57h]

  v40 = a1;
  v6 = a4;
  memset(&ObjectAttributes, 0, 44);
  Handle = 0LL;
  v8 = a2;
  a5 = 0;
  v9 = a1;
  DestinationString = 0LL;
  ValueName = 0LL;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  if ( (int)result >= 0 )
  {
    v11 = (v9 & 0x40000000) == 0;
    v12 = v9 & 0x40000000;
    v13 = 0;
    if ( !v11 )
      v8 = 0LL;
    RtlInitUnicodeString(&DestinationString, v8);
    Pool2 = ExAllocatePool2(0x100uLL);
    v15 = Pool2;
    if ( !Pool2 )
    {
      v16 = -1073741801;
      if ( !v12 )
        ZwClose(Handle);
      return (unsigned int)v16;
    }
    *(_DWORD *)(Pool2 + 8) = 0;
    v16 = 0;
    Length = 134;
    KeyHandle = Handle;
LABEL_6:
    if ( !*(_QWORD *)a3 && (*(_DWORD *)(a3 + 8) & 0x21) == 0 )
      goto LABEL_22;
    v18 = *(_DWORD *)(a3 + 8);
    if ( (v18 & 0x20) != 0 && (!*(_QWORD *)(a3 + 16) || (v18 & 1) != 0 || *(_QWORD *)a3) )
      goto LABEL_38;
    if ( (v18 & 3) != 0 && KeyHandle != Handle )
    {
      ZwClose(KeyHandle);
      KeyHandle = Handle;
    }
    v19 = *(_DWORD *)(a3 + 8);
    v20 = *(const WCHAR **)(a3 + 16);
    if ( (v19 & 1) == 0 )
    {
      if ( !v20 )
      {
        if ( (v19 & 8) == 0 )
        {
LABEL_46:
          v25 = 0;
          for ( i = 0; ; ++i )
          {
            v27 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v15, Length, &a5);
            v16 = v27;
            if ( v27 == -2147483643 )
              goto LABEL_48;
            if ( v27 == -2147483622 )
            {
              if ( i || (*(_DWORD *)(a3 + 8) & 4) == 0 )
                v16 = 0;
              else
                v16 = -1073741772;
              goto LABEL_43;
            }
            if ( v27 >= 0 )
            {
              a5 = Length;
              v27 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&a5, a4, ResultLengtha, a6);
              v16 = v27;
            }
            if ( v27 == -1073741789 )
            {
LABEL_48:
              v28 = a5;
              if ( v15 )
                ExFreePoolWithTag((PVOID)v15, 0);
              v29 = ExAllocatePool2(0x100uLL);
              v15 = v29;
              if ( !v29 )
              {
LABEL_21:
                v16 = -1073741801;
                goto LABEL_22;
              }
              v16 = 0;
              Length = v28 + 8;
              *(_DWORD *)(v29 + 8) = 0;
              --i;
              v30 = v25++;
              if ( v30 > 4 )
              {
                DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1458);
                v13 = 0;
                goto LABEL_44;
              }
              v13 = 0;
            }
            else
            {
              if ( v27 < 0 )
                goto LABEL_43;
              v25 = 0;
              if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
              {
                ValueName.Buffer = (wchar_t *)(v15 + 20);
                ValueName.Length = *(_WORD *)(v15 + 16);
                ValueName.MaximumLength = *(_WORD *)(v15 + 16);
                if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
                  --i;
              }
            }
          }
        }
        v16 = guard_dispatch_icall_no_overrides(0LL, 0LL, 0LL, 0LL);
        goto LABEL_43;
      }
      RtlInitUnicodeString(&ValueName, v20);
      while ( 1 )
      {
        v21 = v13++;
        if ( v21 > 4 )
        {
          DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1277);
          goto LABEL_22;
        }
        v22 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, (PVOID)v15, Length, &a5);
        v16 = v22;
        if ( v22 == -2147483643 )
          goto LABEL_17;
        if ( v22 < 0 )
          break;
        if ( *(_DWORD *)(v15 + 4) == 7 )
        {
          *(_WORD *)(a5 + v15) = 0;
          *(_DWORD *)(v15 + 12) += 2;
        }
        a5 = Length;
        v31 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&a5, v6, ResultLength, a6);
        v16 = v31;
        if ( v31 != -1073741789 )
        {
          v13 = 0;
          if ( v31 < 0 )
            goto LABEL_43;
          if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
            ZwDeleteValueKey(KeyHandle, &ValueName);
LABEL_44:
          v6 = a4;
          a3 += 56LL;
          goto LABEL_6;
        }
        v23 = a5;
LABEL_33:
        ExFreePoolWithTag((PVOID)v15, 0);
LABEL_34:
        v24 = ExAllocatePool2(0x100uLL);
        v15 = v24;
        if ( !v24 )
          goto LABEL_21;
        v16 = 0;
        *(_DWORD *)(v24 + 8) = 0;
        Length = v23 + 8;
      }
      if ( v22 == -1073741772 )
      {
        v32 = a6;
        *(_DWORD *)(v15 + 4) = 0;
        *(_DWORD *)(v15 + 12) = 0;
        a5 = Length;
        v22 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&a5, v6, ResultLength, v32);
        v16 = v22;
      }
      if ( v22 != -1073741789 )
      {
        v13 = 0;
        goto LABEL_43;
      }
LABEL_17:
      v23 = a5;
      if ( !v15 )
        goto LABEL_34;
      goto LABEL_33;
    }
    if ( !v20 )
    {
LABEL_38:
      v16 = -1073741811;
      goto LABEL_22;
    }
    RtlInitUnicodeString(&DestinationString, v20);
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
    if ( v16 >= 0 )
    {
      if ( !*(_QWORD *)a3 )
        goto LABEL_44;
      goto LABEL_46;
    }
LABEL_43:
    if ( v16 >= 0 )
      goto LABEL_44;
LABEL_22:
    if ( Handle && (v40 & 0x40000000) == 0 )
      ZwClose(Handle);
    if ( KeyHandle && KeyHandle != Handle )
      ZwClose(KeyHandle);
    if ( v15 )
      ExFreePoolWithTag((PVOID)v15, 0);
    return (unsigned int)v16;
  }
  return result;
}
