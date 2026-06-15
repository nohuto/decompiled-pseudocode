/*
 * XREFs of ??_G?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140044680
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x1400446BC (--1-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSystemAudioDeviceShared *__fastcall ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor'(
        CSystemAudioDeviceShared *Block,
        char a2)
{
  ATL::CComObject<CSystemAudioDeviceShared>::~CComObject<CSystemAudioDeviceShared>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
