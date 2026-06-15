/*
 * XREFs of pow @ 0x180021254
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z @ 0x180012CD0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18001ED24 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
