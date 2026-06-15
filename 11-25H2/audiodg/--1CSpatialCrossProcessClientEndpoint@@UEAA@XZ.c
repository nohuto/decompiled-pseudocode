/*
 * XREFs of ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x14008962C
 * Callers:
 *     ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x1400896AC (--1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ.c)
 *     ??_ECSpatialCrossProcessClientEndpoint@@UEAAPEAXI@Z @ 0x140089920 (--_ECSpatialCrossProcessClientEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseIndexMapRT@@QEAA@XZ @ 0x14008960C (--1CSparseIndexMapRT@@QEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint(
        CSpatialCrossProcessClientEndpoint *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 166) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 167) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 168) = &Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>::`vftable';
  CSparseIndexMapRT::~CSparseIndexMapRT((CSpatialCrossProcessClientEndpoint *)((char *)this + 1352), a2, a3);
  CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(this);
}
