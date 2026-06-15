/*
 * XREFs of floorf @ 0x1800A8B40
 * Callers:
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180070420 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 *     ?VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x18007F450 (-VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z.c)
 *     ?VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x1800813B0 (-VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}
