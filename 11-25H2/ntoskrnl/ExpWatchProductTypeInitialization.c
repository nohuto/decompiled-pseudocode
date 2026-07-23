/*
 * XREFs of ExpWatchProductTypeInitialization @ 0x140C303BC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     wcsncmp @ 0x1404FD850 (wcsncmp.c)
 *     wcscat_s @ 0x140501FC0 (wcscat_s.c)
 *     wcscpy_s @ 0x140502060 (wcscpy_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExpGetNtProductTypeFromLicenseValue @ 0x1407A7AFC (ExpGetNtProductTypeFromLicenseValue.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     NtNotifyChangeKey @ 0x140937800 (NtNotifyChangeKey.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtOpenKey @ 0x140AD33A0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140C2FE0C (ExpUpdateProductSuiteTypeInRegistry.c)
 *     ExpLicenseWatchInitWorker @ 0x140C4B234 (ExpLicenseWatchInitWorker.c)
 */

char ExpWatchProductTypeInitialization()
{
  PVOID v0; // rsi
  NTSTATUS v1; // eax
  NTSTATUS v2; // eax
  PVOID v3; // rdi
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  void *Pool2; // rax
  NTSTATUS v10; // eax
  size_t v11; // r8
  NTSTATUS v12; // eax
  char v13; // r14
  __int64 v14; // rax
  NTSTATUS v15; // eax
  ULONG v16; // r12d
  ULONG_PTR v17; // rsi
  ULONG v18; // r13d
  ULONG_PTR v19; // r14
  bool v20; // di
  _DWORD *v21; // r15
  ULONG_PTR v22; // r8
  ULONG i; // r14d
  NTSTATUS v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdi
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  wchar_t *v29; // rax
  __int64 v30; // rcx
  NTSTATUS v31; // eax
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v38; // [rsp+B8h] [rbp-48h] BYREF
  __int128 KeyInformation; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v40; // [rsp+D8h] [rbp-28h]
  __int128 v41; // [rsp+E8h] [rbp-18h]
  __int128 v42; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  int v44; // [rsp+11Ch] [rbp+1Ch]

  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v0 = 0LL;
  ResultLength = 0;
  KeyHandle = 0LL;
  v42 = 0LL;
  *(_BYTE *)(MmWriteableSharedUserData + 616) = 1;
  ExpSetupModeDetected = 0;
  ValueName = 0LL;
  ExpSystemSetupInProgress = 0;
  ExpGetNtProductTypeFromLicenseValue((_DWORD *)(MmWriteableSharedUserData + 612));
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = NtOpenKey(&ExpSetupKey, 0x2001Fu, &ObjectAttributes);
  if ( v1 < 0 )
    KeBugCheckEx(0x9Au, 2uLL, (unsigned int)v1, 0LL, 0LL);
  Object = 0LL;
  v2 = ObReferenceObjectByHandle(ExpSetupKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v3 = Object;
  if ( v2 < 0 )
    KeBugCheckEx(0x9Au, 0xBuLL, (unsigned int)v2, 0LL, 0LL);
  RtlInitUnicodeString(&ValueName, L"SetupType");
  v4 = NtQueryValueKey(ExpSetupKey, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x48u, &ResultLength);
  if ( v4 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v4, 0LL, 0LL);
  if ( v44 == 1 || v44 == 4 )
  {
    ExpSetupModeDetected = 1;
    *(_BYTE *)(MmWriteableSharedUserData + 616) = 0;
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    v3 = 0LL;
  }
  RtlInitUnicodeString(&ValueName, L"SystemSetupInProgress");
  v5 = NtQueryValueKey(ExpSetupKey, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x48u, &ResultLength);
  if ( v5 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v5, 0LL, 0LL);
  if ( v44 == 1 )
    ExpSystemSetupInProgress = 1;
  ExpLicenseWatchInitWorker();
  if ( InitIsWinPEMode )
  {
    ExpControlKey = v3;
    return 1;
  }
  qword_140EFE510 = (__int64)ExpWatchProductTypeWork;
  qword_140EFE518 = 0LL;
  *(_QWORD *)ExpWatchProductTypeWorkItem = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtOpenKey(&ExpProductTypeKey, 0x2001Fu, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    if ( !ExpSetupModeDetected )
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(ExpProductTypeKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
      v0 = Object;
      if ( v8 < 0 )
        KeBugCheckEx(0x9Au, 0xCuLL, (unsigned int)v8, 0LL, 0LL);
    }
    ExpControlKey = v3;
    qword_140EFE568 = v0;
    ExpUpdateProductSuiteTypeInRegistry();
    RtlInitUnicodeString(&ValueName, L"ProductType");
    Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x22uLL, 0x2079654BuLL);
    ExpProductTypeValueInfo = (__int64)Pool2;
    if ( Pool2 )
    {
      v10 = NtQueryValueKey(ExpProductTypeKey, &ValueName, KeyValuePartialInformation, Pool2, 0x22u, &ResultLength);
      if ( v10 >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        if ( NtQueryValueKey(ExpProductTypeKey, &ValueName, KeyValuePartialInformation, &v42, 0x10u, &ResultLength) != -2147483643 )
          goto LABEL_29;
        ResultLength += 16;
        qword_140E61D68 = (PVOID)ExAllocatePool2(0x100uLL, ResultLength, 0x2079654BuLL);
        if ( !qword_140E61D68 )
          KeBugCheckEx(0x9Au, 0x14uLL, ResultLength, 2uLL, 0LL);
        if ( NtQueryValueKey(
               ExpProductTypeKey,
               &ValueName,
               KeyValuePartialInformation,
               qword_140E61D68,
               ResultLength,
               &ResultLength) >= 0
          || (ExFreePoolWithTag(qword_140E61D68, 0), qword_140E61D68 = 0LL, !ExpSetupModeDetected) )
        {
LABEL_29:
          v11 = -1LL;
          do
            ++v11;
          while ( aLanmannt[v11] );
          if ( !wcsncmp(L"LanmanNT", (const wchar_t *)(ExpProductTypeValueInfo + 12), v11)
            && InitSafeBootMode == 3
            && !ExpSetupModeDetected )
          {
            *(_BYTE *)(MmWriteableSharedUserData + 616) = 1;
            *(_DWORD *)(MmWriteableSharedUserData + 612) = 3;
          }
          v12 = NtNotifyChangeKey(
                  ExpProductTypeKey,
                  0LL,
                  ExpWatchProductTypeWorkItem,
                  (PVOID)1,
                  &ExpProductTypeIoSb,
                  0x10000005u,
                  0,
                  &ExpProductTypeChangeBuffer,
                  4u,
                  1u);
          if ( v12 >= 0 )
          {
            RtlInitUnicodeString(
              &DestinationString,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              LODWORD(Object) = 0;
              KeyInformation = 0LL;
              v13 = 0;
              v14 = -1LL;
              v40 = 0LL;
              v41 = 0LL;
              ValueName = 0LL;
              v38 = 0LL;
              do
                ++v14;
              while ( aRegistryMachin_170[v14] );
              ValueName.Length = 2 * (v14 + 64);
              ValueName.MaximumLength = ValueName.Length;
              ValueName.Buffer = (wchar_t *)ExAllocatePool2(0x40uLL, ValueName.Length, 0x2079654BuLL);
              if ( !ValueName.Buffer )
                KeBugCheckEx(0x9Au, 0x14uLL, ValueName.Length, 3uLL, 0LL);
              v15 = NtQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, (PULONG)&Object);
              if ( v15 < 0 )
                KeBugCheckEx(0x9Au, 0x13uLL, v15, 1uLL, 0LL);
              v16 = 2 * DWORD2(v40) + 56;
              if ( v16 < DWORD2(v40) || v16 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v40) + 16) )
                v13 = 1;
              v17 = ExAllocatePool2(0x40uLL, v16, 0x2079654BuLL);
              if ( !v17 || v13 )
                KeBugCheckEx(0x9Au, 0x14uLL, v16, 4uLL, 0LL);
              v18 = DWORD2(v41) + 32;
              v19 = (unsigned int)(DWORD2(v41) + 32);
              v20 = (unsigned int)(DWORD2(v41) + 32) < DWORD2(v41);
              v21 = (_DWORD *)ExAllocatePool2(0x40uLL, v19, 0x2079654BuLL);
              if ( !v21 || v20 )
                KeBugCheckEx(0x9Au, 0x14uLL, v19, 5uLL, 0LL);
              ExpLicenseInfoCount = DWORD1(v40);
              v22 = 80LL * DWORD1(v40);
              if ( v22 > 0xFFFFFFFF )
                KeBugCheckEx(0x9Au, 0x14uLL, v22, 6uLL, 0LL);
              ExpLicenseInfo = ExAllocatePool2(0x40uLL, (unsigned int)v22, 0x2079654BuLL);
              if ( !ExpLicenseInfo )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * (unsigned int)ExpLicenseInfoCount, 6uLL, 0LL);
              RtlInitUnicodeString(&v38, L"ConcurrentLimit");
              for ( i = 0; ; ++i )
              {
                v24 = NtEnumerateKey(KeyHandle, i, KeyBasicInformation, (PVOID)v17, v16, (PULONG)&Object);
                if ( v24 == -2147483622 )
                  break;
                if ( v24 < 0 )
                  KeBugCheckEx(0x9Au, 0x1AuLL, v24, 0LL, 0LL);
                *(_WORD *)(v17 + 2 * ((unsigned __int64)*(unsigned int *)(v17 + 12) >> 1) + 16) = 0;
                wcscpy_s(
                  ValueName.Buffer,
                  (unsigned __int64)ValueName.MaximumLength >> 1,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
                wcscat_s(ValueName.Buffer, (unsigned __int64)ValueName.MaximumLength >> 1, L"\\");
                wcscat_s(ValueName.Buffer, (unsigned __int64)ValueName.MaximumLength >> 1, (const wchar_t *)(v17 + 16));
                v25 = -1LL;
                do
                  ++v25;
                while ( ValueName.Buffer[v25] );
                ObjectAttributes.RootDirectory = 0LL;
                ValueName.Length = 2 * v25;
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = &ValueName;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                v26 = 80LL * i;
                v27 = NtOpenKey((PHANDLE)(v26 + ExpLicenseInfo), 0x2001Fu, &ObjectAttributes);
                if ( v27 < 0 )
                  KeBugCheckEx(0x9Au, 0x16uLL, v27, 1uLL, 0LL);
                v28 = NtQueryValueKey(
                        *(HANDLE *)(v26 + ExpLicenseInfo),
                        &v38,
                        KeyValuePartialInformation,
                        v21,
                        v18,
                        (PULONG)&Object);
                if ( v28 < 0 )
                  KeBugCheckEx(0x9Au, 0x13uLL, v28, 2uLL, 0LL);
                v29 = (wchar_t *)ExAllocatePool2(0x40uLL, ValueName.Length, 0x2079654BuLL);
                *(_QWORD *)(v26 + ExpLicenseInfo + 16) = v29;
                if ( !v29 )
                  KeBugCheckEx(0x9Au, 0x14uLL, ValueName.Length, 7uLL, 0LL);
                wcscpy_s(v29, (unsigned __int64)ValueName.Length >> 1, ValueName.Buffer);
                v30 = v26 + ExpLicenseInfo;
                *(_DWORD *)(v30 + 8) = v21[3];
                *(_QWORD *)(v30 + 48) = v30;
                *(_QWORD *)(v30 + 24) = 0LL;
                *(_QWORD *)(v30 + 40) = ExpWatchLicenseInfoWork;
                v31 = NtNotifyChangeKey(
                        *(HANDLE *)v30,
                        0LL,
                        (PIO_APC_ROUTINE)(v30 + 24),
                        (PVOID)1,
                        (PIO_STATUS_BLOCK)(v30 + 56),
                        0x10000005u,
                        1u,
                        (PVOID)(v30 + 72),
                        4u,
                        1u);
                if ( v31 < 0 )
                  KeBugCheckEx(0x9Au, 0x18uLL, v31, 1uLL, 0LL);
              }
              ExFreePoolWithTag((PVOID)v17, 0);
              ExFreePoolWithTag(v21, 0);
              ExFreePoolWithTag(ValueName.Buffer, 0);
              NtClose(KeyHandle);
            }
            return 1;
          }
          if ( !ExpSetupModeDetected )
            KeBugCheckEx(0x9Au, 8uLL, (unsigned int)v12, 0LL, 0LL);
        }
      }
      else if ( !ExpSetupModeDetected )
      {
        KeBugCheckEx(0x9Au, 7uLL, (unsigned int)v10, 0LL, 0LL);
      }
    }
  }
  else if ( !ExpSetupModeDetected )
  {
    KeBugCheckEx(0x9Au, 6uLL, (unsigned int)v7, 0LL, 0LL);
  }
  return 0;
}
