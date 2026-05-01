/*
 * XREFs of ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x18011B76C
 * Callers:
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x1800D3440 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x1806A5B00 (-ToggleAllUpView@TaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456444@Z @ 0x1800127A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800127A0.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180024F20 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18011AE3C (-Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1801C4710 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
        XamlSwitcherTelemetry::ShowXamlTaskView *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  __int64 v4; // rax
  int v6; // esi
  int v8; // r14d
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  const struct _tlgProvider_t *v18; // rax
  int v19; // edi
  DWORD CurrentThreadId; // eax
  __int64 v21; // r8
  int v22; // eax
  int v23; // [rsp+C8h] [rbp-80h] BYREF
  DWORD v24; // [rsp+CCh] [rbp-7Ch] BYREF
  int v25; // [rsp+D0h] [rbp-78h] BYREF
  _DWORD v26[3]; // [rsp+D4h] [rbp-74h] BYREF
  int v27; // [rsp+E0h] [rbp-68h] BYREF
  int v28; // [rsp+E4h] [rbp-64h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+100h] [rbp-48h] BYREF
  __int64 v33; // [rsp+108h] [rbp-40h] BYREF
  __int64 v34; // [rsp+110h] [rbp-38h] BYREF
  __int64 v35; // [rsp+118h] [rbp-30h] BYREF
  __int64 v36; // [rsp+120h] [rbp-28h] BYREF
  __int64 v37; // [rsp+128h] [rbp-20h] BYREF
  __int64 v38; // [rsp+130h] [rbp-18h] BYREF
  int v39; // [rsp+158h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 34);
  v6 = a4;
  v8 = a3;
  v9 = *(_DWORD *)(v4 + 72);
  if ( v9 >= 0 || v9 != *(_DWORD *)(v4 + 88) || (v10 = v4 + 80, v4 == -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v18 = XamlSwitcherLogging::Provider(v17);
    v19 = (int)v18;
    if ( *(_DWORD *)v18 > 5u && tlgKeywordOn((__int64)v18, 0x400000000000LL) )
    {
      v39 = v6;
      v26[0] = v8;
      v25 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v21 = *((_QWORD *)this + 34);
      v24 = CurrentThreadId;
      v22 = *(_DWORD *)(v21 + 72);
      v29 = 0LL;
      v23 = v22;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v19,
        (unsigned int)&unk_180821D54,
        v21 + 8,
        0,
        (__int64)&v29,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)v26,
        (__int64)&v39);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = XamlSwitcherLogging::Provider(v11);
    if ( *(_DWORD *)v12 > 5u && tlgKeywordOn((__int64)v12, 0x400000000000LL) )
    {
      v30 = *(_QWORD *)(v10 + 120);
      v31 = *(_QWORD *)(v10 + 112);
      v15 = *((_QWORD *)this + 34);
      v27 = *(_DWORD *)(v10 + 104);
      v16 = *(_QWORD *)(v10 + 96);
      v29 = 0LL;
      v32 = v16;
      v33 = *(_QWORD *)(v10 + 88);
      v28 = *(_DWORD *)(v10 + 80);
      v34 = *(_QWORD *)(v10 + 72);
      v23 = *(_DWORD *)(v10 + 32);
      v35 = *(_QWORD *)(v10 + 24);
      v24 = *(_DWORD *)v10;
      v36 = *(_QWORD *)(v10 + 128);
      v25 = *(_DWORD *)(v10 + 64);
      v37 = *(_QWORD *)(v10 + 56);
      v26[0] = *(_DWORD *)(v10 + 8);
      v39 = v6;
      v26[1] = v8;
      v26[2] = a2;
      v38 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        (__int64)&unk_180821BFE,
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
