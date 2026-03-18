/*
 * XREFs of ?GetBaseRustGlobals@@YAPEBUBaseRustGlobals@@XZ @ 0x1400D6520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct BaseRustGlobals *GetBaseRustGlobals(void)
{
  return (const struct BaseRustGlobals *)WPP_MAIN_CB.Dpc.SystemArgument1;
}
