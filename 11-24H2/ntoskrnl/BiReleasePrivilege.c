/*
 * XREFs of BiReleasePrivilege @ 0x1409C0C38
 * Callers:
 *     BiAddBootEntry @ 0x14081494C (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x14081519C (BiDeleteBootEntry.c)
 *     BiModifyBootEntry @ 0x14081556C (BiModifyBootEntry.c)
 *     BiSetBootOptions @ 0x1408156BC (BiSetBootOptions.c)
 *     SiGetEspFromFirmware @ 0x1408167A0 (SiGetEspFromFirmware.c)
 *     BiUnloadHiveByName @ 0x14085EE48 (BiUnloadHiveByName.c)
 *     BiQueryBootEntryOrder @ 0x1409C0848 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1409C0924 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x1409C0B6C (BiTranslateFilePath.c)
 *     BiEnumerateBootEntries @ 0x1409C0EC8 (BiEnumerateBootEntries.c)
 *     BiDeleteEfiVariable @ 0x1409C13D0 (BiDeleteEfiVariable.c)
 *     BiSetBootEntryOrder @ 0x1409C1968 (BiSetBootEntryOrder.c)
 *     BiLoadHive @ 0x1409C2190 (BiLoadHive.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1406A65B0 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x1409C0D40 (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiReleasePrivilege(unsigned int *a1)
{
  bool v1; // zf
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)a1 + 4) == 0;
  LOBYTE(ThreadInformation) = 0;
  if ( v1 )
    result = BiAdjustPrivilege(*a1, 0LL, &ThreadInformation);
  if ( !*((_BYTE *)a1 + 5) )
  {
    ThreadInformation = 0LL;
    return ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  return result;
}
