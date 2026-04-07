/*
 * XREFs of ??0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ @ 0x1800CAD04
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x180047D64 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

CProjectedShadowScene::CProjectedShadowSceneInstance *__fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this)
{
  CProjectedShadowScene::CProjectedShadowSceneInstance *result; // rax

  CBaseObject::CBaseObject(this);
  *(_QWORD *)this = &CProjectedShadowScene::CProjectedShadowSceneInstance::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 16),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_QWORD *)this + 11) = 0LL;
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
