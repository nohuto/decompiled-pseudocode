/*
 * XREFs of ?Stop@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAX_N@Z @ 0x1800EDCE4
 * Callers:
 *     ?OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z @ 0x18027385C (-OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644534@Z @ 0x18000E818 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000E818.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180024F20 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@434@Z @ 0x1800CC314 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall WindowDragInputProviderTelemetry::OnArrangementReset::Stop(
        WindowDragInputProviderTelemetry::OnArrangementReset *this)
{
  int *v1; // rax
  int v3; // ecx
  int *v4; // rdi
  const struct _tlgProvider_t *v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  const struct _tlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  int v11; // [rsp+D0h] [rbp-80h] BYREF
  int v12; // [rsp+D4h] [rbp-7Ch] BYREF
  int v13; // [rsp+D8h] [rbp-78h] BYREF
  int v14; // [rsp+DCh] [rbp-74h] BYREF
  int v15; // [rsp+E0h] [rbp-70h] BYREF
  int v16; // [rsp+E4h] [rbp-6Ch] BYREF
  __int64 v17; // [rsp+E8h] [rbp-68h] BYREF
  _QWORD v18[2]; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v19; // [rsp+100h] [rbp-50h] BYREF
  __int64 v20; // [rsp+108h] [rbp-48h] BYREF
  __int64 v21; // [rsp+110h] [rbp-40h] BYREF
  __int64 v22; // [rsp+118h] [rbp-38h] BYREF
  __int64 v23; // [rsp+120h] [rbp-30h] BYREF
  __int64 v24; // [rsp+128h] [rbp-28h] BYREF
  __int64 v25; // [rsp+130h] [rbp-20h] BYREF
  __int64 v26; // [rsp+138h] [rbp-18h] BYREF
  __int64 v27; // [rsp+140h] [rbp-10h] BYREF
  DWORD v28; // [rsp+180h] [rbp+30h] BYREF
  int v29; // [rsp+188h] [rbp+38h] BYREF

  v1 = (int *)*((_QWORD *)this + 34);
  v3 = v1[18];
  if ( v3 >= 0 || v3 != v1[22] || (v4 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v8 > 5u )
    {
      v18[0] = 0x1000000LL;
      CurrentThreadId = GetCurrentThreadId();
      v10 = *((_QWORD *)this + 34);
      v28 = CurrentThreadId;
      v29 = *(_DWORD *)(v10 + 72);
      v17 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        (__int64)&unk_18081665D);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v5 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v5 > 5u )
    {
      v20 = *((_QWORD *)v4 + 15);
      v21 = *((_QWORD *)v4 + 14);
      v6 = *((_QWORD *)v4 + 6);
      v11 = v4[26];
      v7 = *((_QWORD *)this + 34);
      v22 = *((_QWORD *)v4 + 12);
      v23 = *((_QWORD *)v4 + 11);
      v12 = v4[20];
      v24 = *((_QWORD *)v4 + 9);
      v13 = v4[8];
      v25 = *((_QWORD *)v4 + 3);
      v14 = *v4;
      v26 = *((_QWORD *)v4 + 16);
      v15 = v4[16];
      v27 = *((_QWORD *)v4 + 7);
      v16 = v4[2];
      v19 = v6;
      v28 = v4[17];
      LODWORD(v6) = v4[4];
      v18[1] = 0x1000000LL;
      v29 = v6;
      v17 = 0x1000000LL;
      v18[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v5,
        (__int64)&unk_180816484,
        v7 + 8,
        (__int64)v5,
        (__int64)v18,
        (__int64)&v17,
        (__int64)&v16,
        &v27,
        (__int64)&v15,
        &v26,
        (__int64)&v14,
        &v25,
        (__int64)&v13,
        &v24,
        (__int64)&v12,
        &v23,
        &v22,
        (__int64)&v11,
        &v21,
        &v20,
        (__int64)&v29,
        (__int64)&v28,
        &v19);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
