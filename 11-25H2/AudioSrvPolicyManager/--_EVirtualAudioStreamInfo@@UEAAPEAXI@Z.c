/*
 * XREFs of ??_EVirtualAudioStreamInfo@@UEAAPEAXI@Z @ 0x180028920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualAudioStreamInfo@@UEAA@XZ @ 0x180028684 (--1VirtualAudioStreamInfo@@UEAA@XZ.c)
 */

VirtualAudioStreamInfo *__fastcall VirtualAudioStreamInfo::`vector deleting destructor'(
        VirtualAudioStreamInfo *this,
        char a2)
{
  VirtualAudioStreamInfo::~VirtualAudioStreamInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
