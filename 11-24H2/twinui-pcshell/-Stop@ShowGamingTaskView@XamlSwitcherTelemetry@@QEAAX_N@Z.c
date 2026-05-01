/*
 * XREFs of ?Stop@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1806A1320
 * Callers:
 *     wil::details::ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___::_ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___ @ 0x18069E970 (wil--details--ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___--_ScopeExitFn__lambda_b59f.c)
 *     _lambda_6e770df948d8a5a9abf49638b3e35dc3_::operator() @ 0x18069EEFC (_lambda_6e770df948d8a5a9abf49638b3e35dc3_--operator().c)
 *     ?DisplayGamingTaskView@XamlGamingTaskViewHost@@AEAAXXZ @ 0x18069F82C (-DisplayGamingTaskView@XamlGamingTaskViewHost@@AEAAXXZ.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1806A0C10 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454@Z @ 0x1800020B0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800020B0.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180024F20 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1800E1AF8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18011AE3C (-Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowGamingTaskView::Stop(
        XamlSwitcherTelemetry::ShowGamingTaskView *this,
        unsigned __int8 a2)
{
  int *v2; // rax
  int v4; // esi
  int v5; // ecx
  int *v6; // rdi
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  int v16; // ecx
  int v17; // [rsp+C0h] [rbp-80h] BYREF
  int v18; // [rsp+C4h] [rbp-7Ch] BYREF
  int v19; // [rsp+C8h] [rbp-78h] BYREF
  int v20; // [rsp+CCh] [rbp-74h] BYREF
  int v21; // [rsp+D0h] [rbp-70h] BYREF
  int v22; // [rsp+D4h] [rbp-6Ch] BYREF
  __int64 v23; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+100h] [rbp-40h] BYREF
  __int64 v29; // [rsp+108h] [rbp-38h] BYREF
  __int64 v30; // [rsp+110h] [rbp-30h] BYREF
  __int64 v31; // [rsp+118h] [rbp-28h] BYREF
  __int64 v32; // [rsp+120h] [rbp-20h] BYREF
  __int64 v33[3]; // [rsp+128h] [rbp-18h] BYREF
  int v34; // [rsp+150h] [rbp+10h] BYREF
  DWORD v35; // [rsp+160h] [rbp+20h] BYREF
  int v36; // [rsp+168h] [rbp+28h] BYREF

  v2 = (int *)*((_QWORD *)this + 34);
  v4 = a2;
  v5 = v2[18];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = XamlSwitcherLogging::Provider(v12);
    if ( *(_DWORD *)v13 > 5u )
    {
      v34 = v4;
      CurrentThreadId = GetCurrentThreadId();
      v15 = *((_QWORD *)this + 34);
      v35 = CurrentThreadId;
      v16 = *(_DWORD *)(v15 + 72);
      v23 = 0LL;
      v36 = v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v13,
        byte_180821936,
        (const GUID *)(v15 + 8),
        0LL,
        (__int64)&v23,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = XamlSwitcherLogging::Provider(v7);
    if ( *(_DWORD *)v8 > 5u )
    {
      v9 = *((_QWORD *)v6 + 6);
      v26 = *((_QWORD *)v6 + 14);
      v17 = v6[26];
      v10 = *((_QWORD *)v6 + 12);
      v23 = 0LL;
      v11 = *((_QWORD *)this + 34);
      v27 = v10;
      v28 = *((_QWORD *)v6 + 11);
      v18 = v6[20];
      v29 = *((_QWORD *)v6 + 9);
      v19 = v6[8];
      v30 = *((_QWORD *)v6 + 3);
      v20 = *v6;
      v31 = *((_QWORD *)v6 + 16);
      v21 = v6[16];
      v32 = *((_QWORD *)v6 + 7);
      v22 = v6[2];
      v24 = v9;
      v35 = v6[17];
      v36 = v6[4];
      v25 = *((_QWORD *)v6 + 15);
      v34 = v4;
      v33[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        (__int64)&unk_18082199A,
        v11 + 8,
        (__int64)v8,
        (__int64)&v23,
        (__int64)v33,
        (__int64)&v22,
        &v32,
        (__int64)&v21,
        &v31,
        (__int64)&v20,
        &v30,
        (__int64)&v19,
        &v29,
        (__int64)&v18,
        &v28,
        &v27,
        (__int64)&v17,
        &v26,
        &v25,
        (__int64)&v36,
        (__int64)&v35,
        &v24);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
