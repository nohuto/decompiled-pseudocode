/*
 * XREFs of AdtpObjsInitialize @ 0x140811BF8
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x1408120E0 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403EAC90 (ExInitializeResourceLite.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     RtlIntegerToUnicodeString @ 0x140860970 (RtlIntegerToUnicodeString.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     NtOpenKeyEx @ 0x140A40DD0 (NtOpenKeyEx.c)
 *     NtEnumerateKey @ 0x140AE5580 (NtEnumerateKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS AdtpObjsInitialize()
{
  int v0; // ebx
  _QWORD *v1; // r13
  bool v2; // r15
  unsigned int v3; // edi
  unsigned int i; // esi
  __int64 v5; // rdx
  NTSTATUS result; // eax
  unsigned int j; // esi
  __int64 v8; // rdx
  NTSTATUS v9; // edi
  ULONG k; // r14d
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v12; // rsi
  _QWORD *v13; // rax
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  ULONG m; // r12d
  bool v17; // zf
  NTSTATUS v18; // r14d
  _WORD *v19; // rax
  _WORD *v20; // rdi
  _QWORD *v21; // rax
  _QWORD *v22; // rsi
  unsigned __int16 v23; // ax
  __int64 v24; // rax
  HANDLE Handle; // [rsp+30h] [rbp-49h] BYREF
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+E0h] [rbp+67h] BYREF
  ULONG v30; // [rsp+E8h] [rbp+6Fh]
  HANDLE v31; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  v0 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v1 = 0LL;
  v31 = 0LL;
  v2 = 1;
  ResultLength = 0;
  DestinationString = 0LL;
  AdtpSourceModules = 0LL;
  SourceString = 0LL;
  ExInitializeResourceLite(&AdtpSourceModuleLock);
  v3 = 0;
  for ( i = 0; i <= 6; ++i )
  {
    v5 = 16LL * i;
    *(_WORD *)((char *)&unk_140EF06E2 + v5) = 24;
    *(_WORD *)((char *)&AdtpEventIdStringStandard + v5) = 0;
    *(_QWORD *)((char *)&unk_140EF06E8 + v5) = (char *)&AdtpAccessIdsStringBuffer + 2 * v3;
    result = RtlIntegerToUnicodeString(i + 1537, 0xAu, (PUNICODE_STRING)((char *)&AdtpEventIdStringStandard + v5));
    if ( result < 0 )
      return result;
    v3 += 12;
  }
  for ( j = 0; j <= 0xF; ++j )
  {
    v8 = 16LL * j;
    *(_WORD *)((char *)&unk_140EF0762 + v8) = 24;
    *(_WORD *)((char *)&AdtpEventIdStringSpecific + v8) = 0;
    *(_QWORD *)((char *)&unk_140EF0768 + v8) = (char *)&AdtpAccessIdsStringBuffer + 2 * v3;
    result = RtlIntegerToUnicodeString(j + 1552, 0xAu, (PUNICODE_STRING)((char *)&AdtpEventIdStringSpecific + v8));
    if ( result < 0 )
      return result;
    v3 += 12;
  }
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\EventLog\\Security");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = NtOpenKeyEx(&KeyHandle, 0x20019u, &ObjectAttributes, 0);
  if ( v9 == -1073741772 )
    return 0;
  for ( k = 0; ; k = v30 + 1 )
  {
    v30 = k;
    if ( v9 < 0 )
      break;
    v9 = NtEnumerateKey(KeyHandle, k, KeyBasicInformation, 0LL, 0, &ResultLength);
    if ( v9 == -1073741789 )
    {
      Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL, ResultLength, 0x6B416553u);
      v12 = Pool2;
      if ( !Pool2 )
        return -1073741801;
      v9 = NtEnumerateKey(KeyHandle, k, KeyBasicInformation, Pool2, ResultLength, &ResultLength);
      if ( v9 >= 0 )
      {
        v13 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x20uLL, 0x6B416553u);
        v1 = v13;
        if ( !v13 )
          return -1073741801;
        *v13 = AdtpSourceModules;
        AdtpSourceModules = (__int64)v13;
        v13[3] = 0LL;
        v14 = v12[6];
        *((_WORD *)v1 + 4) = v14;
        v14 += 2;
        *((_WORD *)v1 + 5) = v14;
        v15 = ExAllocatePool2(0x100uLL, v14, 0x6B416553u);
        v1[2] = v15;
        if ( !v15 )
          return -1073741801;
        SourceString.Length = v12[6];
        SourceString.MaximumLength = SourceString.Length;
        SourceString.Buffer = v12 + 8;
        RtlCopyUnicodeString((PUNICODE_STRING)(v1 + 1), &SourceString);
        ExFreePoolWithTag(v12, 0);
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 1);
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        result = NtOpenKeyEx(&Handle, 0x20019u, &ObjectAttributes, 0);
        if ( result < 0 )
          return result;
        RtlInitUnicodeString(&SourceString, L"ObjectNames");
        ObjectAttributes.RootDirectory = Handle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &SourceString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = NtOpenKeyEx(&v31, 0x20019u, &ObjectAttributes, 0);
        NtClose(Handle);
        v2 = 1;
        if ( v9 == -1073741772 )
        {
          v2 = 0;
          v9 = 0;
        }
      }
    }
    for ( m = 0; ; ++m )
    {
      v17 = v9 == 0;
      if ( v9 < 0 )
        break;
      if ( !v2 )
      {
        v17 = v9 == 0;
        break;
      }
      v18 = NtEnumerateValueKey(v31, m, KeyValueFullInformation, 0LL, 0, &ResultLength);
      if ( v18 == -1073741789 )
      {
        v19 = (_WORD *)ExAllocatePool2(0x100uLL, ResultLength, 0x6B416553u);
        v20 = v19;
        if ( !v19 )
          return -1073741801;
        v18 = NtEnumerateValueKey(v31, m, KeyValueFullInformation, v19, ResultLength, &ResultLength);
        if ( v18 >= 0 )
        {
          v21 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x20uLL, 0x6B416553u);
          v22 = v21;
          if ( !v21 )
            return -1073741801;
          *v21 = v1[3];
          v1[3] = v21;
          v23 = v20[8];
          *((_WORD *)v22 + 4) = v23;
          v23 += 2;
          *((_WORD *)v22 + 5) = v23;
          v24 = ExAllocatePool2(0x100uLL, v23, 0x6B416553u);
          v22[2] = v24;
          if ( !v24 )
            return -1073741801;
          SourceString.Length = v20[8];
          SourceString.MaximumLength = SourceString.Length;
          SourceString.Buffer = v20 + 10;
          RtlCopyUnicodeString((PUNICODE_STRING)(v22 + 1), &SourceString);
          if ( *((_DWORD *)v20 + 3) >= 4u )
            *((_DWORD *)v22 + 6) = *(_DWORD *)((char *)v20 + *((unsigned int *)v20 + 2));
          else
            *((_DWORD *)v22 + 6) = 1552;
        }
        ExFreePoolWithTag(v20, 0);
      }
      v9 = 0;
      v2 = v18 != -2147483622;
      if ( v18 != -2147483622 )
        v9 = v18;
    }
    if ( v17 && !v2 && v31 )
    {
      NtClose(v31);
      v31 = 0LL;
    }
  }
  NtClose(KeyHandle);
  if ( v9 != -2147483622 )
    return v9;
  return v0;
}
