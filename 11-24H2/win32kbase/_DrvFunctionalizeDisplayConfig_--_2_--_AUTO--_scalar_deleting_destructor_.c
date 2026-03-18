/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1401C6740
 * Callers:
 *     <none>
 * Callees:
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x14008D8CC (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 */

PVOID *__fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_(PVOID *a1, char a2)
{
  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(a1);
  if ( (a2 & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 242;
  }
  return a1;
}
