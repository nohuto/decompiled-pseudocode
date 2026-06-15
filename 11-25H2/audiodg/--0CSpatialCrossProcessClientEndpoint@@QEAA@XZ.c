/*
 * XREFs of ??0CSpatialCrossProcessClientEndpoint@@QEAA@XZ @ 0x1400891C8
 * Callers:
 *     ??0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x140089260 (--0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140088FEC (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

CSpatialCrossProcessClientEndpoint *__fastcall CSpatialCrossProcessClientEndpoint::CSpatialCrossProcessClientEndpoint(
        CSpatialCrossProcessClientEndpoint *this)
{
  CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint(this);
  *(_QWORD *)this = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 166) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 167) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 168) = &Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 169) = 0LL;
  *((_QWORD *)this + 170) = 0LL;
  *((_DWORD *)this + 342) = 0;
  *((_QWORD *)this + 172) = 0LL;
  *((_BYTE *)this + 1384) = 0;
  return this;
}
