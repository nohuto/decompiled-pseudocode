/*
 * XREFs of ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006BE5C
 * Callers:
 *     _lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator() @ 0x18006D8C0 (_lambda_64334da26fc4dbc2a9fcd40835aea43a_--operator().c)
 * Callees:
 *     memset_0 @ 0x180022931 (memset_0.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18004B258 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1)
{
  char *v1; // rbx
  _QWORD *v3; // rcx

  v1 = (char *)a1 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *((_DWORD *)a1 + 2) = 0;
  v3 = (_QWORD *)((char *)a1 + 88);
  v1[4] = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 6) = "ActionInvokedActivity";
  v1[64] = 0;
  *((_DWORD *)v1 + 18) = 0;
  v3[19] = 0LL;
  v3[20] = 0LL;
  memset_0(v3, 0, 0x98uLL);
  *((_DWORD *)v1 + 62) = 1;
  *((_QWORD *)v1 + 32) = 0LL;
  *((_QWORD *)a1 + 34) = v1;
  *((_QWORD *)a1 + 35) = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 288),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 48),
    0);
  return a1;
}
