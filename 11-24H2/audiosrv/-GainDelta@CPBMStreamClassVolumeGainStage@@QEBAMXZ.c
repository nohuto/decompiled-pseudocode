/*
 * XREFs of ?GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ @ 0x1800C1744
 * Callers:
 *     ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x18005CD90 (-GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z.c)
 *     ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x1800C1EFC (-GetDuckingState@CAudioSession@@QEAAJPEAM@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CPBMStreamClassVolumeGainStage::GainDelta(CPBMStreamClassVolumeGainStage *this)
{
  double v1; // xmm0_8

  v1 = (***((double (__fastcall ****)(_QWORD))this + 7))(*((_QWORD *)this + 7));
  return ConvertDbToEngineVolume(v1);
}
