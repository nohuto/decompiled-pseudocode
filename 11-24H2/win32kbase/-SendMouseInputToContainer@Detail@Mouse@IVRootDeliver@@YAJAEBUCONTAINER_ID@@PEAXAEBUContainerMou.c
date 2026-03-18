/*
 * XREFs of ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x14021A7E0
 * Callers:
 *     ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x14021A6AC (-SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z.c)
 * Callees:
 *     IsTouchpadDevice @ 0x140048B4C (IsTouchpadDevice.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x140199058 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x140199A64 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140217880 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x14021AF80 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICOD.c)
 */

__int64 __fastcall IVRootDeliver::Mouse::Detail::SendMouseInputToContainer(
        IVRootDeliver::Mouse::Detail *this,
        const struct CONTAINER_ID *a2,
        struct ContainerMouseInput *a3,
        const struct ContainerMouseInput *a4)
{
  PVOID v6; // rbx
  const struct _UNICODE_STRING *v8; // r8
  int v9; // edi
  unsigned int v10; // esi
  char v11; // r14
  __int64 v12; // rdx
  int v13; // ebx
  struct _UNICODE_STRING v15; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v16[6]; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  v6 = 0LL;
  Object = 0LL;
  v15 = 0LL;
  CIVSerializer::CIVSerializer((__int64)v16, 4);
  v16[0] = &CIVGenericSerializer::`vftable';
  if ( v16[2] )
  {
    v10 = 0;
    v11 = *(_BYTE *)(*(_QWORD *)a3 + 32LL);
    if ( a2 )
    {
      v13 = RawInputManagerDeviceObjectResolveHandle((char *)a2, 3u, 0, &Object);
      if ( v13 < 0 )
      {
        v16[0] = &CIVGenericSerializer::`vftable';
        CIVSerializer::~CIVSerializer((CIVSerializer *)v16);
        return (unsigned int)v13;
      }
      v6 = Object;
      v15 = *(struct _UNICODE_STRING *)((char *)Object + 264);
      if ( v11 && IsTouchpadDevice(*((_QWORD *)Object + 9), v12) )
        v10 = 2;
    }
    else
    {
      v15.Length = 0;
    }
    LOBYTE(v8) = v11;
    v9 = IVRootDeliver::Mouse::Detail::SerializeContainerMouseInput(
           (IVRootDeliver::Mouse::Detail *)v16,
           &v15,
           v8,
           a3,
           *(const struct ContainerMouseInput **)&v15.Length);
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( v9 >= 0 )
      v9 = ivrIVSend((const struct CIVSerializer *)v16, v10, this);
  }
  else
  {
    v9 = -1073741801;
  }
  v16[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v16);
  return (unsigned int)v9;
}
