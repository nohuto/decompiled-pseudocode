/*
 * XREFs of ?GrepGetHwndDpiBucket@@YA_NAEBUSESSION_GLOBALS@Full@Gre@@PEAUHWND__@@PEAUHWND_LOGPIXELS_BUCKET@@@Z @ 0x140101C6C
 * Callers:
 *     GreNotifyHwndDpiDirty @ 0x140101A6C (GreNotifyHwndDpiDirty.c)
 * Callees:
 *     ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B2430 (-Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

BOOLEAN __fastcall GrepGetHwndDpiBucket(const struct Gre::Full::SESSION_GLOBALS *a1, unsigned __int64 a2, void **a3)
{
  unsigned __int64 v4; // rbx
  BOOLEAN result; // al

  v4 = a2 >> 1;
  result = RtlTestBit((PRTL_BITMAP)a1 + 303, (a2 >> 1) & 0x3FFF);
  if ( result )
    return NSInstrumentation::CPointerHashTable::Lookup(
             *((NSInstrumentation::CPointerHashTable **)a1 + 605),
             (const void *)(v4 & 0x3FFF),
             a3);
  return result;
}
