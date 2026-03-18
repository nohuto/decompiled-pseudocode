/*
 * XREFs of ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C00D2E9C
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00D0D50 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     UmfdQueryFontData @ 0x1C00D2C40 (UmfdQueryFontData.c)
 * Callees:
 *     <none>
 */

_QWORD *UmfdCreateRequestContext(void)
{
  _QWORD *result; // rax

  result = EngAllocMem(0, 8u, 0x71724446u);
  if ( result )
    *result = 0LL;
  return result;
}
