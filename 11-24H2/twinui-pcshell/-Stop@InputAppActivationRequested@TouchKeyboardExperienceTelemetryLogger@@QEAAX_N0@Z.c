/*
 * XREFs of ?Stop@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x180474D00
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180472E10 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644@Z @ 0x180006470 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180006470.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180024F20 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1801C713C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::Stop(
        TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *this,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  int *v3; // rax
  int v5; // esi
  int v6; // r14d
  int v7; // ecx
  int *v8; // rdi
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // [rsp+B0h] [rbp-80h] BYREF
  DWORD v18; // [rsp+B4h] [rbp-7Ch] BYREF
  int v19; // [rsp+B8h] [rbp-78h] BYREF
  int v20; // [rsp+BCh] [rbp-74h] BYREF
  int v21; // [rsp+C0h] [rbp-70h] BYREF
  int v22; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v23; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+100h] [rbp-30h] BYREF
  __int64 v31; // [rsp+108h] [rbp-28h] BYREF
  __int64 v32; // [rsp+110h] [rbp-20h] BYREF
  int v33; // [rsp+140h] [rbp+10h] BYREF
  int v34; // [rsp+158h] [rbp+28h] BYREF

  v3 = (int *)*((_QWORD *)this + 34);
  v5 = a3;
  v6 = a2;
  v7 = v3[18];
  if ( v7 >= 0 || v7 != v3[22] || (v8 = v3 + 20, v3 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = TouchKeyboardExperienceTraceLogging::Provider();
    v14 = (__int64)v13;
    if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v33 = v5;
      v34 = v6;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 34);
      v18 = CurrentThreadId;
      v17 = *(_DWORD *)(v16 + 72);
      v23 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v14,
        byte_1807FED5F,
        (const GUID *)(v16 + 8),
        0LL,
        (__int64)&v23,
        (__int64)&v17,
        (__int64)&v18,
        (__int64)&v34,
        (__int64)&v33);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      v24 = *((_QWORD *)v8 + 15);
      v25 = *((_QWORD *)v8 + 14);
      v12 = *((_QWORD *)this + 34);
      v19 = v8[26];
      v26 = *((_QWORD *)v8 + 12);
      v27 = *((_QWORD *)v8 + 11);
      v20 = v8[20];
      v28 = *((_QWORD *)v8 + 9);
      v21 = v8[8];
      v29 = *((_QWORD *)v8 + 3);
      v22 = *v8;
      v30 = *((_QWORD *)v8 + 16);
      v17 = v8[16];
      v31 = *((_QWORD *)v8 + 7);
      v18 = v8[2];
      v32 = 0x1000000LL;
      v23 = 0x1000000LL;
      v33 = v5;
      v34 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        (__int64)&unk_1807FEC08,
        v12 + 8,
        v11,
        (__int64)&v23,
        (__int64)&v32,
        (__int64)&v18,
        &v31,
        (__int64)&v17,
        &v30,
        (__int64)&v22,
        &v29,
        (__int64)&v21,
        &v28,
        (__int64)&v20,
        &v27,
        &v26,
        (__int64)&v19,
        &v25,
        &v24);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
