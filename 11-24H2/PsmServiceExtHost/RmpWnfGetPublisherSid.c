/*
 * XREFs of RmpWnfGetPublisherSid @ 0x18002EE50
 * Callers:
 *     CrmActivityStart @ 0x18002D8A0 (CrmActivityStart.c)
 *     RmpWnfCreateStateNameForClient @ 0x18002EB68 (RmpWnfCreateStateNameForClient.c)
 *     ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180030128 (-RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180089CAC (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpWnfGetPublisherSid(PSID DestinationSid)
{
  HANDLE CurrentProcess; // rax
  NTSTATUS v3; // ebx
  ULONG ReturnLength; // [rsp+30h] [rbp-88h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-80h] BYREF
  _OWORD TokenInformation[5]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v8; // [rsp+90h] [rbp-28h]

  memset(TokenInformation, 0, sizeof(TokenInformation));
  ReturnLength = 0;
  TokenHandle = 0LL;
  v8 = 0LL;
  CurrentProcess = GetCurrentProcess();
  v3 = NtOpenProcessToken(CurrentProcess, 8u, &TokenHandle);
  if ( v3 >= 0 )
  {
    v3 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
    if ( v3 >= 0 )
      RtlCopySid(0x44u, DestinationSid, *(PSID *)&TokenInformation[0]);
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)v3;
}
