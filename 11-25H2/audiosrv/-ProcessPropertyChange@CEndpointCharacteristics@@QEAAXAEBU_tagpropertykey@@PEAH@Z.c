/*
 * XREFs of ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001774C
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180016B3C (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180101938 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180036734 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x18004CC00 (-MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x18006115C (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800A8320 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800A8388 (_Init_thread_header.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ @ 0x18012B874 (-DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ.c)
 *     ?UpdateAPOEnableStatus@EffectPack@@QEAAJXZ @ 0x18012FB70 (-UpdateAPOEnableStatus@EffectPack@@QEAAJXZ.c)
 *     ?IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z @ 0x180135060 (-IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180135110 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  v20 = xmmword_1801CE764;
  v21 = dword_1801CE774;
  v22 = xmmword_1801CE778;
  v23 = dword_1801CE788;
  v24 = xmmword_1801CE78C;
  v25 = dword_1801CE79C;
  v26 = xmmword_1801CE7B4;
  v27 = dword_1801CE7C4;
  v28 = xmmword_1801CE7C8;
  v29 = dword_1801CE7D8;
  v30 = xmmword_1801CE7DC;
  v31 = dword_1801CE7EC;
  v32 = PKEY_AudioEndpoint_Disable_SysFx;
  for ( i = 0; (unsigned __int64)i < 7; i = v7 + 1 )
  {
    if ( (unsigned int)operator==(a2, (char *)&v20 + 20 * i) )
    {
      updated = EffectPack::UpdateAPOEnableStatus(*((EffectPack **)this + 48));
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D36,
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
        (void *)0x1D48,
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
  if ( dword_1801D0D58 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801D0D58);
    if ( dword_1801D0D58 == -1 )
    {
      *(struct _tagpropertykey *)byte_1801D08C0 = PKEY_SpatialAudio_Signaling_Key;
      dword_1801D08D4 = 8;
      *(struct _tagpropertykey *)byte_1801D08D8 = PKEY_SpatialAudio_Signaling_Key;
      dword_1801D08EC = 4;
      *(PROPERTYKEY *)byte_1801D08F0 = PKEY_AudioEngine_DeviceFormat;
      dword_1801D0904 = 2;
      *(struct _tagpropertykey *)byte_1801D0908 = PKEY_Endpoint_AllowOffloading;
      dword_1801D091C = 16;
      Init_thread_footer(&dword_1801D0D58);
    }
  }
  v11 = 0;
  v12 = &dword_1801D08D4;
  do
  {
    if ( (unsigned int)operator==(a2, &byte_1801D08C0[24 * v11]) )
      EffectPack::MarkSystemEffectsForResolution(*((_QWORD *)this + 48), (unsigned int)*v12);
    ++v11;
    v12 += 6;
  }
  while ( v11 < 4 );
}
