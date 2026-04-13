/*
 * XREFs of ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180075D30
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0$00X@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z @ 0x18002419C (--$-0$00X@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180029864 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18003945C (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039914 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R_lambda_69f70f84236fb302921f03f01c6e57bb_@@QEBA@XZ @ 0x1800733C4 (--R_lambda_69f70f84236fb302921f03f01c6e57bb_@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::UninstallApp(
        ContentManagement::AppManager *this,
        HSTRING a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rbx
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
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF

  v17 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v4 = wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(
         &v18,
         (__int64)&v17);
  *(_QWORD *)v12 = retaddr;
  v13 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v14 = 0LL;
  v15 = 261;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    1u,
    3u,
    (__int64)retaddr);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v10, v5);
  v6 = _lambda_69f70f84236fb302921f03f01c6e57bb_::operator()((_QWORD **)v4);
  v8 = v6;
  if ( v6 < 0 )
    wil::details::ReportFeatureError((wil::details *)(unsigned int)v6, (__int64)v10, v7, (__int64)v12);
  if ( *(_QWORD *)v10 )
    *(_DWORD *)(*(_QWORD *)v10 + 16LL) = v11;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x105,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
