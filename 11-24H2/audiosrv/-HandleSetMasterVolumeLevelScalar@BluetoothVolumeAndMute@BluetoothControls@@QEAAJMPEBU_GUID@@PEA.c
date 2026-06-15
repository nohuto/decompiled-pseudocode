/*
 * XREFs of ?HandleSetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJMPEBU_GUID@@PEAH@Z @ 0x1800D4BDC
 * Callers:
 *     ?SetMasterVolumeLevelScalar@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800D7DE0 (-SetMasterVolumeLevelScalar@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18006521C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006C370 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?GetEffectiveVolumeTarget@BluetoothVolumeAndMute@BluetoothControls@@AEBAMUread_lock_required@wil@@@Z @ 0x1800D4498 (-GetEffectiveVolumeTarget@BluetoothVolumeAndMute@BluetoothControls@@AEBAMUread_lock_required@wil.c)
 *     ?ScheduleEventDrain@BluetoothVolumeAndMute@BluetoothControls@@AEAA_NUwrite_lock_required@wil@@@Z @ 0x1800D7744 (-ScheduleEventDrain@BluetoothVolumeAndMute@BluetoothControls@@AEAA_NUwrite_lock_required@wil@@@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolumeAndMute::HandleSetMasterVolumeLevelScalar(
        BluetoothControls::BluetoothVolumeAndMute *this,
        float a2,
        __m128i *a3,
        int *a4)
{
  bool v7; // bp
  RTL_SRWLOCK *v8; // rbx
  double EffectiveVolumeTarget; // xmm0_8
  bool v10; // zf
  __m128i v11; // xmm1
  char v12; // bl
  void *v13; // rdx
  _BYTE v15[20]; // [rsp+20h] [rbp-58h]
  _BYTE v16[20]; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  RTL_SRWLOCK *v18; // [rsp+40h] [rbp-38h] BYREF

  v7 = COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - 0.0) & _xmm) < 0.001;
  if ( a4 )
    *a4 = 0;
  v8 = (RTL_SRWLOCK *)((char *)this + 168);
  AcquireSRWLockExclusive((PSRWLOCK)this + 21);
  v18 = v8;
  EffectiveVolumeTarget = BluetoothControls::BluetoothVolumeAndMute::GetEffectiveVolumeTarget((__int64)this);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - *(float *)&EffectiveVolumeTarget) & _xmm) >= 0.001 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - 0.0) & _xmm) >= 0.001 )
    {
      *(float *)&v17 = a2;
      BYTE4(v17) = 1;
      *((_QWORD *)this + 22) = v17;
    }
    else
    {
      *((_BYTE *)this + 180) = 0;
    }
    *(float *)v15 = a2;
    if ( !a3 )
      a3 = (__m128i *)&stru_180195AF0;
    v10 = *((_BYTE *)this + 216) == 0;
    *(__m128i *)&v15[4] = *a3;
    v11 = _mm_srli_si128(*a3, 12);
    *(_OWORD *)((char *)this + 196) = *(_OWORD *)v15;
    *((_DWORD *)this + 53) = _mm_cvtsi128_si32(v11);
    if ( v10 )
      *((_BYTE *)this + 216) = 1;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&EffectiveVolumeTarget - 0.0) & _xmm) < 0.001 != v7 )
    {
      *(struct _GUID *)&v16[4] = stru_180195AF0;
      v10 = *((_BYTE *)this + 240) == 0;
      *(_DWORD *)v16 = v7;
      *(_OWORD *)((char *)this + 220) = *(_OWORD *)v16;
      *((_DWORD *)this + 59) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)stru_180195AF0, 12));
      if ( v10 )
        *((_BYTE *)this + 240) = 1;
    }
    v12 = BluetoothControls::BluetoothVolumeAndMute::ScheduleEventDrain(this);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v18);
    if ( v12 )
      wil::details::SetEvent(*(wil::details **)(*((_QWORD *)this + 20) + 120LL), v13);
  }
  else
  {
    if ( a4 )
      *a4 = 1;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v18);
  }
  return 0LL;
}
