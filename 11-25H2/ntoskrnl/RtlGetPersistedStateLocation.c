/*
 * XREFs of RtlGetPersistedStateLocation @ 0x1409B3D60
 * Callers:
 *     PopOpenThermalLoggingKey @ 0x1404C3350 (PopOpenThermalLoggingKey.c)
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     RtlpGetPersistedRegistryLocation @ 0x1405E30C8 (RtlpGetPersistedRegistryLocation.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14064EC64 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14072BA90 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PopOpenPersistedRegistryKey @ 0x14073D560 (PopOpenPersistedRegistryKey.c)
 *     PopInitHiberPersistedRegValues @ 0x14074675C (PopInitHiberPersistedRegValues.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140796D88 (WmipSaveGuidSecurityDescriptor.c)
 *     EtwpInitializeAutoLoggers @ 0x14079FDC4 (EtwpInitializeAutoLoggers.c)
 *     SpRegOpenRedirectedKey @ 0x1407ABC94 (SpRegOpenRedirectedKey.c)
 *     ExpUuidLoadSequenceNumber @ 0x1407B1398 (ExpUuidLoadSequenceNumber.c)
 *     ExpUuidSaveSequenceNumber @ 0x1407B1504 (ExpUuidSaveSequenceNumber.c)
 *     CmpRecordShutdownStopTime @ 0x1407C5DF0 (CmpRecordShutdownStopTime.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x140992D0C (RtlpGetTimeZoneInfoHandle.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     IopUpdateSecureDeviceClassState @ 0x14099C75C (IopUpdateSecureDeviceClassState.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1409B1E98 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1409B2E6C (PiCreateDriverRedirectedStateKey.c)
 *     PiGetStateRootPath @ 0x1409B2F90 (PiGetStateRootPath.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1409B3B74 (WmipGetGuidSecurityDescriptor.c)
 *     IopGetPersistedStateLocation @ 0x140AB5D7C (IopGetPersistedStateLocation.c)
 *     PopInitializePowerButtonHold @ 0x140C20FEC (PopInitializePowerButtonHold.c)
 *     EtwpInitializeSecurity @ 0x140C2D010 (EtwpInitializeSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  if ( byte_140E67559 )
  {
    v11 = -1073741772;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140B2CF08[2 * StateLocationType];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v11 = v17;
    if ( v17 == -1073741772 )
    {
      byte_140E67559 = 1;
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
        Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
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
