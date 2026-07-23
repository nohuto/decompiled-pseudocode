/*
 * XREFs of ExpWatchLicenseInfoWork @ 0x1407A7F10
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     wcscat_s @ 0x140501FC0 (wcscat_s.c)
 *     wcscpy_s @ 0x140502060 (wcscpy_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtOpenKey @ 0x140AD33A0 (NtOpenKey.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned __int64 v12; // rax
  NTSTATUS v13; // eax
  ULONG i; // edi
  NTSTATUS v15; // eax
  __int64 v16; // rax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-59h] BYREF
  HANDLE KeyHandlea; // [rsp+78h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-41h] BYREF
  UNICODE_STRING ValueName; // [rsp+B8h] [rbp-11h] BYREF
  __int128 KeyInformation; // [rsp+C8h] [rbp-1h] BYREF
  __int128 v27; // [rsp+D8h] [rbp+Fh]
  __int128 v28; // [rsp+E8h] [rbp+1Fh]

  Handle = 0LL;
  KeyInformation = 0LL;
  ResultLength = 0;
  v2 = 0;
  v27 = 0LL;
  KeyHandlea = 0LL;
  v28 = 0LL;
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
    v4 = NtOpenKey(KeyHandle, 0x2001Fu, &ObjectAttributes);
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0x12uLL, v4, 0LL, 0LL);
    v5 = NtQueryKey(*KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0x13uLL, v5, 0LL, 0LL);
    v6 = 2 * DWORD2(v27) + 56;
    if ( v6 < DWORD2(v27) || v6 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v27) + 16) )
      v2 = 1;
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( !Pool2 || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, v6, 0LL, 0LL);
    v8 = KeyHandle[2];
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( v8[v10 + 16] );
    v11 = 2 * (WORD4(v27) + v10);
    DestinationString.Length = v11;
    if ( (unsigned int)v11 < DWORD2(v27) )
      goto LABEL_19;
    v12 = -1LL;
    do
      ++v12;
    while ( v8[v12 + 16] );
    if ( v11 < v12 )
      goto LABEL_19;
    do
      ++v9;
    while ( v8[v9 + 16] );
    if ( v11 < (unsigned __int64)DWORD2(v27) + v9 )
LABEL_19:
      v2 = 1;
    DestinationString.MaximumLength = v11;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x40uLL);
    if ( !DestinationString.Buffer || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, DestinationString.Length, 1uLL, 0LL);
    RtlInitUnicodeString(&ValueName, L"ConcurrentLimit");
    v13 = NtSetValueKey(*KeyHandle, &ValueName, 0, 4u, KeyHandle + 1, 4u);
    if ( v13 < 0 )
      KeBugCheckEx(0x9Au, 0x15uLL, v13, 0LL, 0LL);
    for ( i = 0; ; ++i )
    {
      v15 = NtEnumerateKey(*KeyHandle, i, KeyBasicInformation, (PVOID)Pool2, v6, &ResultLength);
      if ( v15 == -2147483622 )
        break;
      if ( v15 >= 0 )
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
        v16 = -1LL;
        do
          ++v16;
        while ( DestinationString.Buffer[v16] );
        ObjectAttributes.Length = 48;
        DestinationString.Length = 2 * v16;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v17 = NtOpenKey(&KeyHandlea, 0x2001Fu, &ObjectAttributes);
        if ( v17 < 0 )
          KeBugCheckEx(0x9Au, 0x16uLL, v17, 0LL, 0LL);
        v18 = NtSetValueKey(KeyHandlea, &ValueName, 0, 4u, KeyHandle + 1, 4u);
        if ( v18 < 0 )
          KeBugCheckEx(0x9Au, 0x17uLL, v18, 0LL, 0LL);
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
