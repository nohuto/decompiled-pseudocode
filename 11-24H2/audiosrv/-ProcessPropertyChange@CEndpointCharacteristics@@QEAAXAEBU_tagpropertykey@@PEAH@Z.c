/*
 * XREFs of ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001180C
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180010BFC (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180107108 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180031974 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x180046E74 (-MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x18005374C (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800A4610 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800A4678 (_Init_thread_header.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ @ 0x180133994 (-DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ.c)
 *     ?UpdateAPOEnableStatus@EffectPack@@QEAAJXZ @ 0x180138C40 (-UpdateAPOEnableStatus@EffectPack@@QEAAJXZ.c)
 *     ?IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z @ 0x18013DDD0 (-IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x18013DE0C (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CEndpointCharacteristics::ProcessPropertyChange(
        CEndpointCharacteristics *this,
        const struct _tagpropertykey *a2,
        int *a3)
{
  int i; // r9d
  int v7; // r9d
  int updated; // eax
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // esi
  int *v12; // r14
  int v13; // [rsp+20h] [rbp-A9h]
  int v14; // [rsp+20h] [rbp-A9h]
  _BYTE v15[8]; // [rsp+30h] [rbp-99h] BYREF
  struct tWAVEFORMATEX *v16; // [rsp+38h] [rbp-91h] BYREF
  struct tWAVEFORMATEX **v17; // [rsp+40h] [rbp-89h] BYREF
  struct tWAVEFORMATEX *v18; // [rsp+48h] [rbp-81h] BYREF
  char v19; // [rsp+50h] [rbp-79h]
  __int128 v20; // [rsp+60h] [rbp-69h] BYREF
  int v21; // [rsp+70h] [rbp-59h]
  __int128 v22; // [rsp+74h] [rbp-55h]
  int v23; // [rsp+84h] [rbp-45h]
  __int128 v24; // [rsp+88h] [rbp-41h]
  int v25; // [rsp+98h] [rbp-31h]
  __int128 v26; // [rsp+9Ch] [rbp-2Dh]
  int v27; // [rsp+ACh] [rbp-1Dh]
  __int128 v28; // [rsp+B0h] [rbp-19h]
  int v29; // [rsp+C0h] [rbp-9h]
  __int128 v30; // [rsp+C4h] [rbp-5h]
  int v31; // [rsp+D4h] [rbp+Bh]
  PROPERTYKEY v32; // [rsp+D8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  *a3 = 0;
  v20 = xmmword_1801DA794;
  v21 = dword_1801DA7A4;
  v22 = xmmword_1801DA7A8;
  v23 = dword_1801DA7B8;
  v24 = xmmword_1801DA7BC;
  v25 = dword_1801DA7CC;
  v26 = xmmword_1801DA7E4;
  v27 = dword_1801DA7F4;
  v28 = xmmword_1801DA7F8;
  v29 = dword_1801DA808;
  v30 = xmmword_1801DA80C;
  v31 = dword_1801DA81C;
  v32 = PKEY_AudioEndpoint_Disable_SysFx;
  for ( i = 0; (unsigned __int64)i < 7; i = v7 + 1 )
  {
    if ( (unsigned int)operator==(a2, (char *)&v20 + 20 * i) )
    {
      updated = EffectPack::UpdateAPOEnableStatus(*((EffectPack **)this + 48));
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D81,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)updated,
          v13);
      break;
    }
  }
  if ( a2->pid == 5 )
  {
    v9 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)&PKEY_AudioEndpoint_Disable_SysFx.fmtid.Data1;
    if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEndpoint_Disable_SysFx.fmtid.Data1 )
      v9 = *(_QWORD *)a2->fmtid.Data4 - *(_QWORD *)PKEY_AudioEndpoint_Disable_SysFx.fmtid.Data4;
    if ( !v9 )
      CEndpointCharacteristics::DisconnectStreamsOnEndpoint(this);
  }
  if ( !*((_DWORD *)this + 59)
    && CSpatialProperties::IsPropertyChangeRelevant((CEndpointCharacteristics *)((char *)this + 448), a2) )
  {
    v16 = 0LL;
    v17 = &v16;
    v18 = 0LL;
    v19 = 1;
    EffectPack::GetDeviceFormat(*((EffectPack **)this + 48), 0, 0, eHostProcessConnector, &v18);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v17);
    v15[0] = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)g_policyConfigInternal + 48LL))(
            g_policyConfigInternal,
            v15);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D93,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v10,
        v14);
    CSpatialProperties::ProcessPropertyChange(
      (LPCRITICAL_SECTION)((char *)this + 448),
      *((struct EffectPack **)this + 48),
      a2,
      (struct SpatialAudioRelatedGlobalSettings *)v15,
      v16,
      a3);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v16,
      0LL);
  }
  if ( dword_1801DCF28 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801DCF28);
    if ( dword_1801DCF28 == -1 )
    {
      xmmword_1801DCA30 = (__int128)PKEY_SpatialAudio_Signaling_Key.fmtid;
      dword_1801DCA40 = 2;
      dword_1801DCA44 = 8;
      xmmword_1801DCA48 = (__int128)PKEY_SpatialAudio_Signaling_Key.fmtid;
      dword_1801DCA58 = 2;
      dword_1801DCA5C = 4;
      *(PROPERTYKEY *)byte_1801DCA60 = PKEY_AudioEngine_DeviceFormat;
      dword_1801DCA74 = 2;
      *(struct _tagpropertykey *)byte_1801DCA78 = PKEY_Endpoint_AllowOffloading;
      dword_1801DCA8C = 16;
      Init_thread_footer(&dword_1801DCF28);
    }
  }
  v11 = 0;
  v12 = &dword_1801DCA44;
  do
  {
    if ( (unsigned int)operator==(a2, (char *)&xmmword_1801DCA30 + 24 * (int)v11) )
      EffectPack::MarkSystemEffectsForResolution(*((_QWORD *)this + 48), (unsigned int)*v12);
    ++v11;
    v12 += 6;
  }
  while ( v11 < 4 );
}
