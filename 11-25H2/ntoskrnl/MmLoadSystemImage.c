/*
 * XREFs of MmLoadSystemImage @ 0x1409AFC50
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x14058E3A0 (IoLoadCrashDumpDriver.c)
 *     PnprLoadPluginDriver @ 0x140723D14 (PnprLoadPluginDriver.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall MmLoadSystemImage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, 0, a4, a5, a6);
}
