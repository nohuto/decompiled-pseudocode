/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIControlChangeNotify@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140061F20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x14005F0F0 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsProp.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IControlChangeNotify>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
