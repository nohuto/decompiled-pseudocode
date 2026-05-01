/*
 * XREFs of ?StopActivity@LauncherInvokeActivity@CommonStartTelemetry@@MEAAXXZ @ 0x1800E8090
 * Callers:
 *     <none>
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001F62C (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?zInternalStop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800E839C (-zInternalStop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRef.c)
 *     ?Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E8790 (-Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180186A30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180186A30.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::StopActivity(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  __int64 v1; // rax
  int v3; // ecx
  const struct _tlgProvider_t *v4; // rax
  const struct _tlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+ACh] [rbp-7Ch] BYREF
  _DWORD v14[4]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+C0h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-50h]
  __int64 v18; // [rsp+E0h] [rbp-48h]
  __int64 v19; // [rsp+E8h] [rbp-40h]
  __int64 v20; // [rsp+F0h] [rbp-38h]
  __int64 v21; // [rsp+F8h] [rbp-30h]
  __int64 v22; // [rsp+100h] [rbp-28h]
  __int64 v23; // [rsp+108h] [rbp-20h]
  __int64 v24; // [rsp+110h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp-10h] BYREF
  void *v26; // [rsp+128h] [rbp+0h]
  int v27; // [rsp+130h] [rbp+8h]
  int v28; // [rsp+134h] [rbp+Ch]
  __int64 *v29; // [rsp+138h] [rbp+10h]
  int v30; // [rsp+140h] [rbp+18h]
  int v31; // [rsp+144h] [rbp+1Ch]
  int *v32; // [rsp+148h] [rbp+20h]
  int v33; // [rsp+150h] [rbp+28h]
  int v34; // [rsp+154h] [rbp+2Ch]
  _DWORD *v35; // [rsp+158h] [rbp+30h]
  int v36; // [rsp+160h] [rbp+38h]
  int v37; // [rsp+164h] [rbp+3Ch]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v1 + 88) || (v8 = v1 + 80, v1 == -80) )
  {
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v4 = LauncherTelemetryLogging::Provider();
    v5 = v4;
    if ( *(_DWORD *)v4 > 4u
      && (*((_QWORD *)v4 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v4 + 3) & 0x400000000000LL) == *((_QWORD *)v4 + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 34);
      v37 = 0;
      v34 = 0;
      v31 = 0;
      v14[0] = CurrentThreadId;
      v13 = *(_DWORD *)(v7 + 72);
      v35 = v14;
      v32 = &v13;
      v29 = &v15;
      *(_DWORD *)&EventDescriptor.Level = 516;
      UserData.Ptr = *((_QWORD *)v5 + 1);
      v15 = 50331648LL;
      v36 = 4;
      v33 = 4;
      v30 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v26 = &unk_1807FA66B;
      UserData.Reserved = 2;
      v27 = 75;
      v28 = 1;
      EventWriteTransfer(*((_QWORD *)v5 + 4), &EventDescriptor, (LPCGUID)(v7 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v9 = LauncherTelemetryLogging::Provider();
    if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      v11 = *(_QWORD *)(v8 + 120);
      v12 = *((_QWORD *)this + 34);
      v18 = *(_QWORD *)(v8 + 112);
      v14[1] = *(_DWORD *)(v8 + 104);
      v19 = *(_QWORD *)(v8 + 96);
      v20 = *(_QWORD *)(v8 + 88);
      v14[2] = *(_DWORD *)(v8 + 80);
      v21 = *(_QWORD *)(v8 + 72);
      v14[3] = *(_DWORD *)(v8 + 32);
      v22 = *(_QWORD *)(v8 + 24);
      v23 = *(_QWORD *)(v8 + 128);
      v13 = *(_DWORD *)(v8 + 64);
      v24 = *(_QWORD *)(v8 + 56);
      v14[0] = *(_DWORD *)(v8 + 8);
      v17 = v11;
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v15 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v10,
        &unk_1807FA705,
        v12 + 8);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
