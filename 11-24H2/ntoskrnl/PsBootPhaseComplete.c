/*
 * XREFs of PsBootPhaseComplete @ 0x1407719D8
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF6FC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E208C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     PspIsDfssEnabled @ 0x140771FB4 (PspIsDfssEnabled.c)
 *     PspQueryForwardersEnabled @ 0x140774628 (PspQueryForwardersEnabled.c)
 *     RtlQueryImageFileExecutionOptions @ 0x14077D930 (RtlQueryImageFileExecutionOptions.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 */

__int64 __fastcall PsBootPhaseComplete(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r8
  bool v7; // bl
  NTSTATUS v8; // ebx
  unsigned int v9; // edi
  unsigned int *v10; // rsi
  __int64 v11; // rax
  _BYTE *ServerSiloGlobals; // rbx
  __int64 result; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v18[2]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING v19; // [rsp+88h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  __int128 KeyValueInformation; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v22[2]; // [rsp+D8h] [rbp-30h] BYREF
  const wchar_t *v23; // [rsp+E0h] [rbp-28h]
  _DWORD v24[4]; // [rsp+E8h] [rbp-20h] BYREF
  const wchar_t *v25; // [rsp+F8h] [rbp-10h]
  int v26; // [rsp+100h] [rbp-8h]
  int v27; // [rsp+108h] [rbp+0h]
  const wchar_t *v28; // [rsp+110h] [rbp+8h]
  int v29; // [rsp+118h] [rbp+10h]

  v16[0] = 8650882LL;
  ResultLength[1] = 0;
  v16[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\LsaInformation";
  KeyHandle = 0LL;
  ValueName.Buffer = L"UACInstalled";
  *(_QWORD *)&ValueName.Length = 1703960LL;
  v18[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System";
  *(&ObjectAttributes.Length + 1) = 0;
  v19.Buffer = L"TypeOfAdminApprovalMode";
  *(&ObjectAttributes.Attributes + 1) = 0;
  v23 = L"EnableLUA";
  v18[0] = 9961622LL;
  v25 = L"EnableVirtualization";
  v28 = L"EnableInstallerDetection";
  KeyValueInformation = 0LL;
  *(_QWORD *)&v19.Length = 3145774LL;
  v22[0] = 1310738;
  v24[0] = 1;
  v24[2] = 2752552;
  v26 = 2;
  v27 = 3276848;
  v29 = 3;
  ResultLength[0] = 0;
  if ( (int)RtlQueryImageFileExecutionOptions(a1, L"DevOverrideEnable", a3, &ResultLength[1]) >= 0 )
  {
    v3 = ResultLength[1] != 0;
    PspGlobalFlags = v3 | PspGlobalFlags & 0xFFFFFFFE;
  }
  RtlQueryImageFileExecutionOptions(v3, L"MaxLoaderThreads", v4, &PsDefaultLoaderThreads);
  RtlQueryImageFileExecutionOptions(v5, L"NoRemoteThreadBeforeProcessInit", v6, &PsNoRemoteThreadBeforeProcessInit);
  v7 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v16;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x10u, ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      v7 = HIDWORD(KeyValueInformation) != 0;
    }
    ObCloseHandle(KeyHandle, 0);
    KeyHandle = 0LL;
    if ( v7 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      if ( v8 < 0 )
        KeyHandle = 0LL;
      v9 = 0;
      v10 = v24;
      do
      {
        if ( KeyHandle )
          v8 = ZwQueryValueKey(
                 KeyHandle,
                 (PUNICODE_STRING)&v22[6 * v9],
                 KeyValuePartialInformation,
                 &KeyValueInformation,
                 0x10u,
                 ResultLength);
        if ( v8 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || HIDWORD(KeyValueInformation) )
          _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), *v10);
        ++v9;
        v10 += 6;
      }
      while ( v9 < 3 );
      if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( KeyHandle )
          v8 = ZwQueryValueKey(KeyHandle, &v19, KeyValuePartialInformation, &KeyValueInformation, 0x10u, ResultLength);
        if ( v8 >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL
          && HIDWORD(KeyValueInformation) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 0xCu);
        }
        else
        {
          _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 0xBu);
        }
      }
      if ( KeyHandle )
        ObCloseHandle(KeyHandle, 0);
    }
  }
  PsCpuFairShareEnabled = PspIsDfssEnabled();
  v11 = PdcCreateWatchdogAroundClientCall();
  ServerSiloGlobals = PsGetServerSiloGlobals(v11);
  ServerSiloGlobals[1016] = PspQueryForwardersEnabled();
  result = PspGlobalFlags & 0xFFFFFFF3 | 4;
  PspGlobalFlags = PspGlobalFlags & 0xFFFFFFF3 | 4;
  return result;
}
