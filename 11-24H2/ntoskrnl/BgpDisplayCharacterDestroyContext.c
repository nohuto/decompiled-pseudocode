/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x140BB0834
 * Callers:
 *     BgConsoleDestroyInterface @ 0x140BB0940 (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140C70D44 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x140BB2B5C (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
