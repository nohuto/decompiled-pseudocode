/*
 * XREFs of ?SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D1D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18006209C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180077748 (-GetTargetedControl@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007E518 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800D24A0 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BluetoothControls::BluetoothMute::SetMute(
        RTL_SRWLOCK *this,
        unsigned int a2,
        const struct _GUID *a3,
        int *a4)
{
  RTL_SRWLOCK *v4; // rsi
  bool v9; // zf
  RTL_SRWLOCK *v10; // rbx
  char v11; // bp
  _QWORD *TargetedControl; // rax
  int v13; // edi
  RTL_SRWLOCK *v15; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  RTL_SRWLOCK *v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = this + 21;
  AcquireSRWLockShared(this + 21);
  v9 = BYTE4(this[22].Ptr) == 0;
  v10 = this + 22;
  v17 = v4;
  if ( v9 )
    goto LABEL_6;
  if ( !BYTE4(this[22].Ptr) )
    std::_Throw_bad_optional_access();
  if ( (a2 != 0) != (LODWORD(v10->Ptr) != 0) )
LABEL_6:
    v11 = 1;
  else
    v11 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
  if ( v11 )
  {
    TargetedControl = BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::GetTargetedControl(
                        (__int64)this,
                        &v17);
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, int *))(*(_QWORD *)*TargetedControl + 72LL))(
            *TargetedControl,
            a2,
            a3,
            a4);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x230,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
    AcquireSRWLockExclusive(v4);
    LODWORD(v17) = a2;
    BYTE4(v17) = 1;
    v10->Ptr = v17;
    v15 = v4;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
  }
  else if ( a4 )
  {
    *a4 = 1;
  }
  return 0LL;
}
