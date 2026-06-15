/*
 * XREFs of ??_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z @ 0x18006DE10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x18009FC3C (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CPerEndpointVolumeAudioSession *__fastcall CPerEndpointVolumeAudioSession::`vector deleting destructor'(
        CPerEndpointVolumeAudioSession *this,
        char a2)
{
  CPerEndpointVolumeAudioSession::~CPerEndpointVolumeAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3D0);
  return this;
}
