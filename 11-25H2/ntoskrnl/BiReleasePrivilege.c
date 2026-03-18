/*
 * XREFs of BiReleasePrivilege @ 0x140A26700
 * Callers:
 *     BiAddBootEntry @ 0x140804DD4 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140805624 (BiDeleteBootEntry.c)
 *     BiModifyBootEntry @ 0x1408059F4 (BiModifyBootEntry.c)
 *     BiSetBootOptions @ 0x140805B44 (BiSetBootOptions.c)
 *     SiGetEspFromFirmware @ 0x1408068A0 (SiGetEspFromFirmware.c)
 *     BiUnloadHiveByName @ 0x140A249A0 (BiUnloadHiveByName.c)
 *     BiSetBootEntryOrder @ 0x140A258D0 (BiSetBootEntryOrder.c)
 *     BiDeleteEfiVariable @ 0x140A25CC8 (BiDeleteEfiVariable.c)
 *     BiQueryBootEntryOrder @ 0x140A2609C (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140A26178 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x140A26634 (BiTranslateFilePath.c)
 *     BiEnumerateBootEntries @ 0x140A27D38 (BiEnumerateBootEntries.c)
 *     BiLoadHive @ 0x140A28550 (BiLoadHive.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14069B2E0 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140A26808 (BiAdjustPrivilege.c)
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
