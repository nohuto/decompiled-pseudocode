/*
 * XREFs of AdtpObjsInitialize @ 0x1408114B8
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x1408119A0 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403655E0 (ExInitializeResourceLite.c)
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     RtlIntegerToUnicodeString @ 0x1408EF170 (RtlIntegerToUnicodeString.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     NtOpenKeyEx @ 0x140A4A0B0 (NtOpenKeyEx.c)
 *     NtEnumerateKey @ 0x140AE3CA0 (NtEnumerateKey.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  int v9; // edi
  int k; // r14d
  unsigned __int16 *Pool2; // rsi
  _QWORD *v12; // rax
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  int m; // r12d
  bool v16; // zf
  int v17; // r14d
  __int64 v18; // rdi
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  __int16 v21; // ax
  __int64 v22; // rax
  size_t Size; // [rsp+20h] [rbp-59h]
  HANDLE Handle; // [rsp+30h] [rbp-49h] BYREF
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  __int128 v27; // [rsp+58h] [rbp-21h] BYREF
  __int128 v28; // [rsp+68h] [rbp-11h]
  __int128 v29; // [rsp+78h] [rbp-1h]
  size_t Length; // [rsp+E0h] [rbp+67h] BYREF
  int v31; // [rsp+E8h] [rbp+6Fh]
  HANDLE v32; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE v33; // [rsp+F8h] [rbp+7Fh] BYREF

  v0 = 0;
  v33 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v29 = 0LL;
  v27 = 0LL;
  DWORD2(v29) = 0;
  v1 = 0LL;
  v28 = 0LL;
  v32 = 0LL;
  v2 = 1;
  LODWORD(Length) = 0;
  DestinationString = 0LL;
  AdtpSourceModules = 0LL;
  SourceString = 0LL;
  ExInitializeResourceLite(&AdtpSourceModuleLock);
  v3 = 0;
  for ( i = 0; i <= 6; ++i )
  {
    v5 = 16LL * i;
    *(_WORD *)((char *)&unk_140EF0442 + v5) = 24;
    *(_WORD *)((char *)&AdtpEventIdStringStandard + v5) = 0;
    *(_QWORD *)((char *)&unk_140EF0448 + v5) = (char *)&AdtpAccessIdsStringBuffer + 2 * v3;
    result = RtlIntegerToUnicodeString(i + 1537, 0xAu, (PUNICODE_STRING)((char *)&AdtpEventIdStringStandard + v5));
    if ( result < 0 )
      return result;
    v3 += 12;
  }
  for ( j = 0; j <= 0xF; ++j )
  {
    v8 = 16LL * j;
    *(_WORD *)((char *)&unk_140EF04C2 + v8) = 24;
    *(_WORD *)((char *)&AdtpEventIdStringSpecific + v8) = 0;
    *(_QWORD *)((char *)&unk_140EF04C8 + v8) = (char *)&AdtpAccessIdsStringBuffer + 2 * v3;
    result = RtlIntegerToUnicodeString(j + 1552, 0xAu, (PUNICODE_STRING)((char *)&AdtpEventIdStringSpecific + v8));
    if ( result < 0 )
      return result;
    v3 += 12;
  }
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\EventLog\\Security");
  LODWORD(v27) = 48;
  *(_QWORD *)&v28 = &DestinationString;
  *((_QWORD *)&v27 + 1) = 0LL;
  DWORD2(v28) = 576;
  v29 = 0LL;
  v9 = NtOpenKeyEx(&v33, 131097LL, &v27, 0LL);
  if ( v9 == -1073741772 )
    return 0;
  for ( k = 0; ; k = v31 + 1 )
  {
    v31 = k;
    if ( v9 < 0 )
      break;
    LODWORD(Size) = 0;
    v9 = NtEnumerateKey(v33, Size, (__int64)&Length);
    if ( v9 == -1073741789 )
    {
      Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return -1073741801;
      LODWORD(Size) = Length;
      v9 = NtEnumerateKey(v33, Size, (__int64)&Length);
      if ( v9 >= 0 )
      {
        v12 = (_QWORD *)ExAllocatePool2(0x100uLL);
        v1 = v12;
        if ( !v12 )
          return -1073741801;
        *v12 = AdtpSourceModules;
        AdtpSourceModules = (__int64)v12;
        v12[3] = 0LL;
        v13 = Pool2[6];
        *((_WORD *)v1 + 4) = v13;
        *((_WORD *)v1 + 5) = v13 + 2;
        v14 = ExAllocatePool2(0x100uLL);
        v1[2] = v14;
        if ( !v14 )
          return -1073741801;
        SourceString.Length = Pool2[6];
        SourceString.MaximumLength = SourceString.Length;
        SourceString.Buffer = Pool2 + 8;
        RtlCopyUnicodeString((PUNICODE_STRING)(v1 + 1), &SourceString);
        ExFreePoolWithTag(Pool2, 0);
        *((_QWORD *)&v27 + 1) = v33;
        LODWORD(v27) = 48;
        DWORD2(v28) = 576;
        *(_QWORD *)&v28 = v1 + 1;
        v29 = 0LL;
        result = NtOpenKeyEx(&Handle, 131097LL, &v27, 0LL);
        if ( result < 0 )
          return result;
        RtlInitUnicodeString(&SourceString, L"ObjectNames");
        *((_QWORD *)&v27 + 1) = Handle;
        LODWORD(v27) = 48;
        *(_QWORD *)&v28 = &SourceString;
        DWORD2(v28) = 576;
        v29 = 0LL;
        v9 = NtOpenKeyEx(&v32, 131097LL, &v27, 0LL);
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
      v16 = v9 == 0;
      if ( v9 < 0 )
        break;
      if ( !v2 )
      {
        v16 = v9 == 0;
        break;
      }
      LODWORD(Size) = 0;
      v17 = NtEnumerateValueKey(v32, Size, (__int64)&Length);
      if ( v17 == -1073741789 )
      {
        v18 = ExAllocatePool2(0x100uLL);
        if ( !v18 )
          return -1073741801;
        LODWORD(Size) = Length;
        v17 = NtEnumerateValueKey(v32, Size, (__int64)&Length);
        if ( v17 >= 0 )
        {
          v19 = (_QWORD *)ExAllocatePool2(0x100uLL);
          v20 = v19;
          if ( !v19 )
            return -1073741801;
          *v19 = v1[3];
          v1[3] = v19;
          v21 = *(_WORD *)(v18 + 16);
          *((_WORD *)v20 + 4) = v21;
          *((_WORD *)v20 + 5) = v21 + 2;
          v22 = ExAllocatePool2(0x100uLL);
          v20[2] = v22;
          if ( !v22 )
            return -1073741801;
          SourceString.Length = *(_WORD *)(v18 + 16);
          SourceString.MaximumLength = SourceString.Length;
          SourceString.Buffer = (wchar_t *)(v18 + 20);
          RtlCopyUnicodeString((PUNICODE_STRING)(v20 + 1), &SourceString);
          if ( *(_DWORD *)(v18 + 12) >= 4u )
            *((_DWORD *)v20 + 6) = *(_DWORD *)(*(unsigned int *)(v18 + 8) + v18);
          else
            *((_DWORD *)v20 + 6) = 1552;
        }
        ExFreePoolWithTag((PVOID)v18, 0);
      }
      v9 = 0;
      v2 = v17 != -2147483622;
      if ( v17 != -2147483622 )
        v9 = v17;
    }
    if ( v16 && !v2 && v32 )
    {
      NtClose(v32);
      v32 = 0LL;
    }
  }
  NtClose(v33);
  if ( v9 != -2147483622 )
    return v9;
  return v0;
}
