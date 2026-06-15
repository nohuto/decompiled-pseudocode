/*
 * XREFs of ??_GCVirtualAudioStream@@UEAAPEAXI@Z @ 0x18005F8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualAudioStream@@UEAA@XZ @ 0x18005F8DC (--1CVirtualAudioStream@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVirtualAudioStream *__fastcall CVirtualAudioStream::`scalar deleting destructor'(CVirtualAudioStream *this, char a2)
{
  CVirtualAudioStream::~CVirtualAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
