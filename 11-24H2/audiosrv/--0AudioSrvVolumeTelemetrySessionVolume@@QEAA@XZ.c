/*
 * XREFs of ??0AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ @ 0x18000B2AC
 * Callers:
 *     ??0CAudioSession@@IEAA@XZ @ 0x18000AFE8 (--0CAudioSession@@IEAA@XZ.c)
 * Callees:
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18000A2E4 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 */

AudioSrvVolumeTelemetrySessionVolume *__fastcall AudioSrvVolumeTelemetrySessionVolume::AudioSrvVolumeTelemetrySessionVolume(
        AudioSrvVolumeTelemetrySessionVolume *this)
{
  AudioSrvVolumeTelemetry::AudioSrvVolumeTelemetry(this);
  *(_QWORD *)this = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  return this;
}
