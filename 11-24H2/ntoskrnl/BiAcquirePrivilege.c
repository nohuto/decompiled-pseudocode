/*
 * XREFs of BiAcquirePrivilege @ 0x1409C0C90
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
 *     RtlImpersonateSelfEx @ 0x1409C1F04 (RtlImpersonateSelfEx.c)
 */

__int64 __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // bl
  int v5; // edi
  __int64 result; // rax
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
    result = RtlImpersonateSelfEx(2LL, 0LL, 0LL);
    if ( (int)result < 0 )
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
  return (unsigned int)v5;
}
