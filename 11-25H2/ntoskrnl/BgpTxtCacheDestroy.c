/*
 * XREFs of BgpTxtCacheDestroy @ 0x140BA4354
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140BA1FD0 (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x140BA2B5C (BgpTxtDestroyRegion.c)
 *     ResFwFreeContext @ 0x140BA34C4 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x140BA3CB4 (AnFwpDisableProgressTimer.c)
 * Callees:
 *     TxtpClearCache @ 0x140BA437C (TxtpClearCache.c)
 *     RaspClearCache @ 0x140BA5C90 (RaspClearCache.c)
 */

__int64 BgpTxtCacheDestroy()
{
  __int64 result; // rax

  result = TxtpClearCache();
  if ( RasterizerInitialized )
    return RaspClearCache();
  return result;
}
