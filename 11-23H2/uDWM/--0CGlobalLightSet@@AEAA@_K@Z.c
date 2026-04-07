/*
 * XREFs of ??0CGlobalLightSet@@AEAA@_K@Z @ 0x18002B9E4
 * Callers:
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x18002B94C (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18001DCB4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CGlobalLightSet *__fastcall CGlobalLightSet::CGlobalLightSet(CGlobalLightSet *this, __int64 a2)
{
  *(_QWORD *)this = &CGlobalLightSet::`vftable';
  *((_DWORD *)this + 2) = 1;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 16),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<enum Windows::UI::LightType,CGlobalLightSet::VISUAL_RESOURCE_MAP_ENTRY_SHAREDLIGHT>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 11) = a2;
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)this + 13);
  return this;
}
