/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1401875A0
 * Callers:
 *     <none>
 * Callees:
 *     HMMarkObjectDestroy @ 0x140041E50 (HMMarkObjectDestroy.c)
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     HMRemoveHandleForObject @ 0x14016AC70 (HMRemoveHandleForObject.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x14021AADC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021B14C (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  IVRootDeliver::PnP **v2; // r9
  IVRootDeliver::PnP *v5; // rbx
  IVRootDeliver::PnP *v6; // rax
  bool v7; // bl
  __int64 v8; // rcx
  const struct CONTAINER_ID *v9; // r9
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = (IVRootDeliver::PnP **)*((_QWORD *)this + 155);
  v5 = (IVRootDeliver::PnP *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL));
  while ( 1 )
  {
    v6 = *v2;
    if ( !*v2 )
    {
      v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v7;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 69400),
          2,
          2,
          21,
          (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
          (char)a2);
      }
      return 0LL;
    }
    if ( v6 == v5 )
      break;
    v2 = (IVRootDeliver::PnP **)((char *)v6 + 56);
  }
  *v2 = *(IVRootDeliver::PnP **)((((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)) + 0x38);
  *(_QWORD *)((((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)) + 0x38) = 0LL;
  ObfDereferenceObject(a2);
  if ( isRootPartition(v8) && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
  {
    v15 = 0;
    IVRootDeliver::PnP::SendRootPnp(v5, (struct DEVICEINFO *)4, (unsigned int)&v15, v9);
  }
  if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, IVRootDeliver::PnP *))(*(_QWORD *)this + 104LL))(
         this,
         a2,
         v5)
    && (unsigned int)HMMarkObjectDestroy(v5) )
  {
    HMRemoveHandleForObject((int *)v5);
  }
  return 0LL;
}
