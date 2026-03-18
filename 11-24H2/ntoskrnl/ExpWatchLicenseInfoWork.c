/*
 * XREFs of ExpWatchLicenseInfoWork @ 0x1407B73B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     wcscat_s @ 0x140504740 (wcscat_s.c)
 *     wcscpy_s @ 0x1405047E0 (wcscpy_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     NtQueryKey @ 0x140849760 (NtQueryKey.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     PsCreateSystemThreadEx @ 0x140A224A0 (PsCreateSystemThreadEx.c)
 *     NtOpenKeyEx @ 0x140A4A0B0 (NtOpenKeyEx.c)
 *     NtEnumerateKey @ 0x140AE3CA0 (NtEnumerateKey.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpWatchLicenseInfoWork(__int64 a1)
{
  char v2; // si
  HANDLE v3; // rcx
  int v4; // eax
  int Key; // eax
  unsigned int v6; // r15d
  __int64 Pool2; // r14
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // cx
  unsigned __int64 v12; // rax
  int v13; // eax
  int i; // edi
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  NTSTATUS result; // eax
  SIZE_T BugCheckParameter4; // [rsp+20h] [rbp-A9h]
  size_t Size; // [rsp+28h] [rbp-A1h]
  size_t Sizea; // [rsp+28h] [rbp-A1h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  __int64 v24; // [rsp+70h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-51h] BYREF
  HANDLE v26; // [rsp+80h] [rbp-49h] BYREF
  __int128 v27; // [rsp+88h] [rbp-41h] BYREF
  __int128 v28; // [rsp+98h] [rbp-31h]
  __int128 v29; // [rsp+A8h] [rbp-21h]
  UNICODE_STRING v30; // [rsp+B8h] [rbp-11h] BYREF
  __int128 v31; // [rsp+C8h] [rbp-1h]
  __int128 v32; // [rsp+D8h] [rbp+Fh]
  __int128 v33; // [rsp+E8h] [rbp+1Fh]

  v26 = 0LL;
  v31 = 0LL;
  LODWORD(v24) = 0;
  v2 = 0;
  v32 = 0LL;
  Handle = 0LL;
  v33 = 0LL;
  *(_QWORD *)&v29 = 0LL;
  DestinationString = 0LL;
  DWORD2(v29) = 0;
  v27 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  if ( !ExpSetupModeDetected )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 16));
    v3 = *(HANDLE *)a1;
    *(_QWORD *)&v28 = &DestinationString;
    *((_QWORD *)&v27 + 1) = 0LL;
    v29 = 0LL;
    LODWORD(v27) = 48;
    DWORD2(v28) = 576;
    NtClose(v3);
    v4 = NtOpenKeyEx(a1, 131103LL, &v27, 0LL);
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0x12uLL, v4, 0LL, 0LL);
    Key = NtQueryKey(*(HANDLE *)a1, (__int64)&v24);
    if ( Key < 0 )
      KeBugCheckEx(0x9Au, 0x13uLL, Key, 0LL, 0LL);
    v6 = 2 * DWORD2(v32) + 56;
    if ( v6 < DWORD2(v32) || v6 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v32) + 16) )
      v2 = 1;
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( !Pool2 || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, v6, 0LL, 0LL);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(v8 + 2 * v10 + 32) );
    v11 = 2 * (WORD4(v32) + v10);
    DestinationString.Length = v11;
    if ( (unsigned int)v11 < DWORD2(v32) )
      goto LABEL_19;
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v8 + 2 * v12 + 32) );
    if ( v11 < v12 )
      goto LABEL_19;
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9 + 32) );
    if ( v11 < (unsigned __int64)DWORD2(v32) + v9 )
LABEL_19:
      v2 = 1;
    DestinationString.MaximumLength = v11;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x40uLL);
    if ( !DestinationString.Buffer || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, DestinationString.Length, 1uLL, 0LL);
    RtlInitUnicodeString(&v30, L"ConcurrentLimit");
    LODWORD(Size) = 4;
    v13 = NtSetValueKey(*(_QWORD *)a1, (int)&v30, 0, 4, a1 + 8, Size);
    if ( v13 < 0 )
      KeBugCheckEx(0x9Au, 0x15uLL, v13, 0LL, 0LL);
    for ( i = 0; ; ++i )
    {
      LODWORD(BugCheckParameter4) = v6;
      v15 = NtEnumerateKey(*(HANDLE *)a1, BugCheckParameter4, (__int64)&v24);
      if ( v15 == -2147483622 )
        break;
      if ( v15 >= 0 )
      {
        *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*(unsigned int *)(Pool2 + 12) >> 1) + 16) = 0;
        wcscpy_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          *(const wchar_t **)(a1 + 16));
        wcscat_s(DestinationString.Buffer, (unsigned __int64)DestinationString.MaximumLength >> 1, L"\\");
        wcscat_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          (const wchar_t *)(Pool2 + 16));
        v16 = -1LL;
        do
          ++v16;
        while ( DestinationString.Buffer[v16] );
        LODWORD(v27) = 48;
        DestinationString.Length = 2 * v16;
        *((_QWORD *)&v27 + 1) = 0LL;
        *(_QWORD *)&v28 = &DestinationString;
        DWORD2(v28) = 576;
        v29 = 0LL;
        v17 = NtOpenKeyEx(&Handle, 131103LL, &v27, 0LL);
        if ( v17 < 0 )
          KeBugCheckEx(0x9Au, 0x16uLL, v17, 0LL, 0LL);
        LODWORD(Sizea) = 4;
        v18 = NtSetValueKey((int)Handle, (int)&v30, 0, 4, a1 + 8, Sizea);
        if ( v18 < 0 )
          KeBugCheckEx(0x9Au, 0x17uLL, v18, 0LL, 0LL);
        NtClose(Handle);
      }
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  result = NtNotifyChangeMultipleKeys(
             *(_QWORD *)a1,
             0,
             0,
             0,
             a1 + 24,
             1LL,
             a1 + 56,
             268435461,
             1,
             a1 + 72,
             4,
             1,
             *(_QWORD *)&DestinationString.Length,
             DestinationString.Buffer,
             v24);
  if ( result < 0 )
    KeBugCheckEx(0x9Au, 0x18uLL, result, 0LL, 0LL);
  if ( !ExpSetupModeDetected )
  {
    result = PsCreateSystemThreadEx(&v26, 0x1FFFFFLL, 0LL, 0LL, 0LL, ExpExpirationThread, 3221226090LL, 0LL, 0LL);
    if ( result >= 0 )
      return ZwClose(v26);
  }
  return result;
}
