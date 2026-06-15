/*
 * XREFs of ?IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180090810
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x18008B5FC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWA.c)
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@HPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A3C60 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180076600 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(
        CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // r14d
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 (__fastcall **v22)(_QWORD, _QWORD, _QWORD); // rax
  int v23; // eax
  int KSFormatFromWFXFormat; // eax
  void *v25; // rbx
  _BYTE *v26; // rdx
  int v27; // eax
  unsigned int v28; // edi
  __int64 *v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  int v32[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  int v36; // [rsp+5Ch] [rbp-A4h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  int v38[2]; // [rsp+68h] [rbp-98h] BYREF
  PROPVARIANT v39[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h]
  PROPVARIANT pvar[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h]
  _DWORD v43[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v44[112]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  *(_QWORD *)v38 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, int *))(**((_QWORD **)this + 5) + 24LL))(
         *((_QWORD *)this + 5),
         &GUID_2b0711de_dab7_4610_a16f_d3383749b220,
         23LL,
         0LL,
         v38);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2399,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_46;
  }
  *(_OWORD *)pvar = 0LL;
  v42 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
         pvar);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 9119LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v7);
    PropVariantClear(pvar);
    goto LABEL_46;
  }
  if ( LOWORD(pvar[0]) != 19 )
  {
    v5 = -2147418113;
    v7 = 2147549183LL;
    v8 = 9120LL;
    goto LABEL_5;
  }
  v9 = (unsigned int)pvar[1];
  PropVariantClear(pvar);
  v30 = 0LL;
  v43[0] = 590439624;
  v43[1] = 1283267372;
  v43[2] = 1907779772;
  v10 = 104;
  v43[3] = 1730509416;
  v43[4] = 1;
  *(_OWORD *)v39 = 0LL;
  v40 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
          *((_QWORD *)this + 9),
          v43,
          v39);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 9130LL;
LABEL_10:
    v13 = (unsigned int)v11;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v13);
    PropVariantClear(v39);
LABEL_12:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
    goto LABEL_46;
  }
  if ( LOWORD(v39[0]) != 31 )
  {
    v5 = -2147418113;
    v13 = 2147549183LL;
    v12 = 9131LL;
    goto LABEL_11;
  }
  GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v30);
  v11 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, PROPVARIANT, __int64 **))GetDevice)(
          g_DeviceEnumerator,
          v39[1],
          &v30);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 9134LL;
    goto LABEL_10;
  }
  PropVariantClear(v39);
  *(_QWORD *)v32 = 0LL;
  v15 = *v30;
  *(_QWORD *)v32 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v15 + 24))(
          v30,
          &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
          1LL);
  v5 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23B3,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v16);
LABEL_19:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
    goto LABEL_12;
  }
  v31 = 0LL;
  v17 = **(_QWORD **)v32;
  v31 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v17 + 56))(*(_QWORD *)v32, v9, &v31);
  v5 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23B7,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v18);
LABEL_22:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
    goto LABEL_19;
  }
  v33 = 0LL;
  v19 = (**v31)(v31, &GUID_9c2c4058_23f5_41de_877a_df3af236a09e, &v33);
  v5 = v19;
  if ( v19 < 0 )
  {
    v20 = 9146LL;
LABEL_25:
    v21 = (unsigned int)v19;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v21);
LABEL_27:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
    goto LABEL_22;
  }
  v35 = 0;
  v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 24LL))(v33, &v35);
  v5 = v19;
  if ( v19 < 0 )
  {
    v20 = 9150LL;
    goto LABEL_25;
  }
  if ( v35 != 3 )
  {
    v5 = -2147418113;
    v21 = 2147549183LL;
    v20 = 9151LL;
    goto LABEL_26;
  }
  v34 = 0LL;
  v22 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v31;
  v34 = 0LL;
  v23 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, GUID *, __int64 *))v22[13])(
          v31,
          1LL,
          &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
          &v34);
  v5 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23C3,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v23);
LABEL_34:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
    goto LABEL_27;
  }
  pv = 0LL;
  KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a2, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
  v5 = KSFormatFromWFXFormat;
  if ( KSFormatFromWFXFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23CD,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)KSFormatFromWFXFormat);
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_34;
  }
  memset_0(v44, 0, 0x68uLL);
  v25 = pv;
  v26 = pv;
  if ( *(_DWORD *)pv >= 0x68u )
  {
    v10 = *(_DWORD *)pv;
  }
  else
  {
    memcpy_0(v44, pv, *(unsigned int *)pv);
    v26 = v44;
  }
  v36 = 0;
  v27 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, int *))(*(_QWORD *)v34 + 24LL))(v34, v26, v10, &v36);
  v28 = v27;
  if ( v27 >= 0 )
  {
    if ( v36 )
    {
      CoTaskMemFree(v25);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
      v5 = 0;
    }
    else
    {
      CoTaskMemFree(v25);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
      v5 = -2005139333;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23DF,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v27);
    CoTaskMemFree(v25);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
    v5 = v28;
  }
LABEL_46:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v38);
  return v5;
}
