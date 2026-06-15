/*
 * XREFs of ??_G?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x14005C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14005BFE0 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CAudioDeviceGraph>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CAudioDeviceGraph>::~CComAggObject<CAudioDeviceGraph>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
