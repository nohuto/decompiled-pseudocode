/*
 * XREFs of ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x14007A000
 * Callers:
 *     ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004C48C (-InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x14008B94C (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x14008C694 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     <none>
 */

signed int ATL::AtlHresultFromLastError(void)
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
