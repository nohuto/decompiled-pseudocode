/*
 * XREFs of ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x180106130
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032190 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     AudioServerIsFormatSupported @ 0x180038EE0 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180076600 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x1801060BC (-FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z.c)
 *     ?SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x180107E08 (-SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z.c)
 *     ?SpdifSampleRateFlag@@YAKK@Z @ 0x18010833C (-SpdifSampleRateFlag@@YAKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetAcceptableSPDIFTypeForDevice(
        struct IMMDevice *a1,
        const struct tWAVEFORMATEX *a2,
        struct tWAVEFORMATEX **a3,
        int a4)
{
  struct KSDATAFORMAT_WAVEFORMATEX *v8; // rdi
  int v9; // ebx
  _DWORD *v10; // rbx
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  unsigned int v13; // eax
  int v14; // r8d
  WORD wBitsPerSample; // cx
  int v16; // eax
  unsigned int v17; // r11d
  int v18; // r11d
  unsigned int v19; // esi
  GUID *v20; // rdx
  unsigned int v21; // r10d
  __int64 *v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h] BYREF
  __int64 v26; // [rsp+50h] [rbp-20h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-18h] BYREF
  _DWORD *v28; // [rsp+68h] [rbp-8h]
  struct KSDATAFORMAT_WAVEFORMATEX *v29; // [rsp+A0h] [rbp+30h] BYREF

  v8 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v28 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v24);
  if ( v9 < 0 )
    goto LABEL_36;
  v9 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v24 + 40LL))(
         v24,
         &PKEY_Endpoint_SPDIFFormatSupport,
         pvar);
  if ( v9 < 0 )
    goto LABEL_36;
  if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) < 0x1C )
    goto LABEL_4;
  v10 = v28;
  v11 = v28[2];
  v12 = 16LL * v11;
  if ( v12 > 0xFFFFFFFF || (v13 = v12 + 12, v13 < 0xC) || LODWORD(pvar[1]) != v13 )
  {
    v9 = -2004287467;
    goto LABEL_36;
  }
  if ( (SpdifSampleRateFlag(a2->nSamplesPerSec) & *v10) == 0 )
    goto LABEL_4;
  wBitsPerSample = a2->wBitsPerSample;
  v16 = 8;
  switch ( wBitsPerSample )
  {
    case 8u:
      v16 = 1;
      break;
    case 0x10u:
      v16 = 2;
      break;
    case 0x18u:
      v16 = 4;
      break;
    default:
      if ( wBitsPerSample != 32 )
        v16 = v14;
      break;
  }
  if ( (v16 & v10[1]) == 0 )
    goto LABEL_4;
  v17 = v14;
  if ( !v11 )
    goto LABEL_4;
  while ( !(unsigned int)FormatHasSpecifiedSubtype(a2, (const struct _GUID *)&v10[4 * v17 + 3]) )
  {
    v17 = v18 + 1;
    if ( v17 >= v11 )
      goto LABEL_4;
  }
  v9 = CreateKSFormatFromWFXFormat(a2, &v29);
  if ( v9 < 0
    || (v23 = &v25,
        v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
               a1,
               &GUID_2b0711de_dab7_4610_a16f_d3383749b220,
               23LL),
        v9 < 0) )
  {
    v8 = v29;
    goto LABEL_36;
  }
  v19 = 0;
  v8 = v29;
  if ( !g_cCompressedPassThruFormats )
  {
LABEL_4:
    v9 = -2004287480;
    goto LABEL_36;
  }
  while ( 1 )
  {
    v20 = &g_rgCompressedPassThruFormats + v19;
    v8->DataFormat.SubFormat = *v20;
    if ( (unsigned int)SetFormatSubType(&v8->WaveFormatEx, v20) )
      break;
LABEL_30:
    if ( ++v19 >= v21 )
      goto LABEL_4;
  }
  LODWORD(v23) = a4;
  v9 = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, _QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)v25 + 88LL))(
         v25,
         v8,
         v8->DataFormat.FormatSize,
         0LL,
         v23,
         &v26);
  if ( v9 )
  {
    v21 = g_cCompressedPassThruFormats;
    goto LABEL_30;
  }
  if ( a3 )
    v9 = CloneWaveFormat(&v8->WaveFormatEx, a3);
LABEL_36:
  PropVariantClear(pvar);
  if ( v8 )
    CoTaskMemFree(v8);
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("GetAcceptableSPDIFTypeForDevice", 5349, v9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
  return (unsigned int)v9;
}
