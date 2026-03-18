/*
 * XREFs of ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x14021A530
 * Callers:
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x14021B0C4 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x140199058 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x140199A64 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140217880 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x14021B01C (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSeriali.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates(
        IVRootDeliver::Keyboard::Detail *this,
        const struct CONTAINER_ID *a2)
{
  struct CIVGenericSerializer *v3; // rdx
  int v4; // ebx
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  CIVSerializer::CIVSerializer((__int64)v6, 7);
  v6[0] = &CIVGenericSerializer::`vftable';
  if ( v6[2] )
  {
    v4 = IVRootDeliver::Keyboard::Detail::SerializeFullKeyboardStatesForContainer(
           (IVRootDeliver::Keyboard::Detail *)v6,
           v3);
    if ( v4 >= 0 )
      v4 = ivrIVSend((const struct CIVSerializer *)v6, 1u, this);
  }
  else
  {
    v4 = -1073741801;
  }
  v6[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v6);
  return (unsigned int)v4;
}
