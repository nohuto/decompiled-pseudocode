/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800D2A08
 * Callers:
 *     _lambda_28dd33157ff92f349d65c7c884e47fdb_::operator() @ 0x1803B60E4 (_lambda_28dd33157ff92f349d65c7c884e47fdb_--operator().c)
 *     _lambda_532c2163530137281656f24e6f38e4a1_::operator() @ 0x1803B61C8 (_lambda_532c2163530137281656f24e6f38e4a1_--operator().c)
 *     _lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_::operator() @ 0x1803B6738 (_lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_--operator().c)
 *     _lambda_872651ef2fbed137a92f03ff9b7f61da_::operator() @ 0x18043DFB4 (_lambda_872651ef2fbed137a92f03ff9b7f61da_--operator().c)
 *     _lambda_9a3222de221babd8ed80f71b88aa5d08_::operator() @ 0x18043E2C8 (_lambda_9a3222de221babd8ed80f71b88aa5d08_--operator().c)
 *     _lambda_55084e4f2abaab1e6a5f5781ce063f25_::operator() @ 0x1804494C8 (_lambda_55084e4f2abaab1e6a5f5781ce063f25_--operator().c)
 *     _lambda_79917a46c0d9777cd1553539ded46aa9_::operator() @ 0x180449A4C (_lambda_79917a46c0d9777cd1553539ded46aa9_--operator().c)
 *     ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x1806A5B00 (-ToggleAllUpView@TaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D2A64 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 */

// Hidden C++ exception states: #wind=1
wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  _DWORD *v3; // r8

  v3 = (_DWORD *)*((_QWORD *)a1 + 34);
  if ( *v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(v3 + 10));
  }
  else
  {
    *(_OWORD *)this = 0LL;
    *((_OWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    *((_QWORD *)this + 8) = 0LL;
    *((_BYTE *)this + 72) = 0;
  }
  return this;
}
