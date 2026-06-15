/*
 * XREFs of ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800D2FD8
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D6A7C (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothMute@2@PEAUIControlChangeNotify@@@Z @ 0x1800D6DA8 (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@Blu_ea_1800D6DA8.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D6EA4 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothVolume@2@PEAUIControlChangeNotify@@@Z @ 0x1800D71D0 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume_ea_1800D71D0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18001E120 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_18001E120.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A1504 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D0C70 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::CommonInitialize(
        __int64 a1,
        __int64 *a2)
{
  __int64 (__fastcall *v4)(__int64 *, _WORD **); // rbx
  int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+20h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  int v19[2]; // [rsp+38h] [rbp-28h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v23; // [rsp+98h] [rbp+38h] BYREF
  _WORD *v24; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF

  v24 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64 *, _WORD **))(*a2 + 40);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v24,
    0LL);
  v5 = v4(a2, &v24);
  if ( v5 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      297LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v5,
      v17);
  v6 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( v24[v7] );
  std::wstring::assign(a1 + 48, (__int64)v24, v7);
  v8 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v8 > 4u )
  {
    v23 = *(unsigned __int8 *)(a1 + 112);
    *(_QWORD *)v19 = v24;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v8,
      byte_1801AB1F2,
      v9,
      v10,
      (const WCHAR **)v19,
      (__int64)&v23);
  }
  v18 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v18);
  v11 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))*a2)(
          a2,
          &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
          &v18);
  if ( v11 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      307LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v11,
      v17);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, a1 + 80);
  if ( v12 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      308LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v12,
      v17);
  *(_OWORD *)pvar = 0LL;
  v21 = 0LL;
  v13 = *a2;
  v25 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v13 + 32))(a2, 0LL, &v25);
  if ( v14 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      312LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v14,
      v17);
  v15 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v25 + 40LL))(
          v25,
          &PKEY_Device_FriendlyName,
          pvar);
  if ( v15 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      314LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v15,
      v17);
  if ( LOWORD(pvar[0]) == 31 )
  {
    do
      ++v6;
    while ( *((_WORD *)pvar[1] + v6) );
    std::wstring::assign(a1 + 16, (__int64)pvar[1], v6);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v25 + 40LL))(
          v25,
          &PKEY_Endpoint_CustomResourceManagerContext,
          pvar);
  if ( v16 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      320LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v16,
      v17);
  if ( LOWORD(pvar[0]) == 72 )
    *(_OWORD *)(a1 + 84) = *(_OWORD *)pvar[1];
  PropVariantClear(pvar);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v24);
}
