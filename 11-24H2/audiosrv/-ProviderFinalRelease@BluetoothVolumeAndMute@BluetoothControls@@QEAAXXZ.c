/*
 * XREFs of ?ProviderFinalRelease@BluetoothVolumeAndMute@BluetoothControls@@QEAAXXZ @ 0x1800D5E38
 * Callers:
 *     ?ProviderFinalRelease@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ @ 0x1800D5F50 (-ProviderFinalRelease@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006C370 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800D1CAC (--$_Eqrange@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_trai.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1800D8E24 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 *     ?close_and_wait@operation_guard@wil@@QEAAXXZ @ 0x1800D97A4 (-close_and_wait@operation_guard@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BluetoothControls::BluetoothVolumeAndMute::ProviderFinalRelease(
        BluetoothControls::BluetoothVolumeAndMute *this)
{
  char v2; // al
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8[5]; // [rsp+30h] [rbp-28h] BYREF
  RTL_SRWLOCK *v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_BYTE *)this + 276);
  *((_BYTE *)this + 276) = 1;
  if ( !v2 )
  {
    wil::operation_guard::close_and_wait(*((wil::operation_guard **)this + 18));
    AcquireSRWLockExclusive((PSRWLOCK)this + 21);
    v9 = (RTL_SRWLOCK *)((char *)this + 168);
    v3 = *((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = 0LL;
    v11 = v3;
    v4 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = 0LL;
    v10 = v4;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 13);
    AcquireSRWLockExclusive(&stru_1801DBBC8);
    v9 = &stru_1801DBBC8;
    v7 = *(_OWORD *)std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>>>,0>>::_Eqrange<std::wstring>(
                      v5,
                      v8,
                      (__int64)this + 48);
    std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>>>,0>>::_Erase(
      v6,
      &v7);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  }
}
