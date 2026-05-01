/*
 * XREFs of ??_EVoiceAssistantPositioner@@UEAAPEAXI@Z @ 0x18007B6DC
 * Callers:
 *     ??_EVoiceAssistantPositioner@@WCI@EAAPEAXI@Z @ 0x18050A3D0 (--_EVoiceAssistantPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1VoiceAssistantPositioner@@UEAA@XZ @ 0x18007B718 (--1VoiceAssistantPositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

VoiceAssistantPositioner *__fastcall VoiceAssistantPositioner::`vector deleting destructor'(
        VoiceAssistantPositioner *this,
        char a2)
{
  VoiceAssistantPositioner::~VoiceAssistantPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1B0);
  return this;
}
