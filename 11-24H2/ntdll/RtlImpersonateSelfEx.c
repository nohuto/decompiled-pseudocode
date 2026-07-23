/*
 * XREFs of RtlImpersonateSelfEx @ 0x1800E4A90
 * Callers:
 *     RtlAcquirePrivilege @ 0x1800E4740 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelf @ 0x1800F0D40 (RtlImpersonateSelf.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x180160650 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x180160890 (NtDuplicateToken.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlImpersonateSelfEx(
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
        ACCESS_MASK AdditionalAccess,
        PHANDLE ThreadToken)
{
  int v5; // ebx
  HANDLE ThreadInformation; // [rsp+30h] [rbp-19h] BYREF
  HANDLE TokenHandle; // [rsp+38h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-9h] BYREF
  _DWORD v10[2]; // [rsp+70h] [rbp+27h] BYREF
  __int16 v11; // [rsp+78h] [rbp+2Fh]
  __int16 v12; // [rsp+7Ah] [rbp+31h]

  TokenHandle = 0LL;
  ThreadInformation = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v12 = 0;
  if ( !ThreadToken && AdditionalAccess )
    return -1073741584;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v10[1] = ImpersonationLevel;
  ObjectAttributes.SecurityQualityOfService = v10;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v10[0] = 12;
  v11 = 1;
  v5 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2u, 0x200u, &TokenHandle);
  if ( v5 >= 0 )
  {
    v5 = NtDuplicateToken(
           TokenHandle,
           AdditionalAccess | 4,
           &ObjectAttributes,
           0,
           TokenImpersonation,
           &ThreadInformation);
    if ( v5 >= 0 )
    {
      v5 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      if ( v5 >= 0 && ThreadToken )
        *ThreadToken = ThreadInformation;
      else
        NtClose(ThreadInformation);
    }
    NtClose(TokenHandle);
  }
  return v5;
}
