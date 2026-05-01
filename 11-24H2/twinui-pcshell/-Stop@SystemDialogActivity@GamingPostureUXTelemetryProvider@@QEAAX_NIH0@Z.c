/*
 * XREFs of ?Stop@SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAAX_NIH0@Z @ 0x18033F554
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByVal@$00@@U2@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByVal@$00@@447@Z @ 0x1800032A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800032A4.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001F62C (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Provider@GamingPostureUXTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180331E1C (-Provider@GamingPostureUXTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803387D0 (-zInternalStop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAA.c)
 */

void __fastcall GamingPostureUXTelemetryProvider::SystemDialogActivity::Stop(
        GamingPostureUXTelemetryProvider::SystemDialogActivity *this,
        bool a2,
        int a3,
        int a4,
        bool a5)
{
  __int64 v5; // rax
  int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  const struct _tlgProvider_t *v17; // rax
  __int64 v18; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  bool v21; // [rsp+C8h] [rbp-80h] BYREF
  bool v22; // [rsp+C9h] [rbp-7Fh] BYREF
  int v23; // [rsp+CCh] [rbp-7Ch] BYREF
  DWORD v24; // [rsp+D0h] [rbp-78h] BYREF
  int v25; // [rsp+D4h] [rbp-74h] BYREF
  _DWORD v26[3]; // [rsp+D8h] [rbp-70h] BYREF
  int v27; // [rsp+E4h] [rbp-64h] BYREF
  int v28; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+100h] [rbp-48h] BYREF
  __int64 v32; // [rsp+108h] [rbp-40h] BYREF
  __int64 v33; // [rsp+110h] [rbp-38h] BYREF
  __int64 v34; // [rsp+118h] [rbp-30h] BYREF
  __int64 v35; // [rsp+120h] [rbp-28h] BYREF
  __int64 v36; // [rsp+128h] [rbp-20h] BYREF
  __int64 v37; // [rsp+130h] [rbp-18h] BYREF
  __int64 v38; // [rsp+138h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+148h] [rbp+0h] BYREF
  __int64 *v40; // [rsp+168h] [rbp+20h]
  int v41; // [rsp+170h] [rbp+28h]
  int v42; // [rsp+174h] [rbp+2Ch]
  int *v43; // [rsp+178h] [rbp+30h]
  int v44; // [rsp+180h] [rbp+38h]
  int v45; // [rsp+184h] [rbp+3Ch]
  DWORD *v46; // [rsp+188h] [rbp+40h]
  int v47; // [rsp+190h] [rbp+48h]
  int v48; // [rsp+194h] [rbp+4Ch]
  bool *v49; // [rsp+198h] [rbp+50h]
  int v50; // [rsp+1A0h] [rbp+58h]
  int v51; // [rsp+1A4h] [rbp+5Ch]
  int *v52; // [rsp+1A8h] [rbp+60h]
  int v53; // [rsp+1B0h] [rbp+68h]
  int v54; // [rsp+1B4h] [rbp+6Ch]
  _DWORD *v55; // [rsp+1B8h] [rbp+70h]
  int v56; // [rsp+1C0h] [rbp+78h]
  int v57; // [rsp+1C4h] [rbp+7Ch]
  bool *v58; // [rsp+1C8h] [rbp+80h]
  int v59; // [rsp+1D0h] [rbp+88h]
  int v60; // [rsp+1D4h] [rbp+8Ch]

  v5 = *((_QWORD *)this + 34);
  v10 = *(_DWORD *)(v5 + 72);
  if ( v10 >= 0 || v10 != *(_DWORD *)(v5 + 88) || (v11 = v5 + 80, v5 == -80) )
  {
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v17 = GamingPostureUXTelemetryProvider::Provider(v16);
    v18 = (__int64)v17;
    if ( *(_DWORD *)v17 > 5u && tlgKeywordOn((__int64)v17, 0x400000000000LL) )
    {
      v22 = a5;
      v26[0] = a4;
      v25 = a3;
      v21 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *((_QWORD *)this + 34);
      v60 = 0;
      v57 = 0;
      v54 = 0;
      v51 = 0;
      v48 = 0;
      v45 = 0;
      v42 = 0;
      v24 = CurrentThreadId;
      v23 = *(_DWORD *)(v20 + 72);
      v58 = &v22;
      v55 = v26;
      v52 = &v25;
      v49 = &v21;
      v46 = &v24;
      v43 = &v23;
      v40 = &v29;
      v59 = 1;
      v56 = 4;
      v53 = 4;
      v50 = 1;
      v47 = 4;
      v44 = 4;
      v29 = 50331648LL;
      v41 = 8;
      tlgWriteTransfer_EventWriteTransfer(v18, byte_1807E7626, (const GUID *)(v20 + 8), 0LL, 9u, &v39);
    }
  }
  else
  {
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = GamingPostureUXTelemetryProvider::Provider(v12);
    if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v30 = *(_QWORD *)(v11 + 120);
      v31 = *(_QWORD *)(v11 + 112);
      v27 = *(_DWORD *)(v11 + 104);
      v15 = *((_QWORD *)this + 34);
      v32 = *(_QWORD *)(v11 + 96);
      v33 = *(_QWORD *)(v11 + 88);
      v28 = *(_DWORD *)(v11 + 80);
      v34 = *(_QWORD *)(v11 + 72);
      v23 = *(_DWORD *)(v11 + 32);
      v35 = *(_QWORD *)(v11 + 24);
      v24 = *(_DWORD *)v11;
      v36 = *(_QWORD *)(v11 + 128);
      v25 = *(_DWORD *)(v11 + 64);
      v37 = *(_QWORD *)(v11 + 56);
      v26[0] = *(_DWORD *)(v11 + 8);
      v21 = a5;
      v26[1] = a4;
      v26[2] = a3;
      v22 = a2;
      v38 = 0x1000000LL;
      v29 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v14,
        (__int64)&unk_1807E74BD,
        v15 + 8,
        v14,
        (__int64)&v29,
        (__int64)&v38,
        (__int64)v26,
        &v37,
        (__int64)&v25,
        &v36,
        (__int64)&v24,
        &v35,
        (__int64)&v23,
        &v34,
        (__int64)&v28,
        &v33,
        &v32,
        (__int64)&v27,
        &v31,
        &v30);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
