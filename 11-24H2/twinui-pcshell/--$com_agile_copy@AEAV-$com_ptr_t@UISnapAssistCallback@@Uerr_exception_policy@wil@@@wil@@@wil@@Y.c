/*
 * XREFs of ??$com_agile_copy@AEAV?$com_ptr_t@UISnapAssistCallback@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UISnapAssistCallback@@Uerr_exception_policy@wil@@@0@W4AgileReferenceOptions@@@Z @ 0x18028D744
 * Callers:
 *     ?Show@GuidedSnapAssistControl@@QEAAXV?$shared_ptr@VGuidedSnapAssistData@@@std@@V?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18028D318 (-Show@GuidedSnapAssistControl@@QEAAXV-$shared_ptr@VGuidedSnapAssistData@@@std@@V-$com_ptr_t@UIAp.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::com_agile_copy<wil::com_ptr_t<ISnapAssistCallback,wil::err_exception_policy> &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // r8
  int AgileReference; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  if ( v3 )
  {
    *a1 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d, v3, a1);
    if ( AgileReference < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x742,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)AgileReference,
        1);
  }
  return a1;
}
