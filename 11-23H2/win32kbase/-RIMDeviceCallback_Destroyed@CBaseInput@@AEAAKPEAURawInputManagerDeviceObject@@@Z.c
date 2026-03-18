/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DD480
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     HMMarkObjectDestroy @ 0x1C0096FE0 (HMMarkObjectDestroy.c)
 *     HMRemoveHandleForObject @ 0x1C00B3CF0 (HMRemoveHandleForObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F32B0 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F3884 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  IVRootDeliver::PnP **v2; // r8
  IVRootDeliver::PnP *v3; // rbx
  struct RawInputManagerDeviceObject *v4; // rsi
  IVRootDeliver::PnP *v6; // rax
  const struct CONTAINER_ID *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = (IVRootDeliver::PnP **)*((_QWORD *)this + 158);
  v3 = (struct RawInputManagerDeviceObject *)((char *)a2 + 72);
  v4 = a2;
  while ( 1 )
  {
    v6 = *v2;
    if ( !*v2 )
    {
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)v2,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          2,
          21,
          (__int64)&WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids,
          (char)v4);
      }
      return 0LL;
    }
    if ( v6 == v3 )
      break;
    v2 = (IVRootDeliver::PnP **)((char *)v6 + 56);
  }
  *v2 = (IVRootDeliver::PnP *)*((_QWORD *)a2 + 16);
  *((_QWORD *)a2 + 16) = 0LL;
  ObfDereferenceObject(a2);
  if ( isRootPartition() && CIVChannel::ContainerConnected(*((_DWORD *)this + 324)) )
  {
    v15 = 0;
    IVRootDeliver::PnP::SendRootPnp(v3, (struct DEVICEINFO *)4, (unsigned int)&v15, v7);
  }
  if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, IVRootDeliver::PnP *))(*(_QWORD *)this + 104LL))(
         this,
         v4,
         v3)
    && (unsigned int)HMMarkObjectDestroy(v3, v8, v9, v10) )
  {
    HMRemoveHandleForObject((int *)v3, v11, v12, v13);
  }
  return 0LL;
}
