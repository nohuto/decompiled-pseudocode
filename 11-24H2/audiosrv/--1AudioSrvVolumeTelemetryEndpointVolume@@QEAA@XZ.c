/*
 * XREFs of ??1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ @ 0x1800721EC
 * Callers:
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x180112A64 (--1CVolumeControlBase@@MEAA@XZ.c)
 *     _CVolumeControlBase::CVolumeControlBase_::_1_::dtor$4 @ 0x18016C8E0 (_CVolumeControlBase--CVolumeControlBase_--_1_--dtor$4.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18002881C (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 */

void __fastcall AudioSrvVolumeTelemetryEndpointVolume::~AudioSrvVolumeTelemetryEndpointVolume(
        AudioSrvVolumeTelemetryEndpointVolume *this)
{
  *(_QWORD *)this = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
