/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14006B3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140035160 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@@Details@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
