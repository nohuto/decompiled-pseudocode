/*
 * XREFs of ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800B603C
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800818B0 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180029834 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1800394BC (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039978 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QE.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _lambda_633962cfafa552d6328dcc010e2c57bd_::operator() @ 0x1800B5408 (_lambda_633962cfafa552d6328dcc010e2c57bd_--operator().c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rdi
  bool v4; // dl
  int v5; // eax
  struct wil::ThreadErrorContext *v6; // r8
  int v7; // ebx
  std::_Ref_count_base *v8; // rcx
  struct DiagnosticsInfo *v9; // [rsp+28h] [rbp-91h] BYREF
  int v10[4]; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v11[2]; // [rsp+40h] [rbp-79h] BYREF
  const char *v12; // [rsp+48h] [rbp-71h]
  __int64 v13; // [rsp+50h] [rbp-69h]
  __int16 v14; // [rsp+58h] [rbp-61h]
  _QWORD v15[10]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v16; // [rsp+B0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+37h]
  __int64 v18; // [rsp+F8h] [rbp+3Fh] BYREF
  __int64 v19; // [rsp+100h] [rbp+47h] BYREF
  va_list va; // [rsp+110h] [rbp+57h]
  __int64 v21; // [rsp+110h] [rbp+57h] BYREF
  __int64 v22; // [rsp+118h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+118h] [rbp+5Fh]
  __int64 v24; // [rsp+120h] [rbp+67h] BYREF
  va_list va2; // [rsp+120h] [rbp+67h]
  __int64 v26; // [rsp+128h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+128h] [rbp+6Fh]
  __int64 v28; // [rsp+130h] [rbp+77h]
  va_list va4; // [rsp+138h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v26 = va_arg(va4, _QWORD);
  v28 = va_arg(va4, _QWORD);
  v19 = a2;
  v18 = a1;
  v16 = a3;
  v3 = v28;
  v15[9] = v28;
  LOBYTE(v9) = 0;
  v15[0] = &v16;
  va_copy((va_list)&v15[1], va1);
  va_copy((va_list)&v15[2], va);
  va_copy((va_list)&v15[3], va3);
  v15[4] = &v18;
  v15[5] = &v19;
  va_copy((va_list)&v15[6], va2);
  v15[7] = &v9;
  v15[8] = v28;
  *(_QWORD *)v11 = retaddr;
  v12 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp";
  v13 = 0LL;
  v14 = 228;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    1u,
    3u,
    v21);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v10, v4);
  v5 = lambda_633962cfafa552d6328dcc010e2c57bd_::operator()((__int64)v15);
  v7 = v5;
  if ( v5 < 0 )
    wil::details::ReportFeatureError((wil::details *)(unsigned int)v5, (__int64)v10, v6, (__int64)v11);
  if ( *(_QWORD *)v10 )
    *(_DWORD *)(*(_QWORD *)v10 + 16LL) = v10[3];
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v7,
      (int)v9);
  v8 = *(std::_Ref_count_base **)(v3 + 8);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
