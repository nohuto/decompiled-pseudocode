/*
 * XREFs of BgpTxtCacheDestroy @ 0x140BB4354
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140BB1FD0 (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x140BB2B5C (BgpTxtDestroyRegion.c)
 *     ResFwFreeContext @ 0x140BB34C4 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x140BB3CB4 (AnFwpDisableProgressTimer.c)
 * Callees:
 *     TxtpClearCache @ 0x140BB437C (TxtpClearCache.c)
 *     RaspClearCache @ 0x140BB5C90 (RaspClearCache.c)
 */

__int64 BgpTxtCacheDestroy()
{
  __int64 result; // rax

  result = TxtpClearCache();
  if ( RasterizerInitialized )
    return RaspClearCache();
  return result;
}
