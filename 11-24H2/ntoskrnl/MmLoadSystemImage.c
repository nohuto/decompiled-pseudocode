/*
 * XREFs of MmLoadSystemImage @ 0x1409C7FC0
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x140591BD0 (IoLoadCrashDumpDriver.c)
 *     PnprLoadPluginDriver @ 0x14072FC94 (PnprLoadPluginDriver.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall MmLoadSystemImage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, 0, a4, a5, a6);
}
