/*
 * XREFs of ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800347D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180029834 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ??R_lambda_ab8afa584d195baf28431d185b201c0d_@@QEBA@XZ @ 0x18002C2D0 (--R_lambda_ab8afa584d195baf28431d185b201c0d_@@QEBA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1800394BC (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039978 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::LaunchManager::LaunchDefaultEntryPointForPackage(
        ContentManagement::LaunchManager *this,
        HSTRING a2,
        __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  bool v5; // dl
  int v6; // eax
  struct wil::ThreadErrorContext *v7; // r8
  int v8; // ebx
  int v10[2]; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+2Ch] [rbp-24h]
  unsigned int v12[2]; // [rsp+30h] [rbp-20h] BYREF
  const char *v13; // [rsp+38h] [rbp-18h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  __int16 v15; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  HSTRING v17; // [rsp+78h] [rbp+28h] BYREF
  HSTRING *v18; // [rsp+80h] [rbp+30h] BYREF

  v17 = a2;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    a2,
    a3);
  v18 = &v17;
  *(_QWORD *)v12 = retaddr;
  v13 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v14 = 0LL;
  v15 = 392;
  LOBYTE(v3) = 3;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    v4,
    v3);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v10, v5);
  v6 = _lambda_ab8afa584d195baf28431d185b201c0d_::operator()(&v18);
  v8 = v6;
  if ( v6 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v6,
      (int)v10,
      v7,
      (unsigned int)v12,
      *(const struct DiagnosticsInfo **)v10);
  if ( *(_QWORD *)v10 )
    *(_DWORD *)(*(_QWORD *)v10 + 16LL) = v11;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x188,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v8,
    v10[0]);
  return (unsigned int)v8;
}
