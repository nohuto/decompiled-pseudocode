/*
 * XREFs of _lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_::operator() @ 0x18006D740
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca__Windows::Internal::CNoResult_::Run @ 0x18006E950 (Windows--Internal--COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca___ea_18006E950.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AB80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005F98C (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ??1ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18006CF34 (--1ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEA.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x18006CFF0 (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@U-$less@V-$basic_stri.c)
 *     ?StartActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x18006F3F8 (-StartActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDelivery.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006F6E0 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAA.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_::operator()(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 *v2; // rbx
  __int64 v3; // rax
  const unsigned __int16 *v4; // rsi
  __int64 v5; // rax
  const unsigned __int16 *v6; // rdi
  __int64 v7; // rax
  const unsigned __int16 *v8; // rbx
  const char *v9; // r9
  __int64 result; // rax
  unsigned int v11; // [rsp+20h] [rbp-1D8h]
  wchar_t v12[16]; // [rsp+28h] [rbp-1D0h] BYREF
  wchar_t v13[16]; // [rsp+48h] [rbp-1B0h] BYREF
  wchar_t v14[20]; // [rsp+68h] [rbp-190h] BYREF
  _QWORD v15[42]; // [rsp+90h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v1 = *a1;
  v2 = (__int64 *)(*a1 + 88LL);
  std::wstring::wstring((__int64)v14);
  v3 = std::map<std::wstring,std::wstring>::operator[](v2, v14);
  v4 = (const unsigned __int16 *)v3;
  if ( *(_QWORD *)(v3 + 24) >= 8uLL )
    v4 = *(const unsigned __int16 **)v3;
  std::wstring::wstring((__int64)v13);
  v5 = std::map<std::wstring,std::wstring>::operator[](v2, v13);
  v6 = (const unsigned __int16 *)v5;
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v6 = *(const unsigned __int16 **)v5;
  std::wstring::wstring((__int64)v12);
  v7 = std::map<std::wstring,std::wstring>::operator[](v2, v12);
  v8 = (const unsigned __int16 *)v7;
  if ( *(_QWORD *)(v7 + 24) >= 8uLL )
    v8 = *(const unsigned __int16 **)v7;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"ActionRevertedActivity");
  v15[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity *)v15,
    v8,
    v6,
    v4);
  std::wstring::_Tidy(v12, 1, 0LL);
  std::wstring::_Tidy(v13, 1, 0LL);
  std::wstring::_Tidy(v14, 1, 0LL);
  try
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 72) + 16LL))(*(_QWORD *)(v1 + 72));
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::~ActionRevertedActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity *)v15);
    result = 0LL;
  }
  catch ( ... )
  {
    v11 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x80,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v9);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::~ActionRevertedActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity *)v15);
    return v11;
  }
  return result;
}
