/*
 * XREFs of ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800D8F74
 * Callers:
 *     wil::details::lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___::_lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___ @ 0x1800D535C (wil--details--lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___--_lambda_call__lambda_aa67.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D5F4C (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644@Z @ 0x180003B4C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180003B4C.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D2908 (-Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800D69E8 (-IgnoreCurrentThread@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgRef.c)
 *     ?zInternalStop@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800D9920 (-zInternalStop@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflector.c)
 */

void __fastcall RawInputProvidersTracing::DeviceAttached::Stop(
        RawInputProvidersTracing::DeviceAttached *this,
        int a2,
        int a3)
{
  __int64 v3; // rax
  int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  const struct _tlgProvider_t *v16; // rax
  __int64 v17; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v19; // r8
  int v20; // eax
  int v21; // [rsp+B0h] [rbp-80h] BYREF
  DWORD v22; // [rsp+B4h] [rbp-7Ch] BYREF
  int v23; // [rsp+B8h] [rbp-78h] BYREF
  int v24; // [rsp+BCh] [rbp-74h] BYREF
  int v25; // [rsp+C0h] [rbp-70h] BYREF
  int v26; // [rsp+C4h] [rbp-6Ch] BYREF
  int v27; // [rsp+C8h] [rbp-68h] BYREF
  int v28; // [rsp+CCh] [rbp-64h] BYREF
  __int64 v29; // [rsp+D0h] [rbp-60h] BYREF
  const WCHAR *v30; // [rsp+D8h] [rbp-58h] BYREF
  const unsigned __int16 *v31; // [rsp+E0h] [rbp-50h] BYREF
  const WCHAR *v32; // [rsp+E8h] [rbp-48h] BYREF
  const unsigned __int16 *v33; // [rsp+F0h] [rbp-40h] BYREF
  const unsigned __int16 *v34; // [rsp+F8h] [rbp-38h] BYREF
  const WCHAR *v35; // [rsp+100h] [rbp-30h] BYREF
  const unsigned __int16 *v36; // [rsp+108h] [rbp-28h] BYREF
  const unsigned __int16 *v37; // [rsp+110h] [rbp-20h] BYREF
  __int64 v38; // [rsp+118h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+120h] [rbp-10h] BYREF
  __int64 *v40; // [rsp+140h] [rbp+10h]
  int v41; // [rsp+148h] [rbp+18h]
  int v42; // [rsp+14Ch] [rbp+1Ch]
  int *v43; // [rsp+150h] [rbp+20h]
  int v44; // [rsp+158h] [rbp+28h]
  int v45; // [rsp+15Ch] [rbp+2Ch]
  DWORD *v46; // [rsp+160h] [rbp+30h]
  int v47; // [rsp+168h] [rbp+38h]
  int v48; // [rsp+16Ch] [rbp+3Ch]
  int *v49; // [rsp+170h] [rbp+40h]
  int v50; // [rsp+178h] [rbp+48h]
  int v51; // [rsp+17Ch] [rbp+4Ch]
  int *v52; // [rsp+180h] [rbp+50h]
  int v53; // [rsp+188h] [rbp+58h]
  int v54; // [rsp+18Ch] [rbp+5Ch]

  v3 = *((_QWORD *)this + 34);
  v7 = *(_DWORD *)(v3 + 72);
  if ( v7 >= 0 || v7 != *(_DWORD *)(v3 + 88) || (v8 = v3 + 80, v3 == -80) )
  {
    wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v16 = RawInputProvidersTracing::Provider(v15);
    v17 = (__int64)v16;
    if ( *(_DWORD *)v16 > 4u && tlgKeywordOn((__int64)v16, 0x400000000000LL) )
    {
      v24 = a3;
      v23 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *((_QWORD *)this + 34);
      v54 = 0;
      v51 = 0;
      v48 = 0;
      v45 = 0;
      v42 = 0;
      v22 = CurrentThreadId;
      v20 = *(_DWORD *)(v19 + 72);
      v29 = 0LL;
      v21 = v20;
      v52 = &v24;
      v49 = &v23;
      v46 = &v22;
      v43 = &v21;
      v40 = &v29;
      v53 = 4;
      v50 = 4;
      v47 = 4;
      v44 = 4;
      v41 = 8;
      tlgWriteTransfer_EventWriteTransfer(v17, byte_180212E05, (const GUID *)(v19 + 8), 0LL, 7u, &v39);
    }
  }
  else
  {
    wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v10 = RawInputProvidersTracing::Provider(v9);
    if ( *(_DWORD *)v10 > 4u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      v30 = *(const WCHAR **)(v8 + 120);
      v13 = *((_QWORD *)this + 34);
      v31 = *(const unsigned __int16 **)(v8 + 112);
      v14 = *(_DWORD *)(v8 + 104);
      v29 = 0LL;
      v27 = v14;
      v32 = *(const WCHAR **)(v8 + 96);
      v33 = *(const unsigned __int16 **)(v8 + 88);
      v28 = *(_DWORD *)(v8 + 80);
      v34 = *(const unsigned __int16 **)(v8 + 72);
      v21 = *(_DWORD *)(v8 + 32);
      v35 = *(const WCHAR **)(v8 + 24);
      v22 = *(_DWORD *)v8;
      v36 = *(const unsigned __int16 **)(v8 + 128);
      v23 = *(_DWORD *)(v8 + 64);
      v37 = *(const unsigned __int16 **)(v8 + 56);
      v24 = *(_DWORD *)(v8 + 8);
      v25 = a3;
      v26 = a2;
      v38 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (__int64)&unk_180212E67,
        v13 + 8,
        v12,
        (__int64)&v29,
        (__int64)&v38,
        (__int64)&v24,
        &v37,
        (__int64)&v23,
        &v36,
        (__int64)&v22,
        &v35,
        (__int64)&v21,
        &v34,
        (__int64)&v28,
        &v33,
        &v32,
        (__int64)&v27,
        &v31,
        &v30,
        (__int64)&v26,
        (__int64)&v25);
    }
  }
  wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
