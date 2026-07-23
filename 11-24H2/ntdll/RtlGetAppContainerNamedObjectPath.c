/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x1800C5980
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x18007FBD0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlEqualSid @ 0x1800C5DD0 (RtlEqualSid.c)
 *     NtQueryInformationToken @ 0x180160470 (NtQueryInformationToken.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlGetAppContainerNamedObjectPath(
        HANDLE TokenHandle,
        PSID AppContainerSid,
        BOOLEAN RelativePath,
        PUNICODE_STRING ObjectPath)
{
  char v8; // bl
  char v9; // r14
  NTSTATUS result; // eax
  char v11; // al
  char v12; // r8
  int TokenInformation; // [rsp+30h] [rbp-E8h] BYREF
  int v14; // [rsp+34h] [rbp-E4h] BYREF
  int v15; // [rsp+38h] [rbp-E0h] BYREF
  PSID Sid2[12]; // [rsp+40h] [rbp-D8h] BYREF
  PSID Sid1[12]; // [rsp+A0h] [rbp-78h] BYREF
  ULONG ReturnLength; // [rsp+138h] [rbp+20h] BYREF

  TokenInformation = 0;
  ReturnLength = 0;
  memset_thunk_772440563353939046(Sid2, 0, 0x58uLL);
  memset_thunk_772440563353939046(Sid1, 0, 0x58uLL);
  if ( !ObjectPath )
    return -1073741811;
  if ( TokenHandle && AppContainerSid )
    return -1073741776;
  v15 = 0;
  v14 = 0;
  v8 = 13;
  v9 = 0;
  if ( !RelativePath )
    v8 = 8;
  if ( AppContainerSid )
  {
    TokenHandle = (HANDLE)-4LL;
    v11 = 0;
  }
  else
  {
    if ( !TokenHandle )
      TokenHandle = (HANDLE)-6LL;
    result = NtQueryInformationToken(TokenHandle, 0x1Du, &TokenInformation, 4u, &ReturnLength);
    if ( result < 0 )
      return result;
    v11 = 1;
    if ( !TokenInformation )
    {
      result = 0;
      *ObjectPath = 0LL;
      return result;
    }
  }
  if ( !RelativePath || (v9 = 1, !v11) )
  {
LABEL_14:
    v12 = v8 | 2;
    if ( !v9 )
      v12 = v8;
    return RtlpGetTokenNamedObjectPath(TokenHandle, AppContainerSid, v12, ObjectPath);
  }
  result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0x2Au, &v14, 4u, &ReturnLength);
  if ( result < 0 )
    return result;
  if ( !v14 )
  {
    v9 = 0;
    goto LABEL_14;
  }
  result = NtQueryInformationToken(TokenHandle, 0x2Au, &v15, 4u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( !v15 )
      return -1073741637;
    result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 1u, Sid2, 0x58u, &ReturnLength);
    if ( result >= 0 )
    {
      result = NtQueryInformationToken(TokenHandle, 1u, Sid1, 0x58u, &ReturnLength);
      if ( result >= 0 )
      {
        if ( !RtlEqualSid(Sid1[0], Sid2[0]) )
          return -1073741637;
        goto LABEL_14;
      }
    }
  }
  return result;
}
