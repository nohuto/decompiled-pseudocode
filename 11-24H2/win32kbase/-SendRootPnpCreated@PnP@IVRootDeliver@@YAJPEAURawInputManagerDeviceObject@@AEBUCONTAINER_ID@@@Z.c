/*
 * XREFs of ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x14021AC00
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1401874A0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x140217214 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x14021AADC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x140199058 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x140199A64 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x140216224 (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerial.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x1402165F4 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSeri.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x14021AAB0 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1402207AC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnpCreated(
        IVRootDeliver::PnP *this,
        struct RawInputManagerDeviceObject *a2,
        const struct CONTAINER_ID *a3)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  char *v6; // rcx
  PVOID v7; // rdi
  int v8; // ebx
  const struct CONTAINER_ID *v9; // r9
  struct _UNICODE_STRING v10; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD *v12; // [rsp+40h] [rbp-20h]
  char *v13; // [rsp+80h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = ((unsigned __int64)this + 72) & -(__int64)(this != 0LL);
  if ( *(_DWORD *)(v4 + 0x30) > 2u )
    return 0LL;
  v6 = *(char **)((((unsigned __int64)this + 72) & -(__int64)(this != 0LL)) + 0x530);
  v7 = 0LL;
  v13 = 0LL;
  if ( v6 )
  {
    result = RawInputManagerDeviceObjectResolveHandle(v6, 3u, 1, (PVOID *)&v13);
    if ( (int)result < 0 )
      return result;
    v7 = v13;
    v10 = *(struct _UNICODE_STRING *)(v13 + 264);
  }
  CIVSerializer::CIVSerializer((__int64)v11, 0);
  v11[0] = &CIVGenericSerializer::`vftable';
  if ( v12 )
  {
    v8 = IVMeasureRimDevForIVPnpCreatePacket((struct RIMDEV *)v4, &v10, (struct CIVPnPCreateSerializer *)v11);
    if ( v8 >= 0 )
    {
      v8 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v11);
      if ( v8 >= 0 )
      {
        v8 = IVSerializeRimDevForIVPnpCreatePacket((struct RIMDEV *)v4, &v10, (struct CIVPnPCreateSerializer *)v11);
        if ( v8 >= 0 )
        {
          *v12 = 1;
          v8 = IVRootDeliver::PnP::Detail::SendPnP(
                 (IVRootDeliver::PnP::Detail *)v11,
                 (const struct CIVSerializer *)*(unsigned int *)(v4 + 48),
                 (__int64)a2,
                 v9);
        }
      }
    }
  }
  else
  {
    v8 = -1073741801;
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  v11[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v11);
  return (unsigned int)v8;
}
