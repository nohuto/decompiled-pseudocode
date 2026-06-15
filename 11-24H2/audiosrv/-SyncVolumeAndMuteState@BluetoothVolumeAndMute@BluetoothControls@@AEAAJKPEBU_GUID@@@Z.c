/*
 * XREFs of ?SyncVolumeAndMuteState@BluetoothVolumeAndMute@BluetoothControls@@AEAAJKPEBU_GUID@@@Z @ 0x1800D8148
 * Callers:
 *     ?OnMuteNotify@BluetoothVolumeAndMute@BluetoothControls@@QEAAJKPEBU_GUID@@@Z @ 0x1800D5BC0 (-OnMuteNotify@BluetoothVolumeAndMute@BluetoothControls@@QEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18006521C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006C370 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?ScheduleEventDrain@BluetoothVolumeAndMute@BluetoothControls@@AEAA_NUwrite_lock_required@wil@@@Z @ 0x1800D7744 (-ScheduleEventDrain@BluetoothVolumeAndMute@BluetoothControls@@AEAA_NUwrite_lock_required@wil@@@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolumeAndMute::SyncVolumeAndMuteState(
        BluetoothControls::BluetoothVolumeAndMute *this,
        int a2,
        const struct _GUID *a3)
{
  RTL_SRWLOCK *v3; // rbx
  bool v7; // zf
  char v8; // bl
  void *v9; // rdx
  RTL_SRWLOCK *v11; // [rsp+20h] [rbp-18h] BYREF

  v3 = (RTL_SRWLOCK *)((char *)this + 168);
  AcquireSRWLockExclusive((PSRWLOCK)this + 21);
  v11 = v3;
  *((_BYTE *)this + 244) = 1;
  if ( a3 )
  {
    v7 = *((_BYTE *)this + 268) == 0;
    *(struct _GUID *)((char *)this + 248) = *a3;
    *((_DWORD *)this + 66) = a2;
    if ( v7 )
      *((_BYTE *)this + 268) = 1;
  }
  v8 = BluetoothControls::BluetoothVolumeAndMute::ScheduleEventDrain((__int64)this);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  if ( v8 )
    wil::details::SetEvent(*(wil::details **)(*((_QWORD *)this + 20) + 120LL), v9);
  return 0LL;
}
