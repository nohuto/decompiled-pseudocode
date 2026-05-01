/*
 * XREFs of ?StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800242D0
 * Callers:
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180023D24 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800244A4 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800252B8 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031110 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnEventQueued::StartActivity(
        SingleViewExperienceTelemetry::OnEventQueued *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  const GUID *v9; // r8
  __int64 v10; // rcx
  const GUID *v11; // r9
  __int64 v12; // rax
  int v13; // eax
  int v14; // ecx
  _DWORD v15[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v16; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  void *v19; // [rsp+68h] [rbp-19h]
  int v20; // [rsp+70h] [rbp-11h]
  int v21; // [rsp+74h] [rbp-Dh]
  __int64 *v22; // [rsp+78h] [rbp-9h]
  __int64 v23; // [rsp+80h] [rbp-1h]
  _DWORD *v24; // [rsp+88h] [rbp+7h]
  __int64 v25; // [rsp+90h] [rbp+Fh]
  const unsigned __int16 *v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+A0h] [rbp+1Fh]
  int v28; // [rsp+A4h] [rbp+23h]
  const unsigned __int16 *v29; // [rsp+A8h] [rbp+27h]
  int v30; // [rsp+B0h] [rbp+2Fh]
  int v31; // [rsp+B4h] [rbp+33h]

  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = *(_QWORD *)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                     v6,
                     _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v7 > 5u )
  {
    v16 = 0LL;
    v15[0] = GetCurrentThreadId();
    v8 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v9 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
    v10 = -1LL;
    v11 = (const GUID *)v8;
    if ( a3 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      a3 = &pvData;
      v13 = 2;
    }
    v29 = a3;
    v30 = v13;
    v31 = 0;
    if ( a2 )
    {
      do
        ++v10;
      while ( a2[v10] );
      v14 = 2 * v10 + 2;
    }
    else
    {
      a2 = &pvData;
      v14 = 2;
    }
    v27 = v14;
    v24 = v15;
    v26 = a2;
    v22 = &v16;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    v28 = 0;
    v25 = 4LL;
    v23 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v19 = &unk_18081DA0B;
    UserData.Reserved = 2;
    v20 = 76;
    v21 = 1;
    v15[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, v9, v11, 6u, &UserData);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SingleViewExperienceTelemetry::OnEventQueued *)((char *)this + 288));
}
