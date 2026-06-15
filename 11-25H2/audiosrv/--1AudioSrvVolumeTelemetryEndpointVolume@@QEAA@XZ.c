/*
 * XREFs of ??1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ @ 0x180084EEC
 * Callers:
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x1800A19F0 (--1CVolumeControlBase@@MEAA@XZ.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18001F950 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 */

void __fastcall AudioSrvVolumeTelemetryEndpointVolume::~AudioSrvVolumeTelemetryEndpointVolume(
        AudioSrvVolumeTelemetryEndpointVolume *this)
{
  *(_QWORD *)this = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
