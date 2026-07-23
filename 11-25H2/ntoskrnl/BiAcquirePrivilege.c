/*
 * XREFs of BiAcquirePrivilege @ 0x140A26758
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
 *     RtlImpersonateSelfEx @ 0x140A28334 (RtlImpersonateSelfEx.c)
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
