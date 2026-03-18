/*
 * XREFs of PsIsProcessAppContainer @ 0x140969C10
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     IopFileObjectRevoked @ 0x1404063C0 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x140593A48 (IoRevokeHandlesForProcess.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407AF7C0 (NtSetSystemEnvironmentValueEx.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140821EF0 (NtQuerySystemEnvironmentValueEx.c)
 *     NtReadFile @ 0x14084E5D0 (NtReadFile.c)
 *     NtWriteFile @ 0x1408C32D0 (NtWriteFile.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140968340 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409699F8 (ExpGetSystemFirmwareTableInformation.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
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
