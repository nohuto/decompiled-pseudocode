/*
 * XREFs of ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01F2D30
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0066298 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     VirtualizeFullKeyboardStates @ 0x1C01E93D0 (VirtualizeFullKeyboardStates.c)
 * Callees:
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E95AC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE864 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1C01F37DC (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSeriali.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FD078 (--1CIVSerializer@@UEAA@XZ.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates(
        IVRootDeliver::Keyboard::Detail *this,
        const struct CONTAINER_ID *a2)
{
  struct CIVGenericSerializer *v3; // rdx
  int v4; // ebx
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  CIVGenericSerializer::CIVGenericSerializer(v6);
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
