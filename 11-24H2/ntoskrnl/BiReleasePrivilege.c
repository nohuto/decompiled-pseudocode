/*
 * XREFs of BiReleasePrivilege @ 0x1409A7288
 * Callers:
 *     BiAddBootEntry @ 0x14081508C (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x1408158DC (BiDeleteBootEntry.c)
 *     BiModifyBootEntry @ 0x140815CAC (BiModifyBootEntry.c)
 *     BiSetBootOptions @ 0x140815DFC (BiSetBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140816EE0 (SiGetEspFromFirmware.c)
 *     BiQueryBootEntryOrder @ 0x1409A6E98 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1409A6F74 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x1409A71BC (BiTranslateFilePath.c)
 *     BiEnumerateBootEntries @ 0x1409A7518 (BiEnumerateBootEntries.c)
 *     BiDeleteEfiVariable @ 0x1409A7A20 (BiDeleteEfiVariable.c)
 *     BiSetBootEntryOrder @ 0x1409A7FB8 (BiSetBootEntryOrder.c)
 *     BiLoadHive @ 0x1409A87E0 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A81BF0 (BiUnloadHiveByName.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1406A7550 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x1409A7390 (BiAdjustPrivilege.c)
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
