/*
 * XREFs of ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140187710
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x14021AADC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021B14C (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Opened(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  IVRootDeliver::PnP *v3; // rdi
  const struct CONTAINER_ID *v4; // r9
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  ++*((_QWORD *)this + 157);
  v3 = (IVRootDeliver::PnP *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL));
  if ( isRootPartition((__int64)this) && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
  {
    v6 = 0;
    IVRootDeliver::PnP::SendRootPnp(v3, (struct DEVICEINFO *)2, (unsigned int)&v6, v4);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, IVRootDeliver::PnP *))(*(_QWORD *)this + 88LL))(this, v3);
}
