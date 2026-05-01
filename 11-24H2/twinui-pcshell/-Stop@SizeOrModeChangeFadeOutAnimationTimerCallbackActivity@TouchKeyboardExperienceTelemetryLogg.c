/*
 * XREFs of ?Stop@SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N@Z @ 0x180475284
 * Callers:
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180474600 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180005010 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180005010.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180024F20 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801E148C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LogonTabTipGroupPolicy@@@details@wil@@QEAA_NXZ @ 0x1804789E4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_LogonTabTipGroupPolicy@@@details@.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity::Stop(
        TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity *this,
        char a2)
{
  char IsEnabled; // al
  int *v5; // rcx
  bool v6; // zf
  int v7; // eax
  int *v8; // rdi
  const struct _tlgProvider_t *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v15; // r9
  unsigned __int8 *v16; // rdx
  int *v17; // rdi
  const struct _tlgProvider_t *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // ecx
  int v24; // [rsp+C0h] [rbp-80h] BYREF
  int v25; // [rsp+C4h] [rbp-7Ch] BYREF
  int v26; // [rsp+C8h] [rbp-78h] BYREF
  int v27; // [rsp+CCh] [rbp-74h] BYREF
  int v28; // [rsp+D0h] [rbp-70h] BYREF
  int v29; // [rsp+D4h] [rbp-6Ch] BYREF
  int v30; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v35; // [rsp+100h] [rbp-40h] BYREF
  __int64 v36; // [rsp+108h] [rbp-38h] BYREF
  __int64 v37; // [rsp+110h] [rbp-30h] BYREF
  __int64 v38; // [rsp+118h] [rbp-28h] BYREF
  __int64 v39; // [rsp+120h] [rbp-20h] BYREF
  __int64 v40; // [rsp+128h] [rbp-18h] BYREF
  _QWORD v41[2]; // [rsp+130h] [rbp-10h] BYREF
  char v42; // [rsp+170h] [rbp+30h] BYREF
  DWORD v43; // [rsp+178h] [rbp+38h] BYREF

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_LogonTabTipGroupPolicy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_LogonTabTipGroupPolicy>::GetImpl'::`2'::impl);
  v5 = (int *)*((_QWORD *)this + 34);
  v6 = IsEnabled == 0;
  v7 = v5[18];
  if ( !v6 )
  {
    if ( v7 < 0 && v7 == v5[22] )
    {
      v8 = v5 + 20;
      if ( v5 != (int *)-80LL )
      {
        wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
        v9 = TouchKeyboardExperienceTraceLogging::Provider();
        if ( *(_DWORD *)v9 > 5u )
        {
          v34 = *((_QWORD *)v8 + 14);
          v10 = *((_QWORD *)v8 + 6);
          v26 = v8[26];
          v35 = *((_QWORD *)v8 + 12);
          v11 = *((_QWORD *)this + 34);
          v36 = *((_QWORD *)v8 + 11);
          v27 = v8[20];
          v37 = *((_QWORD *)v8 + 9);
          v28 = v8[8];
          v38 = *((_QWORD *)v8 + 3);
          v29 = *v8;
          v39 = *((_QWORD *)v8 + 16);
          v30 = v8[16];
          v40 = *((_QWORD *)v8 + 7);
          v24 = v8[2];
          v41[0] = 0x1000000LL;
          v31 = 0x1000000LL;
          v32 = v10;
          v43 = v8[17];
          v25 = v8[4];
          v12 = *((_QWORD *)v8 + 15);
          v42 = a2;
          v33 = v12;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
            (__int64)v9,
            (__int64)&unk_1807FCB5B,
            v11 + 8,
            (__int64)v9,
            (__int64)&v31,
            (__int64)v41,
            (__int64)&v24,
            &v40,
            (__int64)&v30,
            &v39,
            (__int64)&v29,
            &v38,
            (__int64)&v28,
            &v37,
            (__int64)&v27,
            &v36,
            &v35,
            (__int64)&v26,
            &v34,
            &v33,
            (__int64)&v25,
            (__int64)&v43,
            &v32);
        }
        goto LABEL_18;
      }
    }
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v13 <= 5u )
      goto LABEL_18;
    v42 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v16 = (unsigned __int8 *)&unk_1807FC8DE;
LABEL_17:
    v22 = *((_QWORD *)this + 34);
    v43 = CurrentThreadId;
    v23 = *(_DWORD *)(v22 + 72);
    v31 = 0x1000000LL;
    v24 = v23;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)v13,
      v16,
      (const GUID *)(v22 + 8),
      v15,
      (__int64)&v31,
      (__int64)&v24,
      (__int64)&v43,
      (__int64)&v42);
    goto LABEL_18;
  }
  if ( v7 >= 0 || v7 != v5[22] || (v17 = v5 + 20, v5 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v13 <= 5u )
      goto LABEL_18;
    v42 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v16 = (unsigned __int8 *)&unk_1807FCADE;
    goto LABEL_17;
  }
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v18 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v18 > 5u )
  {
    v40 = *((_QWORD *)v17 + 14);
    v19 = *((_QWORD *)v17 + 6);
    v30 = v17[26];
    v39 = *((_QWORD *)v17 + 12);
    v20 = *((_QWORD *)this + 34);
    v38 = *((_QWORD *)v17 + 11);
    v29 = v17[20];
    v37 = *((_QWORD *)v17 + 9);
    v28 = v17[8];
    v36 = *((_QWORD *)v17 + 3);
    v27 = *v17;
    v35 = *((_QWORD *)v17 + 16);
    v26 = v17[16];
    v34 = *((_QWORD *)v17 + 7);
    v25 = v17[2];
    v33 = 0x1000000LL;
    v32 = 0x1000000LL;
    v31 = v19;
    v43 = v17[17];
    v24 = v17[4];
    v21 = *((_QWORD *)v17 + 15);
    v42 = a2;
    v41[0] = v21;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
      (__int64)v18,
      (__int64)&unk_1807FC967,
      v20 + 8,
      (__int64)v18,
      (__int64)&v32,
      (__int64)&v33,
      (__int64)&v25,
      &v34,
      (__int64)&v26,
      &v35,
      (__int64)&v27,
      &v36,
      (__int64)&v28,
      &v37,
      (__int64)&v29,
      &v38,
      &v39,
      (__int64)&v30,
      &v40,
      v41,
      (__int64)&v24,
      (__int64)&v43,
      &v31);
  }
LABEL_18:
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
