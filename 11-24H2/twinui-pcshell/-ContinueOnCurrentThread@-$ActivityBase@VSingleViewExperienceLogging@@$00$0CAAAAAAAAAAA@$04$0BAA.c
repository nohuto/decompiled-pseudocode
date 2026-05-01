/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800D138C
 * Callers:
 *     _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::operator() @ 0x18030A098 (_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_--operator().c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::operator() @ 0x180680FBC (_lambda_71ae74f74888d637c85562ef224bc48a_--operator().c)
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::operator() @ 0x18068117C (_lambda_b77313e954014d84b78f3886c1783ac6_--operator().c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D2A64 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  _DWORD *v2; // r8

  v2 = (_DWORD *)*((_QWORD *)a1 + 34);
  if ( *v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  }
  else
  {
    *(_OWORD *)this = 0LL;
    *((_OWORD *)this + 1) = 0LL;
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::ActivityThreadWatcher *)((char *)this + 32),
      0LL,
      0LL,
      0);
  }
  return this;
}
