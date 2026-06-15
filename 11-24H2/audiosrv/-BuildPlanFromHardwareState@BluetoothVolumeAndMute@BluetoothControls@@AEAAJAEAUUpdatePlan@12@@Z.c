/*
 * XREFs of ?BuildPlanFromHardwareState@BluetoothVolumeAndMute@BluetoothControls@@AEAAJAEAUUpdatePlan@12@@Z @ 0x1800D2C94
 * Callers:
 *     ?DrainPendingRequests@BluetoothVolumeAndMute@BluetoothControls@@AEAAJXZ @ 0x1800D33BC (-DrainPendingRequests@BluetoothVolumeAndMute@BluetoothControls@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006C370 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D83DC (-TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIMute.c)
 *     ?TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D846C (-TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIVo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BluetoothControls::BluetoothVolumeAndMute::BuildPlanFromHardwareState(
        RTL_SRWLOCK *this,
        struct BluetoothControls::BluetoothVolumeAndMute::UpdatePlan *a2)
{
  int TargetedMuteControl; // eax
  unsigned int v5; // ebx
  int TargetedVolumeControl; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  float v10; // xmm0_4
  bool v11; // r14
  int v12; // eax
  float v13; // xmm0_4
  bool v14; // zf
  float v15; // xmm0_4
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  RTL_SRWLOCK *v18; // [rsp+28h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  float v20[6]; // [rsp+38h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v22; // [rsp+A0h] [rbp+40h] BYREF
  float v23; // [rsp+A8h] [rbp+48h] BYREF

  v19 = 0LL;
  TargetedMuteControl = BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedMuteControl(this, &v19);
  v5 = TargetedMuteControl;
  if ( TargetedMuteControl >= 0 )
  {
    v17 = 0LL;
    TargetedVolumeControl = BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedVolumeControl(this, &v17);
    v5 = TargetedVolumeControl;
    if ( TargetedVolumeControl < 0 )
    {
      v7 = 1715LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)TargetedVolumeControl);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
      goto LABEL_40;
    }
    v22 = 0;
    v8 = v19;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19);
    TargetedVolumeControl = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 96LL))(v8, &v22);
    v5 = TargetedVolumeControl;
    if ( TargetedVolumeControl < 0 )
    {
      v7 = 1719LL;
      goto LABEL_5;
    }
    v9 = v17;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 88LL))(v17);
    v23 = 0.0;
    TargetedVolumeControl = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v9 + 136LL))(v9, &v23);
    v5 = TargetedVolumeControl;
    if ( TargetedVolumeControl < 0 )
    {
      v7 = 1723LL;
      goto LABEL_5;
    }
    LODWORD(v10) = COERCE_UNSIGNED_INT(v23 - 0.0) & _xmm;
    v11 = v10 < 0.001;
    v18 = (RTL_SRWLOCK *)__PAIR64__(v22, LODWORD(v23));
    *((_QWORD *)a2 + 6) = __PAIR64__(v22, LODWORD(v23));
    if ( !*((_BYTE *)a2 + 56) )
      *((_BYTE *)a2 + 56) = 1;
    AcquireSRWLockExclusive(this + 21);
    v18 = this + 21;
    v12 = 0;
    if ( BYTE1(this[24].Ptr) )
    {
      if ( LOBYTE(this[24].Ptr) )
      {
        if ( !v22 )
          v12 = 2;
      }
      else
      {
        v12 = v22 != 0;
      }
    }
    if ( v10 >= 0.001 )
      v13 = 0.0;
    else
      v13 = FLOAT_1_0;
    if ( BYTE4(this[23].Ptr) )
      v13 = *(float *)&this[23].Ptr;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 - 0.0) & _xmm) < 0.001 )
    {
      if ( !v11 )
      {
        v15 = v23;
        goto LABEL_34;
      }
    }
    else if ( v11 )
    {
LABEL_24:
      v20[0] = 0.0;
      *(struct _GUID *)&v20[1] = stru_180195AF0;
      *(_OWORD *)a2 = *(_OWORD *)v20;
      v14 = *((_BYTE *)a2 + 20) == 0;
      *((_DWORD *)a2 + 4) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)stru_180195AF0, 12));
      if ( v14 )
        *((_BYTE *)a2 + 20) = 1;
      LODWORD(v20[0]) = 1;
LABEL_37:
      *(struct _GUID *)&v20[1] = stru_180195AF0;
      *(_OWORD *)((char *)a2 + 24) = *(_OWORD *)v20;
      *((_DWORD *)a2 + 10) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)stru_180195AF0, 12));
      if ( !*((_BYTE *)a2 + 44) )
        *((_BYTE *)a2 + 44) = 1;
      goto LABEL_39;
    }
    if ( v12 == 1 )
      goto LABEL_24;
    if ( v12 != 2 )
    {
LABEL_39:
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v18);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
      v5 = 0;
      goto LABEL_40;
    }
    if ( BYTE4(this[22].Ptr) )
      v15 = *(float *)&this[22].Ptr;
    else
      v15 = FLOAT_0_07;
LABEL_34:
    v20[0] = v15;
    *(struct _GUID *)&v20[1] = stru_180195AF0;
    *(_OWORD *)a2 = *(_OWORD *)v20;
    v14 = *((_BYTE *)a2 + 20) == 0;
    *((_DWORD *)a2 + 4) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)stru_180195AF0, 12));
    if ( v14 )
      *((_BYTE *)a2 + 20) = 1;
    v20[0] = 0.0;
    goto LABEL_37;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6B0,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
    (const char *)(unsigned int)TargetedMuteControl);
LABEL_40:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
  return v5;
}
