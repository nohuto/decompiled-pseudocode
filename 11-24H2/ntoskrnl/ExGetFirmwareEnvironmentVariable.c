/*
 * XREFs of ExGetFirmwareEnvironmentVariable @ 0x1409666C0
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1409667C0 (NtQuerySystemEnvironmentValueEx.c)
 *     PopCheckShutdownMarker @ 0x140C2D6B4 (PopCheckShutdownMarker.c)
 * Callees:
 *     ExpUnicodeStringToNonpagedWStr @ 0x14096674C (ExpUnicodeStringToNonpagedWStr.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140966C70 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetFirmwareEnvironmentVariable(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  void *v8; // rdi
  unsigned int FirmwareEnvironmentVariable; // ebx

  if ( dword_140EFEAF0 != 2 )
    return 3221225474LL;
  v8 = (void *)ExpUnicodeStringToNonpagedWStr();
  if ( !v8 )
    return 3221225626LL;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable((_DWORD)v8, a2, a3, a4, a5, 0);
  ExFreePoolWithTag(v8, 0);
  return FirmwareEnvironmentVariable;
}
