/*
 * XREFs of RtlGetPersistedStateLocation @ 0x1409CC0E0
 * Callers:
 *     PopOpenThermalLoggingKey @ 0x1404C1D4C (PopOpenThermalLoggingKey.c)
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     RtlpGetPersistedRegistryLocation @ 0x1405EF3DC (RtlpGetPersistedRegistryLocation.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14065ABEC (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140737D20 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PopOpenPersistedRegistryKey @ 0x140749570 (PopOpenPersistedRegistryKey.c)
 *     PopInitHiberPersistedRegValues @ 0x14075282C (PopInitHiberPersistedRegValues.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407A6158 (WmipSaveGuidSecurityDescriptor.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AF194 (EtwpInitializeAutoLoggers.c)
 *     SpRegOpenRedirectedKey @ 0x1407BB144 (SpRegOpenRedirectedKey.c)
 *     ExpUuidLoadSequenceNumber @ 0x1407C0B68 (ExpUuidLoadSequenceNumber.c)
 *     ExpUuidSaveSequenceNumber @ 0x1407C0CD4 (ExpUuidSaveSequenceNumber.c)
 *     CmpRecordShutdownStopTime @ 0x1407D553C (CmpRecordShutdownStopTime.c)
 *     IopUpdateSecureDeviceClassState @ 0x1409A1648 (IopUpdateSecureDeviceClassState.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1409CA218 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1409CB1EC (PiCreateDriverRedirectedStateKey.c)
 *     PiGetStateRootPath @ 0x1409CB310 (PiGetStateRootPath.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1409CBEF4 (WmipGetGuidSecurityDescriptor.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1409DBBB4 (RtlpGetTimeZoneInfoHandle.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     IopGetPersistedStateLocation @ 0x140ABA0BC (IopGetPersistedStateLocation.c)
 *     PopInitializePowerButtonHold @ 0x140C320F0 (PopInitializePowerButtonHold.c)
 *     EtwpInitializeSecurity @ 0x140C3E2EC (EtwpInitializeSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlGetPersistedStateLocation(
        PCWSTR SourceString,
        const WCHAR *a2,
        _WORD *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  _DWORD *Pool2; // rdi
  signed int v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  const void *v16; // rdx
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  unsigned int v19; // esi
  ULONG Length; // ebx
  NTSTATUS v21; // eax
  unsigned __int64 v22; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C8h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  Pool2 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( a4 > 1 )
    return 3221225713LL;
  if ( byte_140E67878 )
  {
    v11 = -1073741772;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140B3C1D8[2 * (int)a4];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v11 = v17;
    if ( v17 == -1073741772 )
    {
      byte_140E67878 = 1;
    }
    else
    {
      if ( v17 < 0 )
        goto LABEL_9;
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v18 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v11 = v18;
      if ( v18 != -1073741772 )
      {
        if ( v18 < 0 )
          goto LABEL_9;
        if ( !a2 )
          a2 = L"TargetNtPath";
        RtlInitUnicodeString(&DestinationString, a2);
        v19 = a6;
        Length = a6 + 16;
        if ( a6 + 16 < a6 )
          goto LABEL_8;
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          v11 = -1073741801;
          goto LABEL_9;
        }
        v21 = ZwQueryValueKey(Handle, &DestinationString, KeyValuePartialInformation, Pool2, Length, &ResultLength);
        v11 = v21;
        if ( v21 < 0 )
        {
          if ( v21 != -2147483643 )
            goto LABEL_9;
        }
        else if ( Pool2[1] != 1 )
        {
          v11 = -1073741788;
          goto LABEL_9;
        }
        v14 = Pool2[2];
        ResultLength = v14;
        if ( v21 >= 0 && *((_WORD *)Pool2 + ((unsigned __int64)v14 >> 1) + 5) )
        {
          v22 = v14 + 2;
          ResultLength = v22;
          v14 += 2;
          if ( v19 < (unsigned int)v22 )
          {
            v11 = -2147483643;
          }
          else
          {
            *((_WORD *)Pool2 + (v22 >> 1) + 5) = 0;
            v14 = ResultLength;
          }
        }
        if ( a7 )
          *a7 = v14;
        if ( v11 < 0 )
          goto LABEL_9;
        v16 = Pool2 + 3;
        goto LABEL_20;
      }
    }
  }
  if ( a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    v13 = v12 + 1;
    v14 = 2 * v13;
    ResultLength = 2 * v13;
    if ( 2 * v13 < v13 )
    {
LABEL_8:
      v11 = -1073741675;
      goto LABEL_9;
    }
    v11 = a6 < v14 ? 0x80000005 : 0;
    if ( a7 )
      *a7 = v14;
    if ( v14 > a6 )
      goto LABEL_9;
    v16 = a3;
LABEL_20:
    memmove(a5, v16, v14);
  }
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v11;
}
