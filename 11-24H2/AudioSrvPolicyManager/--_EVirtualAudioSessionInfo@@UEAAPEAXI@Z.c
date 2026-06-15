/*
 * XREFs of ??_EVirtualAudioSessionInfo@@UEAAPEAXI@Z @ 0x180028A80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualAudioSessionInfo@@UEAA@XZ @ 0x1800287E8 (--1VirtualAudioSessionInfo@@UEAA@XZ.c)
 */

VirtualAudioSessionInfo *__fastcall VirtualAudioSessionInfo::`vector deleting destructor'(
        VirtualAudioSessionInfo *this,
        char a2)
{
  VirtualAudioSessionInfo::~VirtualAudioSessionInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
