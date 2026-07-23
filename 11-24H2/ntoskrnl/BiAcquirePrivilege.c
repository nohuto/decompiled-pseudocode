/*
 * XREFs of BiAcquirePrivilege @ 0x1409A72E0
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
 *     RtlImpersonateSelfEx @ 0x1409A8554 (RtlImpersonateSelfEx.c)
 */

NTSTATUS __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // bl
  int v5; // edi
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(ThreadInformation) = 0;
  v2 = a2;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    result = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
    if ( result < 0 )
      return result;
  }
  LOBYTE(a2) = 1;
  v5 = BiAdjustPrivilege(a1, a2, &ThreadInformation);
  if ( v5 < 0 )
  {
    if ( !v4 )
    {
      ThreadInformation = 0LL;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
  }
  else
  {
    *(_BYTE *)(v2 + 4) = ThreadInformation;
    *(_BYTE *)(v2 + 5) = v4;
    *(_DWORD *)v2 = a1;
  }
  return v5;
}
