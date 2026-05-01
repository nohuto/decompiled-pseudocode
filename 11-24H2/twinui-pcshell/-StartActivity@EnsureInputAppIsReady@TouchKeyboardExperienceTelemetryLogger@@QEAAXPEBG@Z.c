/*
 * XREFs of ?StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1800814A0
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18005508C (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031110 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180083344 (-zInternalStart@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgR.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::StartActivity(
        TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *this,
        const unsigned __int16 *a2)
{
  const struct _tlgProvider_t *v4; // rsi
  const GUID *v5; // rax
  const GUID *v6; // r8
  __int64 v7; // rcx
  int v8; // ecx
  _DWORD v9[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  void *v13; // [rsp+60h] [rbp-9h]
  int v14; // [rsp+68h] [rbp-1h]
  int v15; // [rsp+6Ch] [rbp+3h]
  __int64 *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  _DWORD *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  const unsigned __int16 *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v4 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v10 = 0x1000000LL;
    v9[0] = GetCurrentThreadId();
    v5 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v6 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
    if ( a2 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( a2[v7] );
      v8 = 2 * v7 + 2;
    }
    else
    {
      a2 = &pvData;
      v8 = 2;
    }
    v21 = v8;
    v18 = v9;
    v20 = a2;
    v16 = &v10;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v4 + 1);
    v22 = 0;
    v19 = 4LL;
    v17 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v13 = &unk_18080170C;
    UserData.Reserved = 2;
    v14 = 82;
    v15 = 1;
    v9[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v4 + 4), &EventDescriptor, v6, v5, 5u, &UserData);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *)((char *)this + 288));
}
