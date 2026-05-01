/*
 * XREFs of ?IsGripperVisible@TouchEdgeGripperHost@@QEAA_NXZ @ 0x180595A90
 * Callers:
 *     ?IsTouchEdgeGripperVisible@TouchEdgeGestureManager@@UEAA_NXZ @ 0x18058D090 (-IsTouchEdgeGripperVisible@TouchEdgeGestureManager@@UEAA_NXZ.c)
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18058D2A8 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$IsGripperVisible@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x180594800 (--$IsGripperVisible@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 */

bool __fastcall TouchEdgeGripperHost::IsGripperVisible(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = this;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v4, this + 29);
  LOBYTE(v1) = v1[7].Ptr != 0LL;
  v3 = (char)v1;
  TouchEdgeGestureTelemetry::IsGripperVisible<bool &>(&v3);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v4);
  return (char)v1;
}
