/*
 * XREFs of ??1AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ @ 0x180028650
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x1800283D0 (--1CAudioSession@@MEAA@XZ.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18002881C (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 */

void __fastcall AudioSrvVolumeTelemetrySessionVolume::~AudioSrvVolumeTelemetrySessionVolume(
        AudioSrvVolumeTelemetrySessionVolume *this)
{
  *(_QWORD *)this = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
