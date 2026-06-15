/*
 * XREFs of ??1AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ @ 0x18001E730
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001E4B0 (--1CAudioSession@@MEAA@XZ.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18001F950 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 */

void __fastcall AudioSrvVolumeTelemetrySessionVolume::~AudioSrvVolumeTelemetrySessionVolume(
        AudioSrvVolumeTelemetrySessionVolume *this)
{
  *(_QWORD *)this = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
