/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14003F700
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessBaseMemory@@IEAA@XZ @ 0x14003F744 (--1CCrossProcessBaseMemory@@IEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrossProcessBaseMemory *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>::`vector deleting destructor'(
        CCrossProcessBaseMemory *Block,
        char a2)
{
  *((_DWORD *)Block + 11) = -1073741823;
  CCrossProcessBaseMemory::~CCrossProcessBaseMemory(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
