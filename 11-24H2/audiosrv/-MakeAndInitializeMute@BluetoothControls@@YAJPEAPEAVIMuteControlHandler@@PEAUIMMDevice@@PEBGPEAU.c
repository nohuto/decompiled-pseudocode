/*
 * XREFs of ?MakeAndInitializeMute@BluetoothControls@@YAJPEAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D54D8
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005213C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Z @ 0x1800D14CC (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@A.c)
 *     ??$MakeAndInitialize@VCBluetoothMuteInterceptor@BluetoothControls@@VIMuteControlHandler@@PEAVBluetoothVolumeAndMute@2@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@$$QEAPEAVBluetoothVolumeAndMute@BluetoothControls@@@Z @ 0x1800D1880 (--$MakeAndInitialize@VCBluetoothMuteInterceptor@BluetoothControls@@VIMuteControlHandler@@PEAVBlu.c)
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     BluetoothControls::GetOrCreateBluetoothVolumeAndMute @ 0x1800D466C (BluetoothControls--GetOrCreateBluetoothVolumeAndMute.c)
 *     BluetoothControls::IsCaptureEndpoint @ 0x1800D52E0 (BluetoothControls--IsCaptureEndpoint.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50650673@@@details@wil@@QEAA_NXZ @ 0x1800D9630 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50650673@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothControls::MakeAndInitializeMute(
        BluetoothControls *this,
        struct IMMDevice *a2,
        struct IMMDevice *a3,
        struct IControlChangeNotify *a4)
{
  __int64 v8; // rdx
  int IsCaptureEndpoint; // eax
  unsigned int v11; // edi
  int v12; // eax
  bool v13; // [rsp+20h] [rbp-20h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-18h] BYREF
  volatile signed __int32 *v15; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IMMDevice *v17; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int16 *v18; // [rsp+80h] [rbp+40h] BYREF
  struct IControlChangeNotify *v19; // [rsp+88h] [rbp+48h]

  v19 = a4;
  v18 = (unsigned __int16 *)a3;
  v17 = a2;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_50650673>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_50650673>::GetImpl'::`2'::impl) )
  {
    if ( !this )
    {
      v8 = 2119LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)0x80004003LL);
      return 2147500035LL;
    }
    *(_QWORD *)this = 0LL;
    if ( !a2 )
    {
      v8 = 2122LL;
      goto LABEL_4;
    }
    if ( !a4 )
    {
      v8 = 2123LL;
      goto LABEL_4;
    }
    v13 = 0;
    IsCaptureEndpoint = BluetoothControls::IsCaptureEndpoint(a2, &v13);
    v11 = IsCaptureEndpoint;
    if ( IsCaptureEndpoint < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)IsCaptureEndpoint);
      return v11;
    }
    if ( v13 )
    {
      v14 = 0LL;
      v12 = BluetoothControls::GetOrCreateBluetoothVolumeAndMute(a2, (const unsigned __int16 *)a3, a4, &v14);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v15 = v14;
        v11 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::CBluetoothMuteInterceptor,IMuteControlHandler,BluetoothControls::BluetoothVolumeAndMute *>(
                this,
                &v15);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x852,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
          (const char *)(unsigned int)v12);
      }
      wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>(&v14);
      return v11;
    }
  }
  return Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,IMuteControlHandler,IMMDevice * &,unsigned short const * &,IControlChangeNotify * &>(
           this,
           &v17,
           &v18);
}
