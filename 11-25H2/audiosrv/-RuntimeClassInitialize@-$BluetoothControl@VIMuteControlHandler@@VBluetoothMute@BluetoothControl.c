/*
 * XREFs of ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800D134C
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800A3514 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@A.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180060820 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??4?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteControlHandler@@@Z @ 0x1800A4454 (--4-$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteContro.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800CFBC0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothMute@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800D0030 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNo.c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800D088C (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800D0E5C (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAU.c)
 *     ?TryGetResourceManager@BluetoothControls@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800D1EB0 (-TryGetResourceManager@BluetoothControls@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::RuntimeClassInitialize(
        struct IControlChangeNotify *a1,
        struct IMMDevice *a2,
        __int64 a3)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v7; // eax
  int v8; // eax
  struct IPartsList **v9; // r8
  __int64 (__fastcall *v10)(__int64, _QWORD *, struct IControlChangeNotifyVtbl **); // r9
  __int64 v11; // r10
  int v12; // eax
  int v13; // eax
  struct IMuteControlHandler *RealControl; // rax
  const char *v15; // r9
  __int64 result; // rax
  int v17; // [rsp+20h] [rbp-98h]
  __int128 v18; // [rsp+28h] [rbp-90h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v20; // [rsp+48h] [rbp-70h]
  struct IControlChangeNotify *v21; // [rsp+50h] [rbp-68h]
  char v22; // [rsp+58h] [rbp-60h]
  _QWORD v23[2]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v24; // [rsp+70h] [rbp-48h]
  _QWORD *v25; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  struct IControlChangeNotifyVtbl *v27; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v28; // [rsp+D0h] [rbp+18h]
  __int64 v29; // [rsp+D8h] [rbp+20h] BYREF

  v28 = a3;
  LOBYTE(a1[14].lpVtbl) = 1;
  try
  {
    BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::CommonInitialize(
      (__int64)a1,
      (__int64 *)a2);
    *(_OWORD *)pvar = 0LL;
    v20 = 0LL;
    lpVtbl = a2->lpVtbl;
    v29 = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))lpVtbl->OpenPropertyStore)(a2, 0LL, &v29);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        157LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v7,
        v17);
    v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v29 + 40LL))(
           v29,
           &PKEY_Endpoint_LinkedBluetoothEndpoint,
           pvar);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        158LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v8,
        v17);
    if ( (int)BluetoothControls::TryGetResourceManager(&a1[6], &a1[17]) >= 0 )
    {
      LODWORD(v27) = 0;
      v17 = (int)a1;
      std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v18, &a1[19].lpVtbl);
      v23[0] = &std::_Func_impl_no_alloc<_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_,void,bool>::`vftable';
      v23[1] = a1;
      v24 = v18;
      v18 = 0LL;
      v25 = v23;
      v12 = v10(v11, v23, &v27);
      if ( v12 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          169LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
          (const char *)(unsigned int)v12,
          (int)a1);
      BYTE4(v27) = 1;
      a1[18].lpVtbl = v27;
    }
    v21 = a1;
    v22 = 1;
    if ( LOWORD(pvar[0]) == 31 )
    {
      v27 = (struct IControlChangeNotifyVtbl *)a1;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&a1[13]);
      v13 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,BluetoothControls::BluetoothMute,unsigned short * &,BluetoothControls::BluetoothMute *,IControlChangeNotify * &>((struct IControlChangeNotify **)&a1[13]);
      if ( v13 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          184LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
          (const char *)(unsigned int)v13,
          v17);
    }
    LOBYTE(v18) = 1;
    RealControl = BluetoothControls::BluetoothMute::MakeRealControl(a2, a1, v9);
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)&a1[15], (__int64)RealControl);
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)&a1[16], a3);
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v27) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xCC,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
                     v15);
    return (unsigned int)v27;
  }
  return result;
}
