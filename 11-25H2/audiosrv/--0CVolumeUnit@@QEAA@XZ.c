/*
 * XREFs of ??0CVolumeUnit@@QEAA@XZ @ 0x180051A48
 * Callers:
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800784A4 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180081A98 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ??$_Construct_in_place@VCVolumeUnit@@$$V@std@@YAXAEAVCVolumeUnit@@@Z @ 0x1800CBAEC (--$_Construct_in_place@VCVolumeUnit@@$$V@std@@YAXAEAVCVolumeUnit@@@Z.c)
 *     ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x18010C06C (-CallConstructors@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVC.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18010C4C0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x18010C8B0 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180051A98 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180052354 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 */

CVolumeUnit *__fastcall CVolumeUnit::CVolumeUnit(CVolumeUnit *this, __int64 a2)
{
  CVolumeUnit::SetDBRange(this, a2);
  CVolumeUnit::SetWiper(this, 0.0);
  return this;
}
