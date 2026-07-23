/*
 * XREFs of ExpWatchLicenseInfoWork @ 0x1407B7800
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     wcscat_s @ 0x140502000 (wcscat_s.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 *     NtOpenKeyEx @ 0x140A40DD0 (NtOpenKeyEx.c)
 *     NtEnumerateKey @ 0x140AE5580 (NtEnumerateKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

int __fastcall ExpWatchLicenseInfoWork(PHANDLE KeyHandle)
{
  char v2; // si
  HANDLE v3; // rcx
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  ULONG v6; // r15d
  __int64 Pool2; // r14
  _WORD *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // cx
  ULONG_PTR v12; // r9
  unsigned __int64 v13; // rax
  NTSTATUS v14; // eax
  ULONG i; // edi
  NTSTATUS v16; // eax
  __int64 v17; // rax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-59h] BYREF
  HANDLE KeyHandlea; // [rsp+78h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-41h] BYREF
  UNICODE_STRING ValueName; // [rsp+B8h] [rbp-11h] BYREF
  __int128 KeyInformation; // [rsp+C8h] [rbp-1h] BYREF
  __int128 v28; // [rsp+D8h] [rbp+Fh]
  __int128 v29; // [rsp+E8h] [rbp+1Fh]

  Handle = 0LL;
  KeyInformation = 0LL;
  ResultLength = 0;
  v2 = 0;
  v28 = 0LL;
  KeyHandlea = 0LL;
  v29 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ValueName = 0LL;
  if ( !ExpSetupModeDetected )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)KeyHandle[2]);
    v3 = *KeyHandle;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    NtClose(v3);
    v4 = NtOpenKeyEx(KeyHandle, 0x2001Fu, &ObjectAttributes, 0);
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0x12uLL, v4, 0LL, 0LL);
    v5 = NtQueryKey(*KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0x13uLL, v5, 0LL, 0LL);
    v6 = 2 * DWORD2(v28) + 56;
    if ( v6 < DWORD2(v28) || v6 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v28) + 16) )
      v2 = 1;
    Pool2 = ExAllocatePool2(0x40uLL, v6, 0x2079654Bu);
    if ( !Pool2 || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, v6, 0LL, 0LL);
    v8 = KeyHandle[2];
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( v8[v10 + 16] );
    v11 = 2 * (WORD4(v28) + v10);
    DestinationString.Length = v11;
    if ( (unsigned int)v11 < DWORD2(v28) )
      goto LABEL_19;
    v12 = v11;
    v13 = -1LL;
    do
      ++v13;
    while ( v8[v13 + 16] );
    if ( v11 < v13 )
      goto LABEL_19;
    do
      ++v9;
    while ( v8[v9 + 16] );
    if ( v11 < (unsigned __int64)DWORD2(v28) + v9 )
    {
LABEL_19:
      v2 = 1;
      v12 = v11;
    }
    DestinationString.MaximumLength = v11;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x40uLL, v12, 0x2079654Bu);
    if ( !DestinationString.Buffer || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, DestinationString.Length, 1uLL, 0LL);
    RtlInitUnicodeString(&ValueName, L"ConcurrentLimit");
    v14 = NtSetValueKey(*KeyHandle, &ValueName, 0, 4u, KeyHandle + 1, 4u);
    if ( v14 < 0 )
      KeBugCheckEx(0x9Au, 0x15uLL, v14, 0LL, 0LL);
    for ( i = 0; ; ++i )
    {
      v16 = NtEnumerateKey(*KeyHandle, i, KeyBasicInformation, (PVOID)Pool2, v6, &ResultLength);
      if ( v16 == -2147483622 )
        break;
      if ( v16 >= 0 )
      {
        *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*(unsigned int *)(Pool2 + 12) >> 1) + 16) = 0;
        wcscpy_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          (const wchar_t *)KeyHandle[2]);
        wcscat_s(DestinationString.Buffer, (unsigned __int64)DestinationString.MaximumLength >> 1, L"\\");
        wcscat_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          (const wchar_t *)(Pool2 + 16));
        v17 = -1LL;
        do
          ++v17;
        while ( DestinationString.Buffer[v17] );
        ObjectAttributes.Length = 48;
        DestinationString.Length = 2 * v17;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v18 = NtOpenKeyEx(&KeyHandlea, 0x2001Fu, &ObjectAttributes, 0);
        if ( v18 < 0 )
          KeBugCheckEx(0x9Au, 0x16uLL, v18, 0LL, 0LL);
        v19 = NtSetValueKey(KeyHandlea, &ValueName, 0, 4u, KeyHandle + 1, 4u);
        if ( v19 < 0 )
          KeBugCheckEx(0x9Au, 0x17uLL, v19, 0LL, 0LL);
        NtClose(KeyHandlea);
      }
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  result = NtNotifyChangeMultipleKeys(
             *KeyHandle,
             0,
             0LL,
             0LL,
             (PIO_APC_ROUTINE)(KeyHandle + 3),
             (PVOID)1,
             (PIO_STATUS_BLOCK)(KeyHandle + 7),
             0x10000005u,
             1u,
             KeyHandle + 9,
             4u,
             1u);
  if ( result < 0 )
    KeBugCheckEx(0x9Au, 0x18uLL, result, 0LL, 0LL);
  if ( !ExpSetupModeDetected )
  {
    result = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, ExpExpirationThread, 3221226090LL, 0LL, 0LL);
    if ( result >= 0 )
      return ZwClose(Handle);
  }
  return result;
}
