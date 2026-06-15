/*
 * XREFs of ?ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z @ 0x18007AA80
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005213C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     BluetoothControls::IsCaptureEndpoint @ 0x1800D52E0 (BluetoothControls--IsCaptureEndpoint.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50650673@@@details@wil@@QEAA_NXZ @ 0x1800D9630 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50650673@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BluetoothControls::ShouldUseBluetoothControls(
        BluetoothControls *this,
        struct IMMDevice *a2,
        bool *a3)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  char v9; // di
  char v10; // bl
  char v11; // si
  int IsCaptureEndpoint; // eax
  __int64 v13; // rdx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  PROPVARIANT v17[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+90h] [rbp+40h] BYREF

  v5 = *(_QWORD *)this;
  v21 = 0LL;
  v6 = (*(__int64 (__fastcall **)(BluetoothControls *, _QWORD, __int64 *))(v5 + 32))(this, 0LL, &v21);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v16 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(
           v21,
           &PKEY_Endpoint_CustomResourceManager,
           pvar);
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v8);
LABEL_5:
      PropVariantClear(pvar);
      goto LABEL_25;
    }
    v9 = 1;
    if ( LOWORD(pvar[0]) != 72
      || *(_QWORD *)pvar[1] != BLUETOOTH_AUDIO_RESOURCE_MANAGER
      || (v10 = 1, *((_QWORD *)pvar[1] + 1) != 0xED3D76C82C5CFE8AuLL) )
    {
      v10 = 0;
    }
    v11 = 0;
    v20 = 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_50650673>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_50650673>::GetImpl'::`2'::impl) )
    {
      if ( !v10 )
      {
        *(_OWORD *)v17 = 0LL;
        v18 = 0LL;
        IsCaptureEndpoint = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(
                              v21,
                              &PKEY_Endpoint_IsBluetooth,
                              v17);
        v7 = IsCaptureEndpoint;
        if ( IsCaptureEndpoint < 0 )
        {
          v13 = 53LL;
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
            (const char *)(unsigned int)IsCaptureEndpoint);
          PropVariantClear(v17);
          goto LABEL_5;
        }
        if ( LOWORD(v17[0]) == 11 && LOWORD(v17[1]) )
        {
          IsCaptureEndpoint = BluetoothControls::IsCaptureEndpoint(this, &v20);
          v7 = IsCaptureEndpoint;
          if ( IsCaptureEndpoint < 0 )
          {
            v13 = 57LL;
            goto LABEL_14;
          }
          v11 = v20;
        }
        PropVariantClear(v17);
        goto LABEL_22;
      }
    }
    else if ( !v10 )
    {
LABEL_22:
      if ( !v11 )
        v9 = 0;
    }
    LOBYTE(a2->lpVtbl) = v9;
    PropVariantClear(pvar);
    v7 = 0;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
    (const char *)(unsigned int)v6);
LABEL_25:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
  return v7;
}
