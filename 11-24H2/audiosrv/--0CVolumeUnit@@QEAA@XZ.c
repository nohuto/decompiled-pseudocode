/*
 * XREFs of ??0CVolumeUnit@@QEAA@XZ @ 0x18004E314
 * Callers:
 *     ??$_Construct_in_place@VCVolumeUnit@@$$V@std@@YAXAEAVCVolumeUnit@@@Z @ 0x1800CB1BC (--$_Construct_in_place@VCVolumeUnit@@$$V@std@@YAXAEAVCVolumeUnit@@@Z.c)
 *     ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x180112EFC (-CallConstructors@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVC.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1801133B0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180114144 (-LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18004E364 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18004E578 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 */

CVolumeUnit *__fastcall CVolumeUnit::CVolumeUnit(CVolumeUnit *this, __int64 a2)
{
  CVolumeUnit::SetDBRange(this, a2);
  CVolumeUnit::SetWiper(this, 0.0);
  return this;
}
