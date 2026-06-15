/*
 * XREFs of _dynamic_atexit_destructor_for__CSpatialAudioTech::s_spAtmosCheck__ @ 0x180169AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__CSpatialAudioTech::s_spAtmosCheck__()
{
  return Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&CSpatialAudioTech::s_spAtmosCheck);
}
