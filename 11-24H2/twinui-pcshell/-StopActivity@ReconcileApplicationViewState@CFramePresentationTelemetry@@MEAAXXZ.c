/*
 * XREFs of ?StopActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@MEAAXXZ @ 0x1800343A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180032AC4 (-Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180034698 (-IgnoreCurrentThread@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180034714 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180214918 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180214918.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall CFramePresentationTelemetry::ReconcileApplicationViewState::StopActivity(
        CFramePresentationTelemetry::ReconcileApplicationViewState *this)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rdx
  const struct _tlgProvider_t *v5; // rdi
  __int64 v6; // r8
  const struct _tlgProvider_t *v7; // r9
  DWORD CurrentThreadId; // eax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // [rsp+C0h] [rbp-80h] BYREF
  int v16; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v17; // [rsp+C8h] [rbp-78h] BYREF
  int v18; // [rsp+CCh] [rbp-74h] BYREF
  int v19; // [rsp+D0h] [rbp-70h] BYREF
  int v20; // [rsp+D4h] [rbp-6Ch] BYREF
  int v21; // [rsp+D8h] [rbp-68h] BYREF
  int v22; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+100h] [rbp-40h] BYREF
  __int64 v27; // [rsp+108h] [rbp-38h] BYREF
  __int64 v28; // [rsp+110h] [rbp-30h] BYREF
  __int64 v29; // [rsp+118h] [rbp-28h] BYREF
  __int64 v30; // [rsp+120h] [rbp-20h] BYREF
  __int64 v31; // [rsp+128h] [rbp-18h] BYREF
  __int64 v32; // [rsp+130h] [rbp-10h] BYREF
  __int64 v33; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+0h] BYREF
  void *v35; // [rsp+150h] [rbp+10h]
  int v36; // [rsp+158h] [rbp+18h]
  int v37; // [rsp+15Ch] [rbp+1Ch]
  __int64 *v38; // [rsp+160h] [rbp+20h]
  int v39; // [rsp+168h] [rbp+28h]
  int v40; // [rsp+16Ch] [rbp+2Ch]
  int *v41; // [rsp+170h] [rbp+30h]
  int v42; // [rsp+178h] [rbp+38h]
  int v43; // [rsp+17Ch] [rbp+3Ch]
  DWORD *v44; // [rsp+180h] [rbp+40h]
  int v45; // [rsp+188h] [rbp+48h]
  int v46; // [rsp+18Ch] [rbp+4Ch]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v1 + 88) || (v11 = v1 + 80, v1 == -80) )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v5 = CAppManagerLogging::Provider();
    if ( *(_DWORD *)v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 34);
      v46 = 0;
      v43 = 0;
      v40 = 0;
      EventDescriptor.Keyword = 0LL;
      v17 = CurrentThreadId;
      v10 = *(_DWORD *)(v9 + 72);
      v23 = 0LL;
      v44 = &v17;
      v41 = &v16;
      v38 = &v23;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v5 + 1);
      v16 = v10;
      v45 = 4;
      v42 = 4;
      v39 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v35 = &unk_1807E3D1D;
      UserData.Reserved = 2;
      v36 = 82;
      v37 = 1;
      v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v5 + 4), &EventDescriptor, (LPCGUID)(v9 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v7 = CAppManagerLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      v12 = *(_QWORD *)(v11 + 48);
      v13 = *((_QWORD *)this + 34);
      v20 = *(_DWORD *)(v11 + 104);
      v14 = *(_QWORD *)(v11 + 96);
      v23 = 0LL;
      v28 = v14;
      v29 = *(_QWORD *)(v11 + 88);
      v21 = *(_DWORD *)(v11 + 80);
      v30 = *(_QWORD *)(v11 + 72);
      v22 = *(_DWORD *)(v11 + 32);
      v31 = *(_QWORD *)(v11 + 24);
      v15 = *(_DWORD *)v11;
      v32 = *(_QWORD *)(v11 + 128);
      v16 = *(_DWORD *)(v11 + 64);
      v33 = *(_QWORD *)(v11 + 56);
      v17 = *(_DWORD *)(v11 + 8);
      v25 = v12;
      v18 = *(_DWORD *)(v11 + 68);
      v19 = *(_DWORD *)(v11 + 16);
      v26 = *(_QWORD *)(v11 + 120);
      v27 = *(_QWORD *)(v11 + 112);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (_DWORD)v7,
        (unsigned int)&unk_1807E3D70,
        v13 + 8,
        (_DWORD)v7,
        (__int64)&v23,
        (__int64)&EventDescriptor,
        (__int64)&v17,
        (__int64)&v33,
        (__int64)&v16,
        (__int64)&v32,
        (__int64)&v15,
        (__int64)&v31,
        (__int64)&v22,
        (__int64)&v30,
        (__int64)&v21,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v20,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v25);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
    this,
    v4,
    v6,
    v7);
}
