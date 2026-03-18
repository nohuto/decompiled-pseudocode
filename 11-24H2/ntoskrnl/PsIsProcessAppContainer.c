/*
 * XREFs of PsIsProcessAppContainer @ 0x14085D560
 * Callers:
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopReferenceFileObject @ 0x1403F5300 (IopReferenceFileObject.c)
 *     IopFileObjectRevoked @ 0x14040DC30 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x140597158 (IoRevokeHandlesForProcess.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407BEF90 (NtSetSystemEnvironmentValueEx.c)
 *     NtReadFile @ 0x14084A380 (NtReadFile.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14085CBD4 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14085D348 (ExpGetSystemFirmwareTableInformation.c)
 *     NtWriteFile @ 0x1408C1170 (NtWriteFile.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1408C48F0 (BuildQueryDirectoryIrp.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1409667C0 (NtQuerySystemEnvironmentValueEx.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
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
