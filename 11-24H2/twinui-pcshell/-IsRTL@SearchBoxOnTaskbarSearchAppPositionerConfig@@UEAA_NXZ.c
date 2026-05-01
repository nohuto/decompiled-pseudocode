/*
 * XREFs of ?IsRTL@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x1801B78C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B78DC (-Mirror_IsThreadRTL@@YAHXZ.c)
 */

bool __fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::IsRTL(SearchBoxOnTaskbarSearchAppPositionerConfig *this)
{
  return (unsigned int)Mirror_IsThreadRTL() != 0;
}
