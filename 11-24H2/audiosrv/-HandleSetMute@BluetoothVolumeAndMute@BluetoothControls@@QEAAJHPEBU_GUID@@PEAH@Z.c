/*
 * XREFs of ?HandleSetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D4DC0
 * Callers:
 *     ?SetMute@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D7FB0 (-SetMute@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18006521C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006C370 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?GetEffectiveVolumeTarget@BluetoothVolumeAndMute@BluetoothControls@@AEBAMUread_lock_required@wil@@@Z @ 0x1800D4498 (-GetEffectiveVolumeTarget@BluetoothVolumeAndMute@BluetoothControls@@AEBAMUread_lock_required@wil.c)
 *     ?ScheduleEventDrain@BluetoothVolumeAndMute@BluetoothControls@@AEAA_NUwrite_lock_required@wil@@@Z @ 0x1800D7744 (-ScheduleEventDrain@BluetoothVolumeAndMute@BluetoothControls@@AEAA_NUwrite_lock_required@wil@@@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolumeAndMute::HandleSetMute(
        BluetoothControls::BluetoothVolumeAndMute *this,
        int a2,
        __m128i *a3,
        int *a4)
{
  RTL_SRWLOCK *v8; // rbx
  int v9; // edx
  double EffectiveVolumeTarget; // xmm0_8
  float v11; // xmm2_4
  float v12; // xmm1_4
  bool v13; // zf
  __m128i v14; // xmm1
  char v15; // bl
  void *v16; // rdx
  __int64 v18; // [rsp+20h] [rbp-30h]
  _BYTE v19[20]; // [rsp+28h] [rbp-28h]
  _BYTE v20[20]; // [rsp+28h] [rbp-28h]
  RTL_SRWLOCK *v21; // [rsp+40h] [rbp-10h] BYREF

  if ( a4 )
    *a4 = 0;
  v8 = (RTL_SRWLOCK *)((char *)this + 168);
  AcquireSRWLockExclusive((PSRWLOCK)this + 21);
  v21 = v8;
  EffectiveVolumeTarget = BluetoothControls::BluetoothVolumeAndMute::GetEffectiveVolumeTarget((__int64)this);
  v11 = FLOAT_0_07;
  if ( a2 )
  {
    v12 = 0.0;
  }
  else if ( *((_BYTE *)this + 180) )
  {
    v12 = *((float *)this + 44);
  }
  else
  {
    v12 = FLOAT_0_07;
  }
  if ( a2 == v9 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - *(float *)&EffectiveVolumeTarget) & _xmm) < 0.001 )
  {
    if ( a4 )
      *a4 = 1;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
  }
  else
  {
    if ( a2 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&EffectiveVolumeTarget - 0.0) & _xmm) >= 0.001 )
        v11 = *(float *)&EffectiveVolumeTarget;
      *(float *)&v18 = v11;
      BYTE4(v18) = 1;
      *((_QWORD *)this + 22) = v18;
    }
    else
    {
      *(float *)&v18 = v12;
      BYTE4(v18) = 1;
      *((_QWORD *)this + 22) = v18;
    }
    v13 = *((_BYTE *)this + 216) == 0;
    *(float *)v19 = v12;
    *(struct _GUID *)&v19[4] = stru_180195AF0;
    *(_OWORD *)((char *)this + 196) = *(_OWORD *)v19;
    *((_DWORD *)this + 53) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)stru_180195AF0, 12));
    if ( v13 )
      *((_BYTE *)this + 216) = 1;
    *(_DWORD *)v20 = a2;
    if ( !a3 )
      a3 = (__m128i *)&stru_180195AF0;
    v13 = *((_BYTE *)this + 240) == 0;
    *(__m128i *)&v20[4] = *a3;
    v14 = _mm_srli_si128(*a3, 12);
    *(_OWORD *)((char *)this + 220) = *(_OWORD *)v20;
    *((_DWORD *)this + 59) = _mm_cvtsi128_si32(v14);
    if ( v13 )
      *((_BYTE *)this + 240) = 1;
    v15 = BluetoothControls::BluetoothVolumeAndMute::ScheduleEventDrain(this);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
    if ( v15 )
      wil::details::SetEvent(*(wil::details **)(*((_QWORD *)this + 20) + 120LL), v16);
  }
  return 0LL;
}
