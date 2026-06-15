/*
 * XREFs of ??0AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ @ 0x18002C8DC
 * Callers:
 *     ??0CAudioSession@@IEAA@XZ @ 0x18002C618 (--0CAudioSession@@IEAA@XZ.c)
 * Callees:
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18002E030 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
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
