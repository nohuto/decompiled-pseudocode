/*
 * XREFs of ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800AE428
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800AFB9C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _lambda_46d3d49e2bbb772acd3c21ebc08e3e79_::operator() @ 0x180680EC0 (_lambda_46d3d49e2bbb772acd3c21ebc08e3e79_--operator().c)
 *     _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x180680F54 (_lambda_6914baa2bbb41478f35591fe55a15932_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645666@Z @ 0x180011F30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180011F30.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001F62C (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180034714 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v3; // rax
  int v7; // ecx
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  const struct _tlgProvider_t *v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rcx
  const struct _tlgProvider_t *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r8
  unsigned int v24; // [rsp+B0h] [rbp-80h] BYREF
  int v25; // [rsp+B4h] [rbp-7Ch] BYREF
  DWORD v26; // [rsp+B8h] [rbp-78h] BYREF
  int v27; // [rsp+BCh] [rbp-74h] BYREF
  int v28; // [rsp+C0h] [rbp-70h] BYREF
  int v29; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v30; // [rsp+C8h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D0h] [rbp-60h] BYREF
  const unsigned __int16 *v32; // [rsp+E0h] [rbp-50h] BYREF
  const unsigned __int16 *v33; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v35; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v36; // [rsp+100h] [rbp-30h] BYREF
  __int64 v37; // [rsp+108h] [rbp-28h] BYREF
  __int64 v38; // [rsp+110h] [rbp-20h] BYREF
  __int64 v39; // [rsp+118h] [rbp-18h] BYREF
  __int64 v40; // [rsp+120h] [rbp-10h] BYREF
  __int64 v41; // [rsp+128h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+0h] BYREF
  void *v43; // [rsp+140h] [rbp+10h]
  int v44; // [rsp+148h] [rbp+18h]
  int v45; // [rsp+14Ch] [rbp+1Ch]
  __int64 *v46; // [rsp+150h] [rbp+20h]
  __int64 v47; // [rsp+158h] [rbp+28h]
  int *v48; // [rsp+160h] [rbp+30h]
  __int64 v49; // [rsp+168h] [rbp+38h]
  DWORD *v50; // [rsp+170h] [rbp+40h]
  __int64 v51; // [rsp+178h] [rbp+48h]
  const unsigned __int16 *v52; // [rsp+180h] [rbp+50h]
  int v53; // [rsp+188h] [rbp+58h]
  int v54; // [rsp+18Ch] [rbp+5Ch]
  const unsigned __int16 *v55; // [rsp+190h] [rbp+60h]
  int v56; // [rsp+198h] [rbp+68h]
  int v57; // [rsp+19Ch] [rbp+6Ch]

  v3 = *((_QWORD *)this + 34);
  v7 = *(_DWORD *)(v3 + 72);
  if ( v7 >= 0 || v7 != *(_DWORD *)(v3 + 88) || (v18 = v3 + 80, v3 == -80) )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = SingleViewExperienceLogging::Provider(v8);
    v10 = v9;
    if ( *(_DWORD *)v9 > 5u
      && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v9 + 3) & 0x200000000000LL) == *((_QWORD *)v9 + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v12 = *((_QWORD *)this + 34);
      v26 = CurrentThreadId;
      v13 = (const GUID *)(v12 + 8);
      v25 = *(_DWORD *)(v12 + 72);
      v30 = 0x1000000LL;
      v14 = -1LL;
      if ( a3 )
      {
        v15 = -1LL;
        do
          ++v15;
        while ( a3[v15] );
        v16 = 2 * v15 + 2;
      }
      else
      {
        a3 = &pvData;
        v16 = 2;
      }
      v55 = a3;
      v56 = v16;
      v57 = 0;
      if ( a2 )
      {
        do
          ++v14;
        while ( a2[v14] );
        v17 = 2 * v14 + 2;
      }
      else
      {
        a2 = &pvData;
        v17 = 2;
      }
      v53 = v17;
      v52 = a2;
      v50 = &v26;
      v54 = 0;
      v48 = &v25;
      v46 = &v30;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v10 + 1);
      v51 = 4LL;
      v49 = 4LL;
      v47 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v43 = &unk_18081E546;
      UserData.Reserved = 2;
      v44 = 105;
      v45 = 1;
      v24 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v10 + 4), &EventDescriptor, v13, 0LL, 7u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v20 = SingleViewExperienceLogging::Provider(v19);
    if ( *(_DWORD *)v20 > 5u && (unsigned __int8)tlgKeywordOn(v20, 0x200000000000LL) )
    {
      v34 = *(_QWORD *)(v18 + 120);
      v35 = *(_QWORD *)(v18 + 112);
      v23 = *((_QWORD *)this + 34);
      v27 = *(_DWORD *)(v18 + 104);
      v36 = *(_QWORD *)(v18 + 96);
      v37 = *(_QWORD *)(v18 + 88);
      v28 = *(_DWORD *)(v18 + 80);
      v38 = *(_QWORD *)(v18 + 72);
      v29 = *(_DWORD *)(v18 + 32);
      v39 = *(_QWORD *)(v18 + 24);
      v24 = *(_DWORD *)v18;
      v40 = *(_QWORD *)(v18 + 128);
      v25 = *(_DWORD *)(v18 + 64);
      v41 = *(_QWORD *)(v18 + 56);
      v26 = *(_DWORD *)(v18 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v30 = 0x1000000LL;
      v32 = a3;
      v33 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v21,
        (__int64)&unk_18081E3EF,
        v23 + 8,
        v22,
        (__int64)&v30,
        (__int64)&EventDescriptor,
        (__int64)&v26,
        &v41,
        (__int64)&v25,
        &v40,
        (__int64)&v24,
        &v39,
        (__int64)&v29,
        &v38,
        (__int64)&v28,
        &v37,
        &v36,
        (__int64)&v27,
        &v35,
        &v34,
        &v33,
        &v32);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
