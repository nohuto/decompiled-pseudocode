/*
 * XREFs of ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800C1364
 * Callers:
 *     ?GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ @ 0x1800C1744 (-GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ.c)
 *     s_apmSetVolumeGroupGainForId @ 0x180103E70 (s_apmSetVolumeGroupGainForId.c)
 * Callees:
 *     pow @ 0x1800A4E54 (pow.c)
 */

// local variable allocation has failed, the output may be wrong!
float __fastcall ConvertDbToEngineVolume(double a1)
{
  if ( _mm_cvtsi128_si32(*(__m128i *)&a1) == -8388608 )
    return 0.0;
  else
    return pow(10.0, *(float *)&a1 / 20.0);
}
