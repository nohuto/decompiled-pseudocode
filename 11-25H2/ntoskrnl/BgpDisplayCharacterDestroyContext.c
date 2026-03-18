/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x140BA0834
 * Callers:
 *     BgConsoleDestroyInterface @ 0x140BA0940 (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140C5F964 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x140BA2B5C (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
