/*
 * XREFs of ?Stop@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXUtagRECT@@0@Z @ 0x18050DE30
 * Callers:
 *     ?GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z @ 0x18050B6B0 (-GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644444444@Z @ 0x18000BF6C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000BF6C.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180024F20 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x1801EFFE8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::Stop(
        VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *this,
        struct tagRECT *a2,
        struct tagRECT *a3)
{
  __int64 v3; // rax
  int v7; // ecx
  __int64 v8; // rdi
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r9
  LONG v11; // ecx
  __int64 v12; // r8
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // rdi
  LONG bottom; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  LONG v19; // [rsp+E0h] [rbp-80h] BYREF
  LONG v20; // [rsp+E4h] [rbp-7Ch] BYREF
  LONG v21; // [rsp+E8h] [rbp-78h] BYREF
  LONG top; // [rsp+ECh] [rbp-74h] BYREF
  LONG v23; // [rsp+F0h] [rbp-70h] BYREF
  LONG v24; // [rsp+F4h] [rbp-6Ch] BYREF
  LONG left; // [rsp+F8h] [rbp-68h] BYREF
  _DWORD v26[5]; // [rsp+FCh] [rbp-64h] BYREF
  __int64 v27; // [rsp+110h] [rbp-50h] BYREF
  __int64 v28; // [rsp+118h] [rbp-48h] BYREF
  __int64 v29; // [rsp+120h] [rbp-40h] BYREF
  __int64 v30; // [rsp+128h] [rbp-38h] BYREF
  __int64 v31; // [rsp+130h] [rbp-30h] BYREF
  __int64 v32; // [rsp+138h] [rbp-28h] BYREF
  __int64 v33; // [rsp+140h] [rbp-20h] BYREF
  __int64 v34; // [rsp+148h] [rbp-18h] BYREF
  __int64 v35; // [rsp+150h] [rbp-10h] BYREF
  __int64 v36; // [rsp+158h] [rbp-8h] BYREF
  LONG v37; // [rsp+180h] [rbp+20h] BYREF
  LONG right; // [rsp+198h] [rbp+38h] BYREF

  v3 = *((_QWORD *)this + 34);
  v7 = *(_DWORD *)(v3 + 72);
  if ( v7 >= 0 || v7 != *(_DWORD *)(v3 + 88) || (v8 = v3 + 80, v3 == -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = WindowManagementLogging::Provider();
    v14 = (__int64)v13;
    if ( *(_DWORD *)v13 > 4u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      bottom = a3->bottom;
      right = a3->right;
      v26[0] = a3->top;
      left = a3->left;
      v24 = a2->bottom;
      v23 = a2->right;
      top = a2->top;
      v21 = a2->left;
      v37 = bottom;
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 34);
      v20 = CurrentThreadId;
      v19 = *(_DWORD *)(v17 + 72);
      v27 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v14,
        byte_18080C47C,
        (const GUID *)(v17 + 8),
        v18,
        (__int64)&v27,
        (__int64)&v19,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&top,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&left,
        (__int64)v26,
        (__int64)&right,
        (__int64)&v37);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      right = a3->right;
      v26[1] = a3->top;
      v26[2] = a3->left;
      v26[3] = a2->bottom;
      v26[4] = a2->right;
      v19 = a2->top;
      v20 = a2->left;
      v11 = a3->bottom;
      v12 = *((_QWORD *)this + 34) + 8LL;
      v28 = *(_QWORD *)(v8 + 120);
      v29 = *(_QWORD *)(v8 + 112);
      v21 = *(_DWORD *)(v8 + 104);
      v30 = *(_QWORD *)(v8 + 96);
      v31 = *(_QWORD *)(v8 + 88);
      top = *(_DWORD *)(v8 + 80);
      v32 = *(_QWORD *)(v8 + 72);
      v23 = *(_DWORD *)(v8 + 32);
      v33 = *(_QWORD *)(v8 + 24);
      v24 = *(_DWORD *)v8;
      v34 = *(_QWORD *)(v8 + 128);
      left = *(_DWORD *)(v8 + 64);
      v35 = *(_QWORD *)(v8 + 56);
      v26[0] = *(_DWORD *)(v8 + 8);
      v37 = v11;
      v36 = 0x1000000LL;
      v27 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        (__int64)&unk_18080C14A,
        v12,
        v10,
        (__int64)&v27,
        (__int64)&v36,
        (__int64)v26,
        &v35,
        (__int64)&left,
        &v34,
        (__int64)&v24,
        &v33,
        (__int64)&v23,
        &v32,
        (__int64)&top,
        &v31,
        &v30,
        (__int64)&v21,
        &v29,
        &v28);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
