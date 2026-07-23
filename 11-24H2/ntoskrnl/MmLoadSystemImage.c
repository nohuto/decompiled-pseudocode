/*
 * XREFs of MmLoadSystemImage @ 0x1409B8990
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x14058EBF0 (IoLoadCrashDumpDriver.c)
 *     PnprLoadPluginDriver @ 0x14072DCA4 (PnprLoadPluginDriver.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall MmLoadSystemImage(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5, PVOID *a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, 0, a4, a5, a6);
}
