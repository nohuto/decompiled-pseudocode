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
  int v1; // eax
  NTSTATUS v2; // eax
  PVOID v3; // rdi
  int v4; // eax
  int v5; // eax
  int v7; // eax
  NTSTATUS v8; // eax
  ULONG_PTR Pool2; // rax
  int v10; // eax
  size_t v11; // r8
  int v12; // eax
  char v13; // r14
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // r12d
  ULONG_PTR v17; // rsi
  unsigned int v18; // r13d
  ULONG_PTR v19; // r14
  bool v20; // di
  _DWORD *v21; // r15
  ULONG_PTR v22; // r8
  unsigned int i; // r14d
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdi
  int v27; // eax
  int v28; // eax
  wchar_t *v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v34; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v35; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+78h] [rbp-88h]
  int v38; // [rsp+7Ch] [rbp-84h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-78h]
  int v41; // [rsp+90h] [rbp-70h]
  int v42; // [rsp+94h] [rbp-6Ch]
  __int128 v43; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v45; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v46; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v47; // [rsp+D8h] [rbp-28h]
  __int128 v48; // [rsp+E8h] [rbp-18h]
  __int128 v49; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v50[12]; // [rsp+110h] [rbp+10h] BYREF
  int v51; // [rsp+11Ch] [rbp+1Ch]

  v38 = 0;
  DestinationString = 0LL;
  v42 = 0;
  v0 = 0LL;
  LODWORD(BugCheckParameter2) = 0;
  Handle = 0LL;
  v49 = 0LL;
  *(_BYTE *)(MmWriteableSharedUserData + 616) = 1;
  ExpSetupModeDetected = 0;
  v34 = 0LL;
  ExpSystemSetupInProgress = 0;
  ExpGetNtProductTypeFromLicenseValue((_DWORD *)(MmWriteableSharedUserData + 612));
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  v39 = 0LL;
  p_DestinationString = &DestinationString;
  v41 = 576;
  v37 = 48;
  v43 = 0LL;
  v1 = NtOpenKey();
  if ( v1 < 0 )
    KeBugCheckEx(0x9Au, 2uLL, (unsigned int)v1, 0LL, 0LL);
  v35 = 0LL;
  v2 = ObReferenceObjectByHandle(ExpSetupKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v35, 0LL);
  v3 = v35;
  if ( v2 < 0 )
    KeBugCheckEx(0x9Au, 0xBuLL, (unsigned int)v2, 0LL, 0LL);
  RtlInitUnicodeString(&v34, L"SetupType");
  v4 = NtQueryValueKey(ExpSetupKey, &v34, 2u, (unsigned __int64)v50, 0x48u, (unsigned __int64)&BugCheckParameter2);
  if ( v4 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v4, 0LL, 0LL);
  if ( v51 == 1 || v51 == 4 )
  {
    ExpSetupModeDetected = 1;
    *(_BYTE *)(MmWriteableSharedUserData + 616) = 0;
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    v3 = 0LL;
  }
  RtlInitUnicodeString(&v34, L"SystemSetupInProgress");
  v5 = NtQueryValueKey(ExpSetupKey, &v34, 2u, (unsigned __int64)v50, 0x48u, (unsigned __int64)&BugCheckParameter2);
  if ( v5 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v5, 0LL, 0LL);
  if ( v51 == 1 )
    ExpSystemSetupInProgress = 1;
  ExpLicenseWatchInitWorker();
  if ( InitIsWinPEMode )
  {
    ExpControlKey = v3;
    return 1;
  }
  qword_140EFE510 = (__int64)ExpWatchProductTypeWork;
  qword_140EFE518 = 0LL;
  ExpWatchProductTypeWorkItem = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v37 = 48;
  p_DestinationString = &DestinationString;
  v39 = 0LL;
  v41 = 576;
  v43 = 0LL;
  v7 = NtOpenKey();
  if ( v7 >= 0 )
  {
    if ( !ExpSetupModeDetected )
    {
      v35 = 0LL;
      v8 = ObReferenceObjectByHandle(ExpProductTypeKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v35, 0LL);
      v0 = v35;
      if ( v8 < 0 )
        KeBugCheckEx(0x9Au, 0xCuLL, (unsigned int)v8, 0LL, 0LL);
    }
    ExpControlKey = v3;
    qword_140EFE568 = v0;
    ExpUpdateProductSuiteTypeInRegistry();
    RtlInitUnicodeString(&v34, L"ProductType");
    Pool2 = ExAllocatePool2(0x100uLL, 0x22uLL, 0x2079654BuLL);
    ExpProductTypeValueInfo = Pool2;
    if ( Pool2 )
    {
      v10 = NtQueryValueKey(ExpProductTypeKey, &v34, 2u, Pool2, 0x22u, (unsigned __int64)&BugCheckParameter2);
      if ( v10 >= 0 )
      {
        RtlInitUnicodeString(&v34, L"ProductSuite");
        if ( (unsigned int)NtQueryValueKey(
                             ExpProductTypeKey,
                             &v34,
                             2u,
                             (unsigned __int64)&v49,
                             0x10u,
                             (unsigned __int64)&BugCheckParameter2) != -2147483643 )
          goto LABEL_29;
        LODWORD(BugCheckParameter2) = BugCheckParameter2 + 16;
        qword_140E61D68 = (PVOID)ExAllocatePool2(0x100uLL, (unsigned int)BugCheckParameter2, 0x2079654BuLL);
        if ( !qword_140E61D68 )
          KeBugCheckEx(0x9Au, 0x14uLL, (unsigned int)BugCheckParameter2, 2uLL, 0LL);
        if ( (int)NtQueryValueKey(
                    ExpProductTypeKey,
                    &v34,
                    2u,
                    (unsigned __int64)qword_140E61D68,
                    BugCheckParameter2,
                    (unsigned __int64)&BugCheckParameter2) >= 0
          || (ExFreePoolWithTag(qword_140E61D68, 0), qword_140E61D68 = 0LL, !ExpSetupModeDetected) )
        {
LABEL_29:
          v11 = -1LL;
          do
            ++v11;
          while ( aLanmannt[v11] );
          if ( !wcsncmp(L"LanmanNT", (const wchar_t *)(ExpProductTypeValueInfo + 12), v11)
            && (_DWORD)InitSafeBootMode == 3
            && !ExpSetupModeDetected )
          {
            *(_BYTE *)(MmWriteableSharedUserData + 616) = 1;
            *(_DWORD *)(MmWriteableSharedUserData + 612) = 3;
          }
          v12 = NtNotifyChangeKey(
                  (int)ExpProductTypeKey,
                  0,
                  (__int64)&ExpWatchProductTypeWorkItem,
                  1LL,
                  (__int64)&ExpProductTypeIoSb,
                  268435461,
                  0,
                  (__int64)&ExpProductTypeChangeBuffer,
                  4,
                  1);
          if ( v12 >= 0 )
          {
            RtlInitUnicodeString(
              &DestinationString,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
            v37 = 48;
            p_DestinationString = &DestinationString;
            v39 = 0LL;
            v41 = 576;
            v43 = 0LL;
            if ( (int)NtOpenKey() >= 0 )
            {
              LODWORD(v35) = 0;
              v46 = 0LL;
              v13 = 0;
              v14 = -1LL;
              v47 = 0LL;
              v48 = 0LL;
              v34 = 0LL;
              v45 = 0LL;
              do
                ++v14;
              while ( aRegistryMachin_170[v14] );
              v34.Length = 2 * (v14 + 64);
              v34.MaximumLength = v34.Length;
              v34.Buffer = (wchar_t *)ExAllocatePool2(0x40uLL, v34.Length, 0x2079654BuLL);
              if ( !v34.Buffer )
                KeBugCheckEx(0x9Au, 0x14uLL, v34.Length, 3uLL, 0LL);
              v15 = NtQueryKey(Handle, 2u, (unsigned __int64)&v46, 0x30u, &v35);
              if ( v15 < 0 )
                KeBugCheckEx(0x9Au, 0x13uLL, v15, 1uLL, 0LL);
              v16 = 2 * DWORD2(v47) + 56;
              if ( v16 < DWORD2(v47) || v16 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v47) + 16) )
                v13 = 1;
              v17 = ExAllocatePool2(0x40uLL, v16, 0x2079654BuLL);
              if ( !v17 || v13 )
                KeBugCheckEx(0x9Au, 0x14uLL, v16, 4uLL, 0LL);
              v18 = DWORD2(v48) + 32;
              v19 = (unsigned int)(DWORD2(v48) + 32);
              v20 = (unsigned int)(DWORD2(v48) + 32) < DWORD2(v48);
              v21 = (_DWORD *)ExAllocatePool2(0x40uLL, v19, 0x2079654BuLL);
              if ( !v21 || v20 )
                KeBugCheckEx(0x9Au, 0x14uLL, v19, 5uLL, 0LL);
              ExpLicenseInfoCount = DWORD1(v47);
              v22 = 80LL * DWORD1(v47);
              if ( v22 > 0xFFFFFFFF )
                KeBugCheckEx(0x9Au, 0x14uLL, v22, 6uLL, 0LL);
              ExpLicenseInfo = ExAllocatePool2(0x40uLL, (unsigned int)v22, 0x2079654BuLL);
              if ( !ExpLicenseInfo )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * (unsigned int)ExpLicenseInfoCount, 6uLL, 0LL);
              RtlInitUnicodeString(&v45, L"ConcurrentLimit");
              for ( i = 0; ; ++i )
              {
                LODWORD(Object) = v16;
                v24 = NtEnumerateKey(Handle, i, 0, (volatile void *)v17, (SIZE_T)Object, &v35);
                if ( v24 == -2147483622 )
                  break;
                if ( v24 < 0 )
                  KeBugCheckEx(0x9Au, 0x1AuLL, v24, 0LL, 0LL);
                *(_WORD *)(v17 + 2 * ((unsigned __int64)*(unsigned int *)(v17 + 12) >> 1) + 16) = 0;
                wcscpy_s(
                  v34.Buffer,
                  (unsigned __int64)v34.MaximumLength >> 1,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
                wcscat_s(v34.Buffer, (unsigned __int64)v34.MaximumLength >> 1, L"\\");
                wcscat_s(v34.Buffer, (unsigned __int64)v34.MaximumLength >> 1, (const wchar_t *)(v17 + 16));
                v25 = -1LL;
                do
                  ++v25;
                while ( v34.Buffer[v25] );
                v39 = 0LL;
                v34.Length = 2 * v25;
                v37 = 48;
                p_DestinationString = &v34;
                v41 = 576;
                v43 = 0LL;
                v26 = 80LL * i;
                v27 = NtOpenKey();
                if ( v27 < 0 )
                  KeBugCheckEx(0x9Au, 0x16uLL, v27, 1uLL, 0LL);
                v28 = NtQueryValueKey(
                        *(HANDLE *)(v26 + ExpLicenseInfo),
                        &v45,
                        2u,
                        (unsigned __int64)v21,
                        v18,
                        (unsigned __int64)&v35);
                if ( v28 < 0 )
                  KeBugCheckEx(0x9Au, 0x13uLL, v28, 2uLL, 0LL);
                v29 = (wchar_t *)ExAllocatePool2(0x40uLL, v34.Length, 0x2079654BuLL);
                *(_QWORD *)(v26 + ExpLicenseInfo + 16) = v29;
                if ( !v29 )
                  KeBugCheckEx(0x9Au, 0x14uLL, v34.Length, 7uLL, 0LL);
                wcscpy_s(v29, (unsigned __int64)v34.Length >> 1, v34.Buffer);
                v30 = v26 + ExpLicenseInfo;
                *(_DWORD *)(v30 + 8) = v21[3];
                *(_QWORD *)(v30 + 48) = v30;
                *(_QWORD *)(v30 + 24) = 0LL;
                *(_QWORD *)(v30 + 40) = ExpWatchLicenseInfoWork;
                v31 = NtNotifyChangeKey(*(_QWORD *)v30, 0, v30 + 24, 1LL, v30 + 56, 268435461, 1, v30 + 72, 4, 1);
                if ( v31 < 0 )
                  KeBugCheckEx(0x9Au, 0x18uLL, v31, 1uLL, 0LL);
              }
              ExFreePoolWithTag((PVOID)v17, 0);
              ExFreePoolWithTag(v21, 0);
              ExFreePoolWithTag(v34.Buffer, 0);
              NtClose(Handle);
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
