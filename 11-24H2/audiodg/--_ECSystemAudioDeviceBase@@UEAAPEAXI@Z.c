/*
 * XREFs of ??_ECSystemAudioDeviceBase@@UEAAPEAXI@Z @ 0x14006F190
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x14002AB50 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSystemAudioDeviceBase *__fastcall CSystemAudioDeviceBase::`vector deleting destructor'(
        CSystemAudioDeviceBase *this,
        char a2)
{
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
