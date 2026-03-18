/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1401874A0
 * Callers:
 *     _lambda_65e0d2d98340653a56fe7d74fa289e35_::operator() @ 0x14020B8D0 (_lambda_65e0d2d98340653a56fe7d74fa289e35_--operator().c)
 * Callees:
 *     HMMarkObjectDestroy @ 0x140041E50 (HMMarkObjectDestroy.c)
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     HMCreateHandleForObject @ 0x140062FB0 (HMCreateHandleForObject.c)
 *     RawInputManagerDeviceObjectReference @ 0x140063B80 (RawInputManagerDeviceObjectReference.c)
 *     HMRemoveHandleForObject @ 0x14016AC70 (HMRemoveHandleForObject.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x14021AC00 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021B14C (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  const struct CONTAINER_ID *v8; // r8
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v5 = HMCreateHandleForObject((_QWORD *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)), 0x13u);
  v6 = v5;
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, __int64))(*(_QWORD *)this + 80LL))(
           this,
           a2,
           v5) )
    {
      *(_QWORD *)(v6 + 56) = **((_QWORD **)this + 155);
      **((_QWORD **)this + 155) = v6;
      RawInputManagerDeviceObjectReference(a2);
      if ( isRootPartition(v7) && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*((_QWORD *)a2 + 49) + 40LL) )
        {
          v10 = 0;
          IVRootDeliver::PnP::SendRootPnpCreated(a2, (struct RawInputManagerDeviceObject *)&v10, v8);
        }
        else
        {
          *((_DWORD *)a2 + 60) |= 0x80000000;
        }
      }
      return 1;
    }
    else
    {
      HMMarkObjectDestroy((struct _HEAD *)v6);
      HMRemoveHandleForObject((int *)v6);
    }
  }
  return v4;
}
