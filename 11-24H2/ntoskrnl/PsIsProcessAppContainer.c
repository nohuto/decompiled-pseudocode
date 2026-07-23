/*
 * XREFs of PsIsProcessAppContainer @ 0x1408592D0
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     IopFileObjectRevoked @ 0x140405E80 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x1405940D8 (IoRevokeHandlesForProcess.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407BF3E0 (NtSetSystemEnvironmentValueEx.c)
 *     NtReadFile @ 0x140846640 (NtReadFile.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140858944 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1408590B8 (ExpGetSystemFirmwareTableInformation.c)
 *     NtWriteFile @ 0x1408BEB30 (NtWriteFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1408C22B0 (BuildQueryDirectoryIrp.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14094F250 (NtQuerySystemEnvironmentValueEx.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 */

bool __fastcall PsIsProcessAppContainer(__int64 a1)
{
  char v1; // si
  void *v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  LODWORD(TokenInformation) = 0;
  v2 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  v3 = SeQueryInformationToken(v2, TokenIsAppContainer, &TokenInformation);
  ObfDereferenceObject(v2);
  if ( v3 >= 0 )
    return (_DWORD)TokenInformation != 0;
  return v1;
}
