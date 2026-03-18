/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x1407BB470
 * Callers:
 *     NtSetSystemEnvironmentValueEx @ 0x1407BEF90 (NtSetSystemEnvironmentValueEx.c)
 *     PopClearSystemSleepCheckpoint @ 0x140A9C774 (PopClearSystemSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140B60210 (PopCheckpointSystemSleepUnsafe.c)
 * Callees:
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407BCFA8 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x14096674C (ExpUnicodeStringToNonpagedWStr.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  void *v9; // rdi
  unsigned int v10; // ebx

  if ( dword_140EFEAF0 != 2 )
    return 3221225474LL;
  v9 = (void *)ExpUnicodeStringToNonpagedWStr();
  if ( !v9 )
    return 3221225626LL;
  v10 = ExpSetFirmwareEnvironmentVariable((_DWORD)v9, a2, a3, a4 & (unsigned int)-(a3 != 0), a5, 0);
  ExFreePoolWithTag(v9, 0);
  return v10;
}
