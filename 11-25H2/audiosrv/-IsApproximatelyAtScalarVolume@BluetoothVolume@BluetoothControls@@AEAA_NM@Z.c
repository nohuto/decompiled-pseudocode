/*
 * XREFs of ?IsApproximatelyAtScalarVolume@BluetoothVolume@BluetoothControls@@AEAA_NM@Z @ 0x1800D0D80
 * Callers:
 *     ?SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800D1C60 (-SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18006209C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _o_roundf_0 @ 0x1800A8B70 (_o_roundf_0.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800D24A0 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall BluetoothControls::BluetoothVolume::IsApproximatelyAtScalarVolume(RTL_SRWLOCK *this, float a2)
{
  RTL_SRWLOCK *v3; // rbx
  bool v4; // bl
  float v5; // xmm0_4
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = this + 21;
  AcquireSRWLockShared(this + 21);
  v7 = v3;
  v4 = 0;
  if ( BYTE4(this[22].Ptr) )
  {
    o_roundf_0();
    if ( !BYTE4(this[22].Ptr) )
      std::_Throw_bad_optional_access();
    v5 = *(float *)&this[22].Ptr * 100.0;
    o_roundf_0();
    v4 = (float)(a2 * 100.0) == v5;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v7);
  return v4;
}
