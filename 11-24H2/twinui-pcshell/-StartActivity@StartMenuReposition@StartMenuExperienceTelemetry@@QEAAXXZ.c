/*
 * XREFs of ?StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ @ 0x1800B67CC
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B5D74 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031110 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B6920 (-zInternalStart@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?get@?$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging@@P6AXXZ@Z @ 0x1800B698C (-get@-$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall StartMenuExperienceTelemetry::StartMenuReposition::StartActivity(
        StartMenuExperienceTelemetry::StartMenuReposition *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  const GUID *v4; // rax
  const GUID *v5; // r8
  DWORD CurrentThreadId; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v7[12]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  _BYTE *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  DWORD *p_CurrentThreadId; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v3 = *(_QWORD *)(wil::details::static_lazy<StartMenuExperienceLogging>::get(
                     v2,
                     _lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v3 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    *(_QWORD *)&v7[4] = 0LL;
    v4 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v5 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
    p_CurrentThreadId = &CurrentThreadId;
    v17 = 4;
    v18 = 0;
    v13 = &v7[4];
    v14 = 8;
    v15 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v3 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v10 = &unk_1807ED912;
    v11 = 63;
    v12 = 1;
    *(_QWORD *)v7 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v3 + 32), &EventDescriptor, v5, v4, 4u, &UserData);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((StartMenuExperienceTelemetry::StartMenuReposition *)((char *)this + 288));
}
