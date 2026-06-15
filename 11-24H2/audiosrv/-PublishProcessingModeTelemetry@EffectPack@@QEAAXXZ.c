/*
 * XREFs of ?PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ @ 0x180135D88
 * Callers:
 *     _lambda_e0af659f64b105a4e9b6b315aa2a08ae_::operator() @ 0x18010BCD0 (_lambda_e0af659f64b105a4e9b6b315aa2a08ae_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperPtrSize@@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperPtrSize@@66666@Z @ 0x180005E78 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByRef@$0BA@@@U_tlgWrapperPtr.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180032C58 (-GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003A750 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18003AFBC (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _lambda_7e2fae5cc5bdf6b522954fc2836cce6e_::operator() @ 0x1801314F4 (_lambda_7e2fae5cc5bdf6b522954fc2836cce6e_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall EffectPack::PublishProcessingModeTelemetry(EffectPack *this)
{
  int *v2; // rbx
  __int64 v3; // rsi
  signed int v4; // r14d
  __int64 v5; // rax
  signed int v6; // esi
  signed int i; // r14d
  const char *v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  const WCHAR *v11; // [rsp+70h] [rbp-8B8h] BYREF
  __int64 v12; // [rsp+78h] [rbp-8B0h] BYREF
  signed int v13; // [rsp+80h] [rbp-8A8h]
  int v14; // [rsp+84h] [rbp-8A4h]
  __int128 v15; // [rsp+90h] [rbp-898h] BYREF
  const WCHAR *v16[2]; // [rsp+A0h] [rbp-888h] BYREF
  __int128 *v17; // [rsp+B0h] [rbp-878h] BYREF
  const WCHAR *v18; // [rsp+B8h] [rbp-870h] BYREF
  char *v19; // [rsp+C0h] [rbp-868h] BYREF
  int v20; // [rsp+C8h] [rbp-860h]
  __int64 v21; // [rsp+D0h] [rbp-858h] BYREF
  int v22; // [rsp+D8h] [rbp-850h]
  char *v23; // [rsp+E0h] [rbp-848h] BYREF
  int v24; // [rsp+E8h] [rbp-840h]
  __int64 v25; // [rsp+F0h] [rbp-838h] BYREF
  int v26; // [rsp+F8h] [rbp-830h]
  _BYTE *v27; // [rsp+100h] [rbp-828h] BYREF
  int v28; // [rsp+108h] [rbp-820h]
  __int128 v29; // [rsp+110h] [rbp-818h] BYREF
  _DWORD v30[3]; // [rsp+120h] [rbp-808h] BYREF
  char v31; // [rsp+12Ch] [rbp-7FCh] BYREF
  _BYTE v32[400]; // [rsp+130h] [rbp-7F8h] BYREF
  char v33; // [rsp+2C0h] [rbp-668h] BYREF
  char v34; // [rsp+5E0h] [rbp-348h] BYREF
  __int64 v35; // [rsp+900h] [rbp-28h] BYREF
  __int16 v36; // [rsp+908h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+928h] [rbp+0h]

  v35 = 0LL;
  v36 = 0;
  v16[0] = (const WCHAR *)&v35;
  v16[1] = (const WCHAR *)v32;
  v30[0] = 0;
  v30[1] = 1;
  v30[2] = 3;
  v2 = v30;
  while ( 1 )
  {
    v3 = *((_QWORD *)this + 198);
    if ( v2 == (int *)&v31 )
      break;
    v4 = 0;
    if ( *(int *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(v3 + 216), *v2) + 8) > 0 )
    {
      do
      {
        v5 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
               (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
               *v2);
        v15 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v5, v4);
        lambda_7e2fae5cc5bdf6b522954fc2836cce6e_::operator()((__int64 *)v16, *v2, &v15, 1);
        ++v4;
      }
      while ( v4 < *(_DWORD *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                 (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
                                 *v2)
                             + 8) );
    }
    try
    {
      v12 = 0LL;
      v13 = 0;
      v14 = 0;
      EffectPack::GetAPOSupportedProcessingModes((__int64)this, (unsigned int)*v2, 1, &v12);
      v6 = 0;
      for ( i = v13; v6 < i; ++v6 )
      {
        v15 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v12, v6);
        lambda_7e2fae5cc5bdf6b522954fc2836cce6e_::operator()((__int64 *)v16, *v2, &v15, 2);
      }
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v12);
      ++v2;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x25CE,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v8);
      return;
    }
  }
  v11 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v11,
    0LL);
  mmdDevGetInstanceIdFromMMDeviceId(*(_QWORD *)(v3 + 48), &v11);
  if ( **((_DWORD **)this + 265) > 4u && tlgKeywordOn(*((_QWORD *)this + 265), 0x400000000000LL) )
  {
    v19 = &v34;
    v20 = (unsigned __int16)(20 * HIWORD(v35));
    v21 = (__int64)&v35 + 6;
    v22 = 2;
    v23 = &v33;
    v24 = (unsigned __int16)(20 * WORD1(v35));
    v25 = (__int64)&v35 + 2;
    v26 = 2;
    v27 = v32;
    v28 = (unsigned __int16)(20 * v35);
    *(_QWORD *)&v15 = &v35;
    DWORD2(v15) = 2;
    v29 = *(_OWORD *)*((_QWORD *)this + 196);
    v17 = &v29;
    v18 = *(const WCHAR **)(*((_QWORD *)this + 198) + 48LL);
    v16[0] = v11;
    v12 = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
      v9,
      (int)&unk_1801AF5A2,
      v9,
      v10,
      (__int64)&v12,
      v16,
      &v18,
      (__int64 *)&v17,
      (__int64 *)&v15,
      (__int64 *)&v27,
      &v25,
      (__int64 *)&v23,
      &v21,
      (__int64 *)&v19);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v11);
}
