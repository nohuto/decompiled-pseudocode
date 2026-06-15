/*
 * XREFs of ??_E?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x140072A10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x1400728E0 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 */

CSystemAudioDeviceOffloadGraph *__fastcall ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vector deleting destructor'(
        CSystemAudioDeviceOffloadGraph *Block,
        char a2)
{
  CSystemAudioDeviceOffloadGraph::~CSystemAudioDeviceOffloadGraph(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
