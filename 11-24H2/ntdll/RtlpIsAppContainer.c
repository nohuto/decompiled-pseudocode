/*
 * XREFs of RtlpIsAppContainer @ 0x180113198
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18001C5C8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtQueryInformationToken @ 0x180160470 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x180160630 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x180160650 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x180160890 (NtDuplicateToken.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpIsAppContainer(HANDLE a1, bool *a2)
{
  NTSTATUS v3; // ebx
  int TokenInformation; // [rsp+30h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-11h] BYREF
  ULONG ReturnLength; // [rsp+40h] [rbp-9h] BYREF
  HANDLE ExistingTokenHandle; // [rsp+48h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int64 v10; // [rsp+80h] [rbp+37h] BYREF
  int v11; // [rsp+88h] [rbp+3Fh]

  TokenInformation = 0;
  ExistingTokenHandle = 0LL;
  Handle = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v10 = 0LL;
  v11 = 0;
  *a2 = 0;
  memset(&ObjectAttributes, 0, 32);
  if ( a1 )
  {
LABEL_7:
    ReturnLength = 0;
    v3 = NtQueryInformationToken(a1, 0x1Du, &TokenInformation, 4u, &ReturnLength);
    if ( v3 >= 0 )
      *a2 = TokenInformation != 0;
    goto LABEL_9;
  }
  v3 = NtOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0, &Handle);
  if ( v3 == -1073741700 )
  {
    v3 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &ExistingTokenHandle);
    if ( v3 < 0 )
      goto LABEL_9;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = &v10;
    ObjectAttributes.Length = 48;
    v10 = 0x20000000CLL;
    LOWORD(v11) = 1;
    v3 = NtDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
    NtClose(ExistingTokenHandle);
  }
  if ( v3 >= 0 )
  {
    a1 = Handle;
    goto LABEL_7;
  }
LABEL_9:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
