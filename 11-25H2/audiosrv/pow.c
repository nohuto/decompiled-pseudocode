/*
 * XREFs of pow @ 0x1800A8B64
 * Callers:
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180051A98 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180052294 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180052354 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x1800523F8 (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18005249C (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180055F00 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006937C (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x18007E394 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800C2D24 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x18010D938 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z @ 0x18010DC40 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
