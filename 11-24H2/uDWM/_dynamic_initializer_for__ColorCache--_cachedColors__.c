/*
 * XREFs of _dynamic_initializer_for__ColorCache::_cachedColors__ @ 0x180086B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__ColorCache::_cachedColors__()
{
  RtlInitializeGenericTable(
    &ColorCache::_cachedColors,
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__ColorCache::_cachedColors__);
}
