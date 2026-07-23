/*
 * XREFs of RtlGetPersistedStateLocation @ 0x1409B4B60
 * Callers:
 *     PopOpenThermalLoggingKey @ 0x1404BD33C (PopOpenThermalLoggingKey.c)
 *     PipUpdateDeviceProducts @ 0x1405A0600 (PipUpdateDeviceProducts.c)
 *     RtlpGetPersistedRegistryLocation @ 0x1405EC9BC (RtlpGetPersistedRegistryLocation.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14065930C (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140735C50 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PopOpenPersistedRegistryKey @ 0x1407478A0 (PopOpenPersistedRegistryKey.c)
 *     PopInitHiberPersistedRegValues @ 0x140750B4C (PopInitHiberPersistedRegValues.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407A6298 (WmipSaveGuidSecurityDescriptor.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AF5E4 (EtwpInitializeAutoLoggers.c)
 *     SpRegOpenRedirectedKey @ 0x1407BB594 (SpRegOpenRedirectedKey.c)
 *     ExpUuidLoadSequenceNumber @ 0x1407C0FB8 (ExpUuidLoadSequenceNumber.c)
 *     ExpUuidSaveSequenceNumber @ 0x1407C1124 (ExpUuidSaveSequenceNumber.c)
 *     CmpRecordShutdownStopTime @ 0x1407D5A2C (CmpRecordShutdownStopTime.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1409B4974 (WmipGetGuidSecurityDescriptor.c)
 *     PiGetStateRootPath @ 0x1409B55E8 (PiGetStateRootPath.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1409B5838 (PiCreateDriverRedirectedStateKey.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1409B6330 (RtlpGetTimeZoneInfoHandle.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1409B68D0 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     IopUpdateSecureDeviceClassState @ 0x140A60830 (IopUpdateSecureDeviceClassState.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 *     IopGetPersistedStateLocation @ 0x140AB50D8 (IopGetPersistedStateLocation.c)
 *     PopInitializePowerButtonHold @ 0x140C34230 (PopInitializePowerButtonHold.c)
 *     EtwpInitializeSecurity @ 0x140C4043C (EtwpInitializeSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlGetPersistedStateLocation(
        PCWSTR SourceID,
        PCWSTR CustomValue,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PWCHAR TargetPath,
        ULONG BufferLengthIn,
        PULONG BufferLengthOut)
{
  WCHAR *Pool2; // rdi
  NTSTATUS v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  PCWSTR v16; // rdx
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  ULONG v19; // esi
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
  if ( (unsigned int)StateLocationType > LocationTypeFileSystem )
    return -1073741583;
  if ( byte_140E67A31 )
  {
    v11 = -1073741772;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140B3DFB8[2 * StateLocationType];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v11 = v17;
    if ( v17 == -1073741772 )
    {
      byte_140E67A31 = 1;
    }
    else
    {
      if ( v17 < 0 )
        goto LABEL_9;
      RtlInitUnicodeString(&DestinationString, SourceID);
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
        if ( !CustomValue )
          CustomValue = L"TargetNtPath";
        RtlInitUnicodeString(&DestinationString, CustomValue);
        v19 = BufferLengthIn;
        Length = BufferLengthIn + 16;
        if ( BufferLengthIn + 16 < BufferLengthIn )
          goto LABEL_8;
        Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL, Length, 0x70657373u);
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
        else if ( *((_DWORD *)Pool2 + 1) != 1 )
        {
          v11 = -1073741788;
          goto LABEL_9;
        }
        v14 = *((_DWORD *)Pool2 + 2);
        ResultLength = v14;
        if ( v21 >= 0 && Pool2[((unsigned __int64)v14 >> 1) + 5] )
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
            Pool2[(v22 >> 1) + 5] = 0;
            v14 = ResultLength;
          }
        }
        if ( BufferLengthOut )
          *BufferLengthOut = v14;
        if ( v11 < 0 )
          goto LABEL_9;
        v16 = Pool2 + 6;
        goto LABEL_20;
      }
    }
  }
  if ( DefaultPath )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( DefaultPath[v12] );
    v13 = v12 + 1;
    v14 = 2 * v13;
    ResultLength = 2 * v13;
    if ( 2 * v13 < v13 )
    {
LABEL_8:
      v11 = -1073741675;
      goto LABEL_9;
    }
    v11 = BufferLengthIn < v14 ? 0x80000005 : 0;
    if ( BufferLengthOut )
      *BufferLengthOut = v14;
    if ( v14 > BufferLengthIn )
      goto LABEL_9;
    v16 = DefaultPath;
LABEL_20:
    memmove(TargetPath, v16, v14);
  }
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v11;
}
