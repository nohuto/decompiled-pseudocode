/*
 * XREFs of ??_E?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAPEAXI@Z @ 0x14006F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x14006F00C (--1-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 */

CSystemAudioDeviceExclusive *__fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::`vector deleting destructor'(
        CSystemAudioDeviceExclusive *Block,
        char a2)
{
  ATL::CComObject<CSystemAudioDeviceExclusive>::~CComObject<CSystemAudioDeviceExclusive>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
