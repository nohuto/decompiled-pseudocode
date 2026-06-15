/*
 * XREFs of ??_GCPerStreamVolumeAudioSession@@EEAAPEAXI@Z @ 0x18002D220
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18002D25C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CPerStreamVolumeAudioSession *__fastcall CPerStreamVolumeAudioSession::`scalar deleting destructor'(
        CPerStreamVolumeAudioSession *this,
        char a2)
{
  CPerStreamVolumeAudioSession::~CPerStreamVolumeAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3E0);
  return this;
}
