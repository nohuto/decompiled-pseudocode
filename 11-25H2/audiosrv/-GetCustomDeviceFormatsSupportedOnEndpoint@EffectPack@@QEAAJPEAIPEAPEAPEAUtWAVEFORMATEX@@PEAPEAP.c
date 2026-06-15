/*
 * XREFs of ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18007E724
 * Callers:
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18007E680 (-GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@.c)
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180009E10 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180034CF8 (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180037BF8 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     MIDL_user_allocate @ 0x180042530 (MIDL_user_allocate.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18004B200 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18007EC48 (-GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall EffectPack::GetCustomDeviceFormatsSupportedOnEndpoint(
        EffectPack *this,
        unsigned int *a2,
        struct tWAVEFORMATEX ***a3,
        unsigned __int16 ***a4)
{
  unsigned int v7; // esi
  int Gfx; // eax
  unsigned int v9; // ebx
  int EndpointEffect; // eax
  __int64 v11; // rdx
  struct IAudioProcessingObject *v12; // rcx
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  void *v17; // rax
  void *v18; // rax
  unsigned int i; // r14d
  __int64 v20; // rax
  size_t v21; // rbx
  char *v22; // rcx
  int v23; // eax
  unsigned int v24; // edi
  __int64 v25; // rbx
  int (__fastcall *v26)(__int64, _QWORD, __int64 *); // rdi
  unsigned __int16 *v27; // rbx
  void *v28; // rcx
  unsigned int k; // edi
  unsigned int j; // ebx
  unsigned int m; // edi
  struct IAudioProcessingObject **v32; // [rsp+20h] [rbp-59h]
  __int64 v33; // [rsp+40h] [rbp-39h] BYREF
  struct IAudioProcessingObject *v34; // [rsp+48h] [rbp-31h] BYREF
  void *v35; // [rsp+50h] [rbp-29h] BYREF
  __int64 v36; // [rsp+58h] [rbp-21h] BYREF
  struct _GUID v37; // [rsp+60h] [rbp-19h] BYREF
  unsigned int *v38; // [rsp+70h] [rbp-9h]
  void **v39; // [rsp+78h] [rbp-1h]
  char v40; // [rsp+80h] [rbp+7h]
  unsigned int *v41; // [rsp+88h] [rbp+Fh]
  void **v42; // [rsp+90h] [rbp+17h]
  char v43; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned int v46; // [rsp+F0h] [rbp+77h] BYREF
  void *v47; // [rsp+F8h] [rbp+7Fh] BYREF

  v7 = 0;
  v34 = 0LL;
  *a4 = 0LL;
  *a3 = 0LL;
  *a2 = 0;
  if ( !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, 0LL) )
  {
    v34 = 0LL;
    Gfx = EffectPack::GetGfx(this, eHostProcessConnector, 0LL, &v34, (struct IAudioSystemEffects2 **)v32);
    v9 = Gfx;
    if ( Gfx < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2461,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)Gfx);
      if ( v34 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v34->lpVtbl->Release)(v34);
      return v9;
    }
LABEL_13:
    v12 = v34;
    if ( !v34 )
      return 0LL;
    goto LABEL_15;
  }
  v34 = 0LL;
  EndpointEffect = EffectPack::GetEndpointEffect(this, 0LL, 0, 0LL, &v34, 0LL);
  v9 = EndpointEffect;
  if ( EndpointEffect < 0 )
  {
    v11 = 9319LL;
    goto LABEL_12;
  }
  v12 = v34;
  if ( !v34 )
  {
    if ( !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, 0LL) )
      return 0LL;
    v34 = 0LL;
    v37 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    EndpointEffect = EffectPack::GetModeEffect((unsigned __int64)this, &v37, 0, 0, 0LL, &v34, 0LL);
    v9 = EndpointEffect;
    if ( EndpointEffect >= 0 )
      goto LABEL_13;
    v11 = 9325LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)EndpointEffect);
    goto LABEL_55;
  }
LABEL_15:
  v46 = 0;
  v33 = 0LL;
  ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v12->lpVtbl->QueryInterface)(
    v12,
    &GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097,
    &v33);
  if ( !v33 )
  {
LABEL_54:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
    v9 = 0;
    goto LABEL_55;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 24LL))(v33, &v46);
  v9 = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v16 = 9346LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v15);
    goto LABEL_19;
  }
  v17 = MIDL_user_allocate(8LL * v46);
  v47 = v17;
  if ( !v17 )
  {
    v9 = -2147024882;
    v15 = 2147942414LL;
    v16 = 9349LL;
    goto LABEL_18;
  }
  memset_0(v17, 0, 8LL * v46);
  v38 = &v46;
  v39 = &v47;
  v40 = 1;
  v18 = MIDL_user_allocate(8LL * v46);
  v35 = v18;
  if ( !v18 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2490,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    if ( v46 )
    {
      do
        operator delete(*((void **)v47 + v7++));
      while ( v7 < v46 );
    }
    goto LABEL_25;
  }
  memset_0(v18, 0, 8LL * v46);
  v41 = &v46;
  v42 = &v35;
  v43 = 1;
  for ( i = 0; ; ++i )
  {
    if ( i >= v46 )
    {
      *a2 = v46;
      *a3 = (struct tWAVEFORMATEX **)v47;
      *a4 = (unsigned __int16 **)v35;
      goto LABEL_54;
    }
    *(_QWORD *)&v37.Data1 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, struct _GUID *))(*(_QWORD *)v33 + 40LL))(v33, i, &v37) < 0 )
      continue;
    v20 = -1LL;
    do
      ++v20;
    while ( *(_WORD *)(*(_QWORD *)&v37.Data1 + 2 * v20) );
    v21 = 2 * v20 + 2;
    *((_QWORD *)v35 + i) = MIDL_user_allocate(v21);
    v22 = (char *)*((_QWORD *)v35 + i);
    if ( !v22 )
      break;
    v23 = StringCbCopyW(v22, v21, *(char **)&v37.Data1);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24A5,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v23);
      for ( j = 0; j < v46; ++j )
        operator delete(*((void **)v35 + j));
      operator delete(v35);
      if ( v46 )
      {
        do
          operator delete(*((void **)v47 + v7++));
        while ( v7 < v46 );
      }
      operator delete(v47);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
      v9 = v24;
      goto LABEL_55;
    }
    v36 = 0LL;
    v25 = v33;
    v26 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v33 + 32LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v36);
    if ( v26(v25, i, &v36) >= 0 )
    {
      v27 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 40LL))(v36);
      *((_QWORD *)v47 + i) = MIDL_user_allocate(v27[8] + 18LL);
      v28 = (void *)*((_QWORD *)v47 + i);
      if ( !v28 )
      {
        v9 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x24B0,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
        for ( k = 0; k < v46; ++k )
          operator delete(*((void **)v35 + k));
        operator delete(v35);
        if ( v46 )
        {
          do
            operator delete(*((void **)v47 + v7++));
          while ( v7 < v46 );
        }
        goto LABEL_25;
      }
      memcpy_0(v28, v27, v27[8] + 18LL);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
  }
  v9 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24A3,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007000ELL);
  for ( m = 0; m < v46; ++m )
    operator delete(*((void **)v35 + m));
  operator delete(v35);
  if ( v46 )
  {
    do
      operator delete(*((void **)v47 + v7++));
    while ( v7 < v46 );
  }
LABEL_25:
  operator delete(v47);
LABEL_19:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
LABEL_55:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
  return v9;
}
