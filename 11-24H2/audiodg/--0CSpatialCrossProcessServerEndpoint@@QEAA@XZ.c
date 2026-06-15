/*
 * XREFs of ??0CSpatialCrossProcessServerEndpoint@@QEAA@XZ @ 0x140088D80
 * Callers:
 *     ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140088E34 (--0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140088A6C (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

CSpatialCrossProcessServerEndpoint *__fastcall CSpatialCrossProcessServerEndpoint::CSpatialCrossProcessServerEndpoint(
        CSpatialCrossProcessServerEndpoint *this)
{
  CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint(this);
  *(_QWORD *)this = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 166) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 167) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  *((_BYTE *)this + 1344) = 0;
  *((_QWORD *)this + 169) = 0LL;
  *((_QWORD *)this + 170) = 0LL;
  *((_QWORD *)this + 171) = 0LL;
  *((_QWORD *)this + 172) = 0LL;
  *((_QWORD *)this + 173) = 0LL;
  *((_OWORD *)this + 87) = 0LL;
  *((_DWORD *)this + 352) = 0;
  *((_QWORD *)this + 177) = 0LL;
  *((_QWORD *)this + 178) = 0LL;
  *((_DWORD *)this + 358) = 0;
  return this;
}
