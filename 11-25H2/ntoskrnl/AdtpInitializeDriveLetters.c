/*
 * XREFs of AdtpInitializeDriveLetters @ 0x140801E68
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x140801E28 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     StringCopyWorkerW_0 @ 0x14068B028 (StringCopyWorkerW_0.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     NtOpenSymbolicLinkObject @ 0x1409E0AA0 (NtOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1409EB140 (NtQuerySymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpInitializeDriveLetters(__int64 a1, size_t a2, size_t *a3, const wchar_t *a4)
{
  NTSTATUS SymbolicLinkObject; // ebx
  unsigned int v5; // edi
  wchar_t *Buffer; // r13
  unsigned int i; // esi
  char *v8; // r14
  __int64 Pool2; // rax
  void *v10; // r15
  HANDLE v11; // rcx
  unsigned int v13; // ebx
  char v14; // r14
  UNICODE_STRING *v15; // rsi
  size_t v16; // [rsp+28h] [rbp-69h]
  HANDLE LinkHandle; // [rsp+38h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  wchar_t pszDest[32]; // [rsp+80h] [rbp-11h] BYREF

  DestinationString = 0LL;
  SymbolicLinkObject = 0;
  memset(&ObjectAttributes, 0, 44);
  v5 = 0;
  LinkHandle = 0LL;
  StringCopyWorkerW_0(pszDest, a2, a3, a4, v16);
  RtlInitUnicodeString(&DestinationString, pszDest);
  Buffer = DestinationString.Buffer;
  for ( i = 0; i < 0x1A; ++i )
  {
    ObjectAttributes.Length = 48;
    Buffer[12] = i + 65;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = NtOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( SymbolicLinkObject >= 0 )
    {
      *((_WORD *)&DriveMappingArray + 12 * v5) = Buffer[12];
      v8 = (char *)&DriveMappingArray + 24 * v5;
      Pool2 = ExAllocatePool2(0x100uLL);
      v10 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v11 = LinkHandle;
      *((_DWORD *)v8 + 2) = 0x1000000;
      *((_QWORD *)v8 + 2) = Pool2;
      SymbolicLinkObject = NtQuerySymbolicLinkObject(v11, (PUNICODE_STRING)(v8 + 8), 0LL);
      NtClose(LinkHandle);
      if ( SymbolicLinkObject < 0 )
      {
        ExFreePoolWithTag(v10, 0);
        RtlInitUnicodeString((PUNICODE_STRING)(v8 + 8), 0LL);
      }
      else
      {
        ++v5;
      }
    }
  }
  if ( SymbolicLinkObject == -1073741801 )
    return (unsigned int)SymbolicLinkObject;
  v13 = 0;
  while ( v13 < v5 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    v14 = 0;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v15 = (UNICODE_STRING *)((char *)&DriveMappingArray + 16 * v13 + 8 * v13 + 8);
    ObjectAttributes.ObjectName = v15;
    if ( NtOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) >= 0 )
    {
      if ( NtQuerySymbolicLinkObject(LinkHandle, v15, 0LL) < 0 )
      {
        ExFreePoolWithTag(v15->Buffer, 0);
        RtlInitUnicodeString(v15, 0LL);
      }
      else
      {
        v14 = 1;
      }
      NtClose(LinkHandle);
      if ( v14 )
        continue;
    }
    ++v13;
  }
  return 0LL;
}
