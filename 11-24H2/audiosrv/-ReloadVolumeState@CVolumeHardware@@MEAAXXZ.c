/*
 * XREFs of ?ReloadVolumeState@CVolumeHardware@@MEAAXXZ @ 0x180114F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CVolumeHardware::ReloadVolumeState(CVolumeHardware *this)
{
  CVolumeHardware::ReadChannelLevelsFromHardware(this);
}
