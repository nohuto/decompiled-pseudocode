/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18006D6B4
 * Callers:
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B88DC (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800D7450 (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800D8100 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9)
{
  __int64 v10; // rcx
  const WCHAR *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  _DWORD v15[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v16; // [rsp+40h] [rbp-61h]
  unsigned __int16 *v17; // [rsp+50h] [rbp-51h] BYREF
  int v18; // [rsp+58h] [rbp-49h]
  int v19; // [rsp+5Ch] [rbp-45h]
  unsigned __int8 *v20; // [rsp+60h] [rbp-41h]
  int v21; // [rsp+68h] [rbp-39h]
  int v22; // [rsp+6Ch] [rbp-35h]
  const WCHAR *v23; // [rsp+70h] [rbp-31h]
  int v24; // [rsp+78h] [rbp-29h]
  int v25; // [rsp+7Ch] [rbp-25h]
  __int64 v26; // [rsp+80h] [rbp-21h]
  __int64 v27; // [rsp+88h] [rbp-19h]
  __int64 v28; // [rsp+90h] [rbp-11h]
  __int64 v29; // [rsp+98h] [rbp-9h]
  __int64 v30; // [rsp+A0h] [rbp-1h]
  __int64 v31; // [rsp+A8h] [rbp+7h]
  __int64 v32; // [rsp+B0h] [rbp+Fh]
  __int64 v33; // [rsp+B8h] [rbp+17h]

  v33 = 16LL;
  v31 = 4LL;
  v29 = 4LL;
  v10 = *a9;
  v30 = a8;
  v28 = a7;
  v26 = a6;
  v32 = v10;
  v27 = 2LL;
  v11 = *a5;
  if ( *a5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &LocaleName;
    v13 = 2;
  }
  v24 = v13;
  v15[0] = *a2 << 24;
  v23 = v11;
  v15[1] = *(unsigned __int16 *)(a2 + 1);
  v25 = 0;
  v16 = *(_QWORD *)(a2 + 3);
  v17 = *(unsigned __int16 **)(a1 + 8);
  v18 = *v17;
  v21 = *(unsigned __int16 *)(a2 + 11);
  v20 = a2 + 11;
  v19 = 2;
  v22 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v15, 0LL, 0LL, 7, &v17);
}
