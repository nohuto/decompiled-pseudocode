/*
 * XREFs of ?StopActivity@Uncloak@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1800AF110
 * Callers:
 *     <none>
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001F62C (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180034714 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180186A30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180186A30.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Uncloak::StopActivity(SingleViewExperienceTelemetry::Uncloak *this)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  const struct _tlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // [rsp+ACh] [rbp-7Ch] BYREF
  _DWORD v16[4]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v19; // [rsp+D8h] [rbp-50h]
  __int64 v20; // [rsp+E0h] [rbp-48h]
  __int64 v21; // [rsp+E8h] [rbp-40h]
  __int64 v22; // [rsp+F0h] [rbp-38h]
  __int64 v23; // [rsp+F8h] [rbp-30h]
  __int64 v24; // [rsp+100h] [rbp-28h]
  __int64 v25; // [rsp+108h] [rbp-20h]
  __int64 v26; // [rsp+110h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp-10h] BYREF
  void *v28; // [rsp+128h] [rbp+0h]
  int v29; // [rsp+130h] [rbp+8h]
  int v30; // [rsp+134h] [rbp+Ch]
  __int64 *v31; // [rsp+138h] [rbp+10h]
  int v32; // [rsp+140h] [rbp+18h]
  int v33; // [rsp+144h] [rbp+1Ch]
  int *v34; // [rsp+148h] [rbp+20h]
  int v35; // [rsp+150h] [rbp+28h]
  int v36; // [rsp+154h] [rbp+2Ch]
  _DWORD *v37; // [rsp+158h] [rbp+30h]
  int v38; // [rsp+160h] [rbp+38h]
  int v39; // [rsp+164h] [rbp+3Ch]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v1 + 88) || (v9 = v1 + 80, v1 == -80) )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v5 = SingleViewExperienceLogging::Provider(v4);
    v6 = v5;
    if ( *(_DWORD *)v5 > 5u
      && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 34);
      v39 = 0;
      v36 = 0;
      v33 = 0;
      v16[0] = CurrentThreadId;
      v15 = *(_DWORD *)(v8 + 72);
      v17 = 0x1000000LL;
      v37 = v16;
      v34 = &v15;
      v31 = &v17;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v6 + 1);
      v38 = 4;
      v35 = 4;
      v32 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v28 = &unk_18081F03D;
      UserData.Reserved = 2;
      v29 = 60;
      v30 = 1;
      EventWriteTransfer(*((_QWORD *)v6 + 4), &EventDescriptor, (LPCGUID)(v8 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = SingleViewExperienceLogging::Provider(v10);
    if ( *(_DWORD *)v11 > 5u && (unsigned __int8)tlgKeywordOn(v11, 0x200000000000LL) )
    {
      v13 = *(_QWORD *)(v9 + 120);
      v14 = *((_QWORD *)this + 34);
      v20 = *(_QWORD *)(v9 + 112);
      v16[1] = *(_DWORD *)(v9 + 104);
      v21 = *(_QWORD *)(v9 + 96);
      v22 = *(_QWORD *)(v9 + 88);
      v16[2] = *(_DWORD *)(v9 + 80);
      v23 = *(_QWORD *)(v9 + 72);
      v16[3] = *(_DWORD *)(v9 + 32);
      v24 = *(_QWORD *)(v9 + 24);
      v25 = *(_QWORD *)(v9 + 128);
      v15 = *(_DWORD *)(v9 + 64);
      v26 = *(_QWORD *)(v9 + 56);
      v16[0] = *(_DWORD *)(v9 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v17 = 0x1000000LL;
      v19 = v13;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v12,
        &unk_18081EF13,
        v14 + 8);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
