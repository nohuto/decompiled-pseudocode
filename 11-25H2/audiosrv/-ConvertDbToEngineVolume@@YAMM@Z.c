/*
 * XREFs of ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800C2D24
 * Callers:
 *     ?GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ @ 0x1800C3054 (-GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ.c)
 *     s_apmSetVolumeGroupGainForId @ 0x1800FF230 (s_apmSetVolumeGroupGainForId.c)
 * Callees:
 *     pow @ 0x1800A8B64 (pow.c)
 */

// local variable allocation has failed, the output may be wrong!
float __fastcall ConvertDbToEngineVolume(double a1)
{
  if ( _mm_cvtsi128_si32(*(__m128i *)&a1) == -8388608 )
    return 0.0;
  else
    return pow(10.0, *(float *)&a1 / 20.0);
}
