/*
 * XREFs of BgpTxtCacheDestroy @ 0x140BB6354
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140BB3FD0 (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x140BB4B5C (BgpTxtDestroyRegion.c)
 *     ResFwFreeContext @ 0x140BB54C4 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x140BB5CB4 (AnFwpDisableProgressTimer.c)
 * Callees:
 *     TxtpClearCache @ 0x140BB637C (TxtpClearCache.c)
 *     RaspClearCache @ 0x140BB7C90 (RaspClearCache.c)
 */

__int64 BgpTxtCacheDestroy()
{
  __int64 result; // rax

  result = TxtpClearCache();
  if ( RasterizerInitialized )
    return RaspClearCache();
  return result;
}
