/*
 * XREFs of ?ValidateAudioLevel@@YA_NM@Z @ 0x1800A6210
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x18001E0F0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x18001E1F0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x18005D670 (-SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z.c)
 *     ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180082230 (-SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180086370 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C5290 (-SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800CA2BC (-SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z.c)
 *     ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x1801078E0 (-SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateAudioLevel(float a1)
{
  return a1 >= 0.0 && a1 <= 1.0;
}
