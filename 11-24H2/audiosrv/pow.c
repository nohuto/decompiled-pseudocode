/*
 * XREFs of pow @ 0x1800A4E54
 * Callers:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18004AF44 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18004E364 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18004E578 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x18004E61C (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18004E690 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x18006C1D4 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180086208 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800C1364 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1801133B0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z @ 0x1801157C0 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
